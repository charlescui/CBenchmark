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
#include "paramutil.h"
#include "cbenchmark.h"


void get_dir(char *filename, char **dir)
{
	if(filename != NULL)
	{
		int pos, len;
		char dirname[100];
		len = strlen(filename);
		pos = len;
		while((pos-->=0)&&(filename[pos]!='/'));
		if(pos >= 0)
		{
			strncpy(dirname, filename, pos);
			sprintf(dirname+pos, "/temp");
		}
		else
		{
			strcpy(dirname, "temp");
		}
		
		*dir = (char*)malloc(strlen(dirname)+1);
		strcpy(*dir, dirname);
	}
	else
	{
		perror("parameter fila name error");
	}
			

}
/* *
 * @brief handle_temp 
 * handle temp directory "temp", called on parameter initialization or when program exit.
 * When flag = 0 delete original content or create "temp" if it does't exist.
 * When flag = 1 delete the whole directory if it exists.
 *
 * @param name
 * data file name
 * 
 * @param flag
 * specifies create or destroy the directory.
 */
char* handle_temp(char *filename, int flag)
{
	char dirn[1024];
	if(filename != NULL)
	{
		sprintf(dirn,"%s/temp",dirname(strdup(filename)));
		if(access(dirn, R_OK) == 0)
		{
			unlink_recursive(dirn);
			if(flag == 0)
			{
				mkdir(dirn, 0777);
			}
		}
		else
		{
			if(flag == 0)
			{
				mkdir(dirn, 0777);
			}
		}
		
	}else
	{
		printf("Invalid file name:%s", filename);	
	}
	return strdup(dirn);
}



/**
 * @brief set_param_file 
 * set input parameter file.
 *
 * @param p
 * bench_t pointer.
 *
 * @param filename
 * user input filename.
 */
void set_param_file(void *p, char* filename)
{
	if(filename != NULL)
	{
		bench_t *pb = (bench_t*)p;
		pmalloc(1024,(void**)&pb->infile);
		strcpy(pb->infile, filename);
	}
}


//void set_conf_file(void *p, char* confname)

/**
 * @brief init_proc_param 
 * split the file specified by filename into pieces of file, called by main process.
 * each file contains the parameters needed for a process.
 *
 * @param p
 * pointor of the struct bench. We get concurrence and group capacity by this pointer.
 *
 * @param filename
 * name of the file contains all parameters.
 */
void init_proc_param(void *p)
{

	int concurrence , group_capacity;
	char temp_param_buf[MAX_PARAM_SIZE];
	FILE *fin, *fout;

	struct bench *pb = (struct bench*)p;
	concurrence = pb->num;
	group_capacity = pb->groupthreads;
	
	char filename_temp[100] = {0};
	strcpy(filename_temp, pb->infile);
	
	strcpy(pb->infile,handle_temp(filename_temp,0));//store dirname in pb->infile
	
	fin = fopen(filename_temp, "r");
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
	int i,j;
	for(i=0; i < concurrence/group_capacity * group_capacity; i++)
	{
		if(i%group_capacity == 0)
		{
			sprintf(group_filename, "%s/group%d.dat", pb->infile, i/group_capacity);
			fout = fopen(group_filename, "w");	
		}
		for(j = 0; j < currence_num; )
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
		sprintf(group_filename, "%s/group%d.dat", pb->infile, i/group_capacity);
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
void init_param(void *p, proc_param_st_t *pprocparam)
{
	bench_child_t *pbc = (bench_child_t*)p;
	int group = pbc->group;
	char *dirname = pbc->b->infile;
	char group_filename[100];
	char temp_param_buf[MAX_PARAM_SIZE];
	sprintf(group_filename, "%s/group%d.dat", dirname, group);
	FILE *fin = fopen(group_filename, "r");
	INIT_LIST_HEAD(&pprocparam->params);
	pprocparam->size = 0;

	while(!feof(fin))
	{

		fgets(temp_param_buf, MAX_PARAM_SIZE, fin);
		int param_length = strlen(temp_param_buf);
		if(temp_param_buf[param_length - 1] == '\n')
				temp_param_buf[param_length - 1] = 0;
		if(temp_param_buf[param_length - 2] == '\r')
				temp_param_buf[param_length - 2] = 0;
		if(param_length > 0)
		{
			param_st_t *pparam = (param_st_t*)malloc(sizeof(param_st_t));
			pparam->param = (char*)malloc(param_length+1);
			strcpy(pparam->param , temp_param_buf);
			list_add_tail(&pparam->list, &pprocparam->params);
			(pprocparam->size)++;
			temp_param_buf[0] = '\0';
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
		case 1://sequence
			{
				struct list_head *pos;
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
				//index = index % (param_num +1);
				if(index > param_num)
				{
						return NULL;
				}
				pos = &(pparamList->params);
				int i;
				for(i = 0;i <= index;i++)//important:the head node is empty,so i <= index
				{
						pos = pos->next;	
				}
				param_st_t *target = list_entry(pos, param_st_t, list);

				return target->param;

			}
		case 2://random
			{
					break;
			}
		case 3://unique
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


/**
 * @brief select_param_ex 
 * select param from param_file with sequence in uniq file.
 *
 * @param vuser
 *
 * @return 
 * param one line
 */
char* select_param_ex(vuser_node_st_t *vuser)
{
	proc_param_st_t *pparamList = (proc_param_st_t *)vuser->b->param;
	param_mode_st_t pm;
	pm.main_type = 1;
	pparamList->pm = pm;
	return select_param(pparamList,vuser);
}


