//
//  BPVCViewController.h
//  BugPlugin
//
//  Created by 玉科 魏 on 13-1-12.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BPVCViewController : UIViewController{
    IBOutlet UIButton *bugCancelBtn;
    IBOutlet UIButton *_bugCompleteBtn;
    IBOutlet UIButton *bugAssignedBtn;
    IBOutlet UIPickerView *bugSeriousLevelPicker;
    IBOutlet UILabel  *bugTitleLable;
    IBOutlet UITextField *bugSubjectTextField;
    IBOutlet UILabel *bugAssignedLable;
    IBOutlet UITextView *bugDescriptionTextView;
    IBOutlet UIImageView *bugCaptureImgView;
}

@property (nonatomic, retain) IBOutlet UIButton *bugCompleteBtn;

@property (nonatomic, retain) NSString *bugVersionIdStr;//[ture]  Strig  项目or日常的编号
@property (nonatomic, retain) NSString *bugAuthorStr;//[true]  user  作者的用户标识
@property (nonatomic, retain) NSString *bugAssignedStr;//[true]   user   指派人的用户标识
@property (nonatomic, retain) NSString *bugTrackerIdStr;//[true]  int   缺陷模板的编号。如果你不知道编号。请在http://kelude.taobao.net/admin/issues/trackers 看
@property (nonatomic, retain) NSString *bugSubjectStr;//String   缺陷标题
@property (nonatomic, retain) NSString *bugLogicalStatuStr;//String  不传入默认为正常的缺陷。传入locked表示锁定的缺陷，不允许更新
@property (nonatomic, retain) NSString *bugNotNoticeStr;//int  一期不用。0表示发送创建缺陷旺旺通知，1表示不发送创建缺陷的旺旺通知
@property (nonatomic, retain) NSString *bugTestsuiteIdStr;//int   一期不用。缺陷关联的测试集编号
@property (nonatomic, retain) NSString *bugPriorityIdStr;//int    一期不用。 缺陷的优先级。94-97.分别表示1-Urgent、2-High、3-Medium、4-Low。默认为96。即3-Medium
@property (nonatomic, retain) NSString *bugExpectedAtStr;//datetime   一期不用。期望修复时间。采用北京时间。格式如：2012-05-29 13:53:46
@property (nonatomic, retain) NSString *bugSeriousLevelStr;// int  缺陷的严重程度。87-90。分别表示1-Blocker、2-Major、3-Normal、4-Trivial
@property (nonatomic, retain) NSString *bugDescriptionStr;// string 	 缺陷详情。支持富文本格式
@property (nonatomic, retain) NSString *bugWatcherUserIdsStr; // int 跟踪者的用户编号。可以传入多个
@property (nonatomic, retain) NSString *bugCustomFieldValuesStr; //string 一期不用。 此参数相当重要。xx表示自定义属性的编号。如何获取此编号。2种方法：1、通过GET请求中返回的自定义属性可以获取编号；2、可以在Kelude自定义属性中查看编号。比如：issue[custom_field_values][47]=6-测试执行期间。表示缺陷的属性“发现阶段”为“6-测试执行期间”。所有自定义属性都采取这种参数形式传入。



@end
