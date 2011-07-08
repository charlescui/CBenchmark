/*
 * =====================================================================================
 *
 *       Filename:  cb_test_params_file.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2011年01月30日 10时54分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include "paramutil.h"
void* initialize(void *p)
{
	middleware_t *mw = (middleware_t *)p;
	set_param_file(mw->bp,"./test_params_file.dat");
	printf("test param file\n");
}

void* init(void *p){}
void* act(void *p)
{
	vuser_node_st_t *vuser = (vuser_node_st_t *)p;
	char *l,*ll;
   	l = select_param_ex(vuser);
	if(l == NULL){
		printf("no params receive.\n");
		return NULL;
	}else{
		ll = strdup(l);
	}
	char name[32],age[4],addr[128],param[256];
	strcpy(name, strsep(&ll,","));
	strcpy(age, strsep(&ll,","));
	strcpy(addr, strsep(&ll,","));

	printf("GourpId:%d\tUserId:%d\n\tname:%s\n\tage:%s\n\taddr:%s\n\n",vuser->group,vuser->id,name,age,addr);
}
void* end(void *p){}
