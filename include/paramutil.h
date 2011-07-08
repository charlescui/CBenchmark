/*
 * =====================================================================================
 *
 *       Filename:  paramutil.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2011年01月10日 16时04分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Davi.Q (), 
 *        Company:  Aliyun
 *
 * =====================================================================================
 */
#ifndef __H_PARAMUTIL_H
#define __H_PARAMUTIL_H

#include "cbenchmark.h"
#include "paramutil.h"
#define MAX_PARAM_SIZE 1024//define a parameter string's max length


/**
 * @brief 
 * parameter select and update mode
 * mainType: parameter select method( 1 sequential, 2 unique, 3 random).
 * subType: parameter update method( 1 once, 2 each iteration, 3 each occurence) 
 *
 */
typedef struct param_mode_st{
	int main_type;
	int sub_type;
}param_mode_st_t;



/**
 * @brief 
 * struct of parameters distributed to vusers
 *
 */
typedef struct param_st{
	char *param;
	struct list_head list;
}param_st_t;



/**
 * @brief 
 * struct of parameters distributed to processes 
 *
 */
typedef struct proc_param_st{
	struct list_head params;
	param_mode_st_t pm;
	int size;	
}proc_param_st_t;


#ifdef __cplusplus
extern "C" {
#endif

void get_dir(char*filename, char **dir);
/**
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
char* handle_temp(char *filename, int flag);

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
void set_param_file(void *p, char* filename);



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
void init_proc_param(void* p);


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
void init_param(void* p, proc_param_st_t *pprocparam);

char* select_param_ex(vuser_node_st_t *vuser);

/**
 * @brief select_param
 * select a parameter for a vuser.
 *
 * @param pprocparam
 * pointor of the proc_param_st.
 *
 * @param vuser
 * pointor of a vuser struct.We need vuser's ID and curIteNo to calculate parameter index.
 * 
 * @return 
 * the char* pointor of the parameter selected.
 */
char* select_param(proc_param_st_t *pprocparam, vuser_node_st_t *vuser);

#ifdef __cplusplus
}
#endif

#endif
