/*
 * =====================================================================================
 *
 *       Filename:  paramUtil.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2011年01月10日 15时52分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Davi.Q (), 
 *        Company:  Aliyun
 *
 * =====================================================================================
 /
 */
#include <benchmark.h>
#include <paramUtil.h>
#include <linux/kernel.h>

/**
 * @brief init_proc_param 
 * split the file specified by filename into pieces of file, called by main process.
 * each file contains the parameters needed for a process.
 *
 * @param concurrence 
 * number of vusers need to generate, specified by user.
 *
 * @param group_capacity
 * number of threads contained in a process, specified by benchmark.
 *
 * @param filename
 * name of the file contains all parameters.
  */
void init_proc_param(int concurrence, int group_capacity, char *filename)
{
	char temp_param_buf[MAX_PARAM_SIZE];
	FILE *fin, *fout;
	fin = fopen(filename, "r");
	int line_num = 0;
	char group_filename[100] = {0};
	while(!feof(fin))
	{
		fgets(temp_param_buf, MAX_PARAM_SIZE, fin);
		if(strlen(temp_param_buf) != 0)
		{
			line_num++;
			temp_param_buf[0] = '\0';
		}
	}
	rewind(fin);
	
	int group_nums = concurrence/group_capacity +(concurrence%group_capacity == 0? 0:1);
	int concurrence_mod = line_num%concurrence;
	int currence_num = line_num/concurrence;//parameter number every vuser could have 
	int i;
	for(i=0; i < concurrence/group_capacity * group_capacity; i++)
	{
		if(i%group_capacity == 0)
		{
			sprintf(group_filename, "temp/group%d.dat",i/group_capacity);
			fout = fopen(group_filename, "w");	
		}
		for(int j = 0; j < currence_num; )
		{
			fgets(temp_param_buf, MAX_PARAM_SIZE, fin);
			if(strlen(temp_param_buf) != 0)
			{	
				fputs(temp_param_buf, fout);
				j++;
			}
		}
		if(i < concurrence_mod)
		{
			fgets(temp_param_buf, MAX_PARAM_SIZE, fin);
			if(strlen(temp_param_buf) != 0)
			{	
				fputs(temp_param_buf, fout);
			}
		}
		if((i+1)%group_capacity == 0)
		{	
			fflush(fout);	
			fclose(fout);	
		}
	}

	if(concurrence%group_capacity > 0)
	{
		sprintf(group_filename,"temp/group%d.dat",group_nums-1);
		fout = fopen(group_filename,"w");
		while(!feof(fin))
		{
			fgets(temp_param_buf, MAX_PARAM_SIZE, fin);
			if(strlen(temp_param_buf) != 0)
			{	
				fputs(temp_param_buf, fout);
				temp_param_buf[0] = '\0';
			}
		}
		fflush(fout);
		fclose(fout);

	}
	fclose(fin);//close fin

}



/**
 * @brief init_param 
 * initialize the process parameters.They are linked by list.
 *
 * @param group
 * the process's group ID.
 *
 * @param pprocparam
 * pointor of the proc_param_st.
 */
void init_param(int group, proc_param_st_t *pprocparam)
{
	char group_filename[100];
	char temp_param_buf[MAX_PARAM_SIZE];
	if(pprocparam->filename == NULL)
	{
		sprintf(group_filename, "temp/group%d.dat",group);
	}else
	{
		strcpy(group_filename, pprocparam->filename);
	}
	printf("group_filename: %s \n",group_filename);
	FILE *fin = fopen(group_filename, "r");
	INIT_LIST_HEAD(&pprocparam->params);
	pprocparam->size = 0;

	while(!feof(fin))
	{
	
		fgets(temp_param_buf, MAX_PARAM_SIZE, fin);
		int param_length = strlen(temp_param_buf);
		if(param_length > 0)
		{
			param_st_t *pparam = (param_st_t*)malloc(sizeof(param_st_t));
			pparam->param = (char*)malloc(param_length+1);
			strcpy(pparam->param , temp_param_buf);
			list_add_tail(&pparam->list, &pprocparam->params);
			(pprocparam->size)++;
		}

	}
	fclose(fin);
}




/* *
 * @brief select_param
 * select a parameter for a vuser.
 *
 * @param pprocparam
 * pointor of the proc_param_st.
 *
 * @param vuser
 * pointor of a vuser struct.We need vuser's ID and curIteNo to calculate parameter index.
 * the char* pointor of the parameter selected.
 */
char* select_param(proc_param_st_t *pparamList, vuser_node_st_t *vuser)
{
	switch(pparamList->pm.main_type)
	{
		case 1:
			{
				list_head *pos;
				int param_num = pparamList->size;
				int user_num = vuser->b->num;		
				int offset = param_num / user_num;
				int mod = param_num % user_num;
				int user_id = vuser->id;
				int index;

				if(user_id >= mod)
				{
					index = user_id * (offset) + mod + (vuser->curIteNo)%(offset);
				}
				else
				{
					index = (offset + 1) * user_id + (vuser->curIteNo)%(offset+1);
				}
				//reach to the index in the list
				
				pos = &(pparamList->params);
				for(int i = 0;i <= index;i++)//important:the head node is empty,so i <= index
				{
					pos = pos->next;	
				}
				param_st_t *target = container_of(pos, param_st_t, list);

				return target->param;

			}
		case 2:
			{
				break;
			}
		case 3:
			{
				break;
			}
		default:
			{
				printf("parameter main type error :%d",pparamList->pm.main_type);
				return NULL;
			}

	}
}

