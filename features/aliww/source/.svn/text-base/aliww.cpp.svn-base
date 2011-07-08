/*
 * =====================================================================================
 *
 *       Filename:  aliww.cpp
 *
 *    Description:  阿里旺旺测试用例库
 *
 *        Version:  1.0
 *        Created:  01/27/2011 10:31:46 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Davi.Q (), 
 *        Company:  Aliyun
 *
 * =====================================================================================
 */
#include "aliww.h"


void *initialize(void *p)
{
	middleware_t *pmw = (middleware_t*)p;
	bench_t *pb = pmw->bp;
	int scenarioID = 1;
	printf("Aliww scenario:\n");
	printf("1:Get Bind List\n");
	printf("2:Bind Unbind\n");
	printf("3:TPFS GETCAL\n");
	printf("4:AAS textput\n");
	printf("5:AAS textgetput\n");
	printf("6:IMS login\n");
	printf("7:TPFS gettext\n");
	printf("8:TPFS getpic\n");
	printf("9:TPFS putpic\n");
	printf("10:AAS picput\n");
	printf("11:AAS picputget\n");
	printf("12:TPFS putgetpic\n");
	printf("13:AAS gettxt\n");
	printf("14:AAS picget\n");
	printf("15:IMS login_with_token\n");
	printf("16:IMS updateUserProfile\n");
	printf("17:IMS_MOS chgStatus\n");
	printf("18:MOS getUserStatus\n");
	printf("19:IMS storm_login\n");
	printf("20:dbs_CheckUserTokenExtra\n");
	printf("21:dbs_CheckWebWWPasswd\n");
	printf("22:dbs_CheckUserWebPasswdExtran\n");
	printf("23:dbs_GetUserInfoExNew4n\n");
	printf("24:dbs_UpdateUserDataInfo3\n");
	printf("25:ddbadmin_insertRecord\n");
	printf("26:ddbadmin_getRecord\n");
	printf("27:ddbadmin_updateRecord\n");
	printf("28:ddbadmin_deleteRecord\n");
	printf("29:ddbadmin_insertRecord_delete\n");
	printf("30:uss_insert\n");
	printf("31:uss_get\n");
	printf("32:mos_getUserCount\n");
	printf("\nSelect scenario ID:\n");
	scanf("%d",&scenarioID);
	switch(scenarioID)
	{
		case 1:
			{
				set_param_file(pb, "../../data/get_bind_list.dat");
//				pmw->script.init = get_bind_list_init;
//				pmw->script.act = get_bind_list_act;
				
				break;
			}
		case 2:
			{
				set_param_file(pb, "../../data/bind_unbind.dat");
//				pmw->script.init = bind_unbind_init;
//				pmw->script.act = bind_unbind_act;

				break;
			}
		case 3:
			{
				//set_param_file(pb, "../../data/tpfs.dat");
				pmw->script.init = tpfs_init; 
				pmw->script.act = tpfs_getcal; 
				pmw->script.end = tpfs_end;

				break;
			}
                case 4:
			{
                        	pmw->script.init = aas_init;
	                        pmw->script.act = aas_textput;
        	                //pmw->script.end = aas_end;
                	        break;
			}
                case 5:
			{
                        	pmw->script.init = aas_init;
	                        pmw->script.act = aas_textgetput;
        	                //pmw->script.end = aas_end;
                	        break;
			}
		case 6:
			{
				set_param_file(pb, "../../data/user");
				pmw->script.init = ims_init; 
				pmw->script.act = ims_login; 

				break;
			}
		case 7:
			{
				set_param_file(pb, "../../data/cnalichn.csv");
				pmw->script.init = tpfs_init; 
				pmw->script.act = tpfs_gettext; 
				pmw->script.end = tpfs_end;
				break;
			}
		case 8:
			{
				set_param_file(pb, "../../data/picfilename");
				pmw->script.init = tpfs_init; 
				pmw->script.act = tpfs_getpic; 
				pmw->script.end = tpfs_end;
				break;
			}
		case 9:
			{
				set_param_file(pb, "../../data/cnalichn.csv");
				pmw->script.init = tpfs_init; 
				pmw->script.act = tpfs_putpic; 
				pmw->script.end = tpfs_end;
				break;
			}
		case 10:
			{
				set_param_file(pb, "../../data/cnalichn.csv");
				pmw->script.init = aas_init; 
				pmw->script.act = aas_picput; 
				pmw->script.end = aas_end;
				break;
			}
		case 11:
			{
				set_param_file(pb, "../../data/cnalichn.csv");
				pmw->script.init = aas_init; 
				pmw->script.act = aas_picputget; 
				pmw->script.end = aas_end;
				break;
			}
		case 12:
			{
				set_param_file(pb, "../../data/cnalichn.csv");
				pmw->script.init = tpfs_init; 
				pmw->script.act = tpfs_putgetpic; 
				pmw->script.end = tpfs_end;
				break;
			}
		case 13:
			{
				set_param_file(pb, "../../data/cnalichn.csv");
				pmw->script.init = aas_init; 
				pmw->script.act = aas_textget; 
				pmw->script.end = aas_end;
				break;
			}
		case 14:
			{
				set_param_file(pb, "../../data/picfilename");
				pmw->script.init = aas_init; 
				pmw->script.act = aas_picget; 
				pmw->script.end = aas_end;
				break;
			}
		case 15:
			{
				set_param_file(pb, "../../data/user");
				pmw->script.init = ims_init; 
				pmw->script.act = ims_login_with_token; 
				pmw->script.end = ims_end;
				break;
			}
		case 16:
			{
				set_param_file(pb, "../../data/user_passwd");
				pmw->script.init = ims_init; 
				pmw->script.act = ims_updateUserProfile; 
				pmw->script.end = ims_end;
				break;
			}
		case 17:
			{
				set_param_file(pb, "../../data/user_passwd");
				pmw->script.init = ims_mos_init; 
				pmw->script.act = ims_mos_chgStatus; 
				pmw->script.end = ims_mos_end;
				break;
			}
		case 18:
			{
				set_param_file(pb, "../../data/user");
				pmw->script.init = mos_init; 
				pmw->script.act = mos_getUserStatus;
				pmw->script.end = mos_end;
				break;
			}
		case 19:
			{
				set_param_file(pb, "../../data/user_token");
				pmw->script.init = ims_init; 
				pmw->script.act = ims_storm_login;
				break;
			}
		case 20:
			{
				set_param_file(pb, "../../data/user_token");
				pmw->script.init = dbs_init; 
				pmw->script.act = dbs_CheckUserTokenExtra;
				pmw->script.end = dbs_end;
				break;
			}
		case 21:
			{
				set_param_file(pb, "../../data/user_token");
				pmw->script.init = dbs_init; 
				pmw->script.act = dbs_CheckWebWWPasswd;
				pmw->script.end = dbs_end;
				break;
			}
		case 22:
			{
				set_param_file(pb, "../../data/user_token");
				pmw->script.init = dbs_init; 
				pmw->script.act = dbs_CheckUserWebPasswdExtra;
				pmw->script.end = dbs_end;
				break;
			}
		case 23:
			{
				set_param_file(pb, "../../data/user");
				pmw->script.init = dbs_init; 
				pmw->script.act = dbs_GetUserInfoExNew4;
				pmw->script.end = dbs_end;
				break;
			}
		case 24:
			{
				set_param_file(pb, "../../data/user");
				pmw->script.init = dbs_init; 
				pmw->script.act = dbs_UpdateUserDataInfo3;
				pmw->script.end = dbs_end;
				break;
			}
		case 25:
			{
				pmw->script.init = ddbadmin_init; 
				pmw->script.act = ddbadmin_insertRecord;
				pmw->script.end = ddbadmin_end;
				break;
			}
		case 26:
			{
				set_param_file(pb, "../../data/user");
				pmw->script.init = ddbadmin_init; 
				pmw->script.act = ddbadmin_getRecord;
				pmw->script.end = ddbadmin_end;
				break;
			}
		case 27:
			{
				set_param_file(pb, "../../data/user");
				pmw->script.init = ddbadmin_init; 
				pmw->script.act = ddbadmin_updateRecord;
				pmw->script.end = ddbadmin_end;
				break;
			}
		case 28:
			{
				set_param_file(pb, "../../data/user");
				pmw->script.init = ddbadmin_init; 
				pmw->script.act = ddbadmin_deleteRecord;
				pmw->script.end = ddbadmin_end;
				break;
			}
		case 29:
			{
				set_param_file(pb, "../../data/user");
				pmw->script.init = ddbadmin_init; 
				pmw->script.act = ddbadmin_insertRecord_delete;
				pmw->script.end = ddbadmin_end;
				break;
			}
		case 30:
			{
				set_param_file(pb, "../../data/user");
				pmw->script.init = uss_init; 
				pmw->script.act = uss_insert;
				pmw->script.end = uss_end;
				break;
			}
		case 31:
			{
				set_param_file(pb, "../../data/user");
				pmw->script.init = uss_init; 
				pmw->script.act = uss_get;
				pmw->script.end = uss_end;
				break;
			}
		case 32:
			{
				pmw->script.init = mos_init; 
				pmw->script.act = mos_getUserCount;
				pmw->script.end = mos_end;
				break;
			}
		default:
			{
				printf("scenarioID: %d is not right.Please have a check!\n", scenarioID);
			}

	}
}

