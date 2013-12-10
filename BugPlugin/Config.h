//
//  Config.h
//  KeludeTC
//
//  Created by 玉科 魏 on 12-12-27.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//



//=======0是线上，1是预发，2是Daily, 3是去本机模拟数据=====
#define  APP_MODE  0;


//=======空着，到公司补全，提交Bug是6.反馈建议是9  。。。。======
#define BUG_CATAGORY 6



//=====Kelude 3个环境的地址=====
#define KELUDE_HOST_URL_RELEASE @"http://kelude.taobao.org"

#define KELUDE_HOST_URL_PRE_RELEASE  @"http://kelude.taobao.net"

#define KELUDE_HOST_URL_DAILY @"http://daily.kelude.taobao.net"

//==========项目管理===========

//面包屑。查询用户最近访问过的10个项目ID （http://kelude.taobao.net/tools/apis/13 ）
#define RECENT_VISIT_API @"/api/projects/recent_visit.json?"

//根据用户ID查询那些项目中涉及该成员(http://kelude.taobao.net/tools/apis/70)
#define VERSIONS_IN_USER @"/api/projects/version/user.json?"   

//查询项目下包含的成员  （http://kelude.taobao.net/tools/apis/65  ）
#define VERSIONS_MEMBERS @"/api/projects/versions/members.json?"

//=====公共接口=======
//附件上传  （http://kelude.taobao.net/tools/apis/59）
#define ADMIN_ATTACHMENTS_UPLOAD @"/api/admin/attachments/upload"

//======回归接口======

//触发执行回归测试 （http://kelude.taobao.net/tools/apis/29 ）
#define REGRESSIONS_EXECUTE  @"/api/regressions/execute.json?"

//======缺陷======

//新增缺陷 （http://kelude.taobao.net/tools/apis/33 ） GET+POST
#define ISSUES_NEW @"/api/issues/new"

//新增缺陷TOP接口 (http://api.taobao.com/autoapi/apiPreview.htm?apiId=113166) 
#define ISSUES_NEW_TOP  @"/api/issues/bugs/new"

//查询缺陷 （http://kelude.taobao.net/tools/apis/34 ） GET   JSON+XML
#define ISSUES_SEARCH  @"/api/issues/search.json?"

//更新缺陷 （http://kelude.taobao.net/tools/apis/37）  POST
#define ISSUES_UPDATE @"/api/issues/update.json?"

//=====用例=======

//新增用例 （http://kelude.taobao.net/tools/apis/6 ） POST
#define TESTSUITES_TESTCASE_NEW  @"/api/testsuites/testcase/new.json?"

//用例更新  （http://kelude.taobao.net/tools/apis/7） POST
#define TESTSUITES_TESTCASE_UPDATE  @"/api/testsuites/testcase/update.json?"

//用例查询  （http://kelude.taobao.net/tools/apis/8 ）GET
#define TESTSUITES_TESTCASE_SHOW @"/api/testsuites/testcase/show.json?"



