/*
 * main.h
 *
 *  Created on: 2010-10-9
 *      Author: zheng.cuizh
 */

#ifndef MAIN_H
#define MAIN_H
#include <cbenchmark.h>

enum BM_ARGS{
	BM_SELFTEST = 0x01,
	BM_SHARED = 0x02,
	BM_SCEN = 0x04,
	BM_CMD= 0x08,
};

/*
 * 	main.h头文件中要定义benchmark所需的业务参数以及业务函数
 * 	benchmark分别需要三个业务函数：
 * 	1.init
 * 	2.act
 * 	3.end
 * 	这三个函数共用同一个业务参数，三者之间的参数传递可以通过这个业务参数的地址来实现。
 * */


/*
 * 	下面的结构体以及函数是个例子，
 * 	结构体用来存放业务参数以及3个业务函数需要共享的参数，
 * 	函数用来实现调用，
 * 	目前例子中只有一个函数，是赋值给act函数用来作不断迭代调用的。
 * */
/* typedef struct getProfileParams{
	char* uid;
	char* passwd;
} getProfileParams_t;

void* initGetprofile(void* p);
void* actGetprofile(void* p);
*/
#endif  /*  MAIN_H_ */
