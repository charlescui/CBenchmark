/*
 * =====================================================================================
 *
 *       Filename:  cb_test_params_select.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2011年01月31日 10时11分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include "cbenchmark.h"
#include "paramutil.h"
#include <stdio.h>

typedef struct params_st{
	FILE *fd;
}params_st_t;

void* initialize(void *p)
{
	middleware_t *mw = (middleware_t *)p;
	set_param_file(mw->bp,"./test_params_file.dat");
}

void* init(void *p)
{
	char fn[128] = {0};
	vuser_node_st_t *vuser = (vuser_node_st_t *)p;
	sprintf(fn,"g%d-v%d",vuser->group,vuser->id);
	vuser->param = (params_st_t *)malloc(sizeof(params_st_t));
	((params_st_t *)vuser->param)->fd = fopen(fn,"w+");
}

void* act(void *p)
{
	vuser_node_st_t *vuser = (vuser_node_st_t *)p;
	char *l = select_param_ex(vuser);
	fprintf(((params_st_t *)vuser->param)->fd,"%s\n",l);
}

void* end(void *p)
{
	vuser_node_st_t *vuser = (vuser_node_st_t *)p;
	fclose(((params_st_t *)vuser->param)->fd);
}
