/*
 * transaction.c
 *
 *  Created on: 2011-1-21
 *      Author: zheng.cuizh
 */

#include "cbenchmark.h"

/**
 * @brief find_transaction
 * 在vuser_node_st_t *v结构中查找某一事件并返回
 *
 * 执行的事件是和用户信息结构体相关的
 * 可以通过vuser_node_st_t *v结构体找到该虚拟用户的事件列表
 * 该列表是一个链表
 * 通过比较传递进来的事件名称来找到该事件的结构体
 *
 * @param v
 * 当前线程所属的虚拟用户
 * @param name
 * 事件名称
 *
 * @return
 * 如果找到
 * 则返回被找到的事件结构体指针
 * 否则返回NULL
 */
transaction_st_t* find_transaction(vuser_node_st_t *v, const char *name){
	transaction_st_t *tran;
	list_for_each_entry(tran,&v->transactions,list){
		if(strcmp(tran->name,name) == 0){
			return tran;
		}
	}
	return NULL;
}

/**
 * @brief create_transaction
 * 创建一个事件
 *
 * 创建一个新事件的节点
 * 并将新创建的节点添加到该虚拟用户事件列表中
 *
 * @param v
 * 当前线程所属的虚拟用户
 * @param name
 * 事件名称
 */
void create_transaction(vuser_node_st_t *v, const char *name){
	if(find_transaction(v,name))
		return;
	transaction_st_t *tran = (transaction_st_t*)malloc(sizeof(transaction_st_t));
	tran->name = name;
	tran->fail = 0;
	tran->success = 0;
	tran->timer = time(NULL);
	/*
	 * 	当生成事件的时候，要初始化该事件的成功及失败冗余信息链表
	 * */
	INIT_LIST_HEAD(&tran->success_verb);
	INIT_LIST_HEAD(&tran->fail_verb);
	/*
	 * 	将生成好的事件加入到用户事件组的尾部
	 * */
	list_add_tail(&tran->list,&v->transactions);
	syslog(LOG_NOTICE,"[Create Transaction] - %s",tran->name);
}

/**
 * @brief do_transaction
 * 对某一事件作操作(标记:成功/失败)
 *
 * 该函数提供对事件操作的接口
 * 用来对某一个事件统计成功/失败信息
 *
 * @param v
 * 当前线程所属的虚拟用户
 * @param name
 * 事件名称
 * @param boool
 * 事件状态标记 ＠enum BM_STSTUS
 *
 * @todo
 * 目前只统计某一个事件的成功/失败总数
 * 并没有将每次事件发生的其他信息记录下来
 * 因为每次都记录的话会产生很庞大的消息结构
 * 但以后如果需要这么作
 * 我们将扩充success_verb/fail_verb属性以保存事件相关信息
 *
 * @return
 * 如果对该事件操作成功
 * 则返回该事件指针
 * 否则返回NULL
 */
transaction_st_t* do_transaction(vuser_node_st_t *v, const char *name, int boool)
{
	transaction_st_t *tran = find_transaction(v,name);
	syslog(LOG_NOTICE,"Do transaction[%s]",name);
	if(tran==NULL){
		syslog(LOG_ERR,"Could not find transaction[%s]",name);
	}else{
		if(boool == BM_TRAN_SUCCESS){
			tran->success++;
		}else if(boool == BM_TRAN_FAILE){
			tran->fail++;
		}
		/*
		 * 	这里处理成功或者失败的冗余信息
		 * 	success_verb
		 * 	fail_verb
		 * */
		return tran;
	}
	return (transaction_st_t*)NULL;
}

/**
 * @brief success_transaction
 * 标记本次执行该事件成功
 *
 * 将使该事件成功的统计加一
 *
 * @param v
 * 当前线程的虚拟用户
 * @param name
 * 事件名称
 *
 * @return
 * 如果操作成功
 * 返回该事件指针
 * 否则返回NULL
 * @see do_transaction
 */
transaction_st_t* success_transaction(vuser_node_st_t *v, const char *name){
	return do_transaction(v,name,BM_TRAN_SUCCESS);
}

/**
 * @brief fail_transaction
 * 标记本次执行该事件失败
 *
 * 将使该事件失败的统计加一
 *
 * @param v
 * 当前线程的虚拟用户
 * @param name
 * 事件名称
 *
 * @return
 * 如果操作成功
 * 返回该事件指针
 * 否则返回NULL
 * @see do_transaction
 */
transaction_st_t* fail_transaction(vuser_node_st_t *v, const char *name){
	return do_transaction(v,name,BM_TRAN_FAILE);
}

/**
 * @brief do_transactionEx
 * 是do_transaction函数的扩展
 *
 * do_transactionEx与do_transaction不同之处在于
 * do_transactionEx会生成成功以及失败的冗余信息verb
 *
 * @param v
 * 当前线程的虚拟用户
 * @param name
 * 事件名称
 * @param boool
 * 操作标志@enum BM_STSTUS
 * @param msg
 * 该事件发生时用户写入的消息
 *
 * @return
 * 如果操作成功
 * 则返回被操作的事件指针
 * 否则返回NULL
 * @see do_transaction
 */
transaction_st_t* do_transactionEx(vuser_node_st_t *v, const char *name, int boool, const char *msg)
{
	transaction_st_t *tran = find_transaction(v,name);
	syslog(LOG_NOTICE,"Do transaction[%s]",name);
	if(tran==NULL){
		syslog(LOG_ERR,"Could not find transaction[%s]",name);
	}else{
		if(boool == BM_TRAN_START){
				tran->timer = time(NULL);
				return tran;
		}
		/*
		 * 	该id每次使用后递增1
		 * 	用来记录这个事件在日志中的顺序
		 * */
		static long id = 0;
		/*
		 * 	生成冗余信息节点
		 * 	节点中包含事件发生的时间及msg消息等
		 * */
		transaction_verb_st_t *verb = (transaction_verb_st_t*)malloc(sizeof(transaction_verb_st_t));
		verb->id = id++;
		/*
		 * 	00:00:00 UTC, January 1, 1970
		 * 	单位是秒
		 * */
		time(&verb->t);
		verb->msg = strdup(msg);
		verb->spend = time(NULL) - tran->timer;
		tran->timer = time(NULL);

		if(boool == BM_TRAN_SUCCESS){
			/*
			 * 	计算本次事件距离上次事件发生的时间
			 * 	正确和错误的事件分别计算
			 * */
			list_add_tail(&verb->list,&tran->success_verb);
			tran->success++;
		}else if(boool == BM_TRAN_FAILE){
			list_add_tail(&verb->list,&tran->fail_verb);
			tran->fail++;
		}

		return tran;
	}
	return (transaction_st_t*)NULL;
}


/**
 * @brief success_transactionEx
 * 是success_transaction函数的扩展
 *
 * @param v
 * @param name
 * @param msg
 *
 * @return
 * @see success_transaction
 */
transaction_st_t* success_transactionEx(vuser_node_st_t *v, const char *name, const char *msg){
	return do_transactionEx(v,name,BM_TRAN_SUCCESS,msg);
}


/**
 * @brief fail_transactionEx
 * 是fail_transaction函数的扩展
 *
 * @param v
 * @param name
 * @param msg
 *
 * @return
 * @see fail_transaction
 */
transaction_st_t* fail_transactionEx(vuser_node_st_t *v, const char *name, const char *msg){
	return do_transactionEx(v,name,BM_TRAN_FAILE,msg);
}


/**
 * @brief start_transactionEx 
 * 本函数配合successEx和failEx函数使用
 * 从而对本函数和以上两个函数之间的代码块进行计时
 * 如果以上两函数执行前没有对被执行事件使用本函数
 * 那么每个事件所花费的时间将是整个act函数的时间
 * 而无法精确对某一事件执行时间计时
 *
 * @param v
 * @param name
 *
 * @return 
 */
transaction_st_t* start_transactionEx(vuser_node_st_t *v, const char *name){
	return do_transaction(v,name,BM_TRAN_START);
}
