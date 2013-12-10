//
//  BPVCViewController.m
//  BugPlugin
//
//  Created by 玉科 魏 on 13-1-12.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#import "BPVCViewController.h"

@interface BPVCViewController ()

@end

@implementation BPVCViewController


#define CAN_NOT_FIND_BUGINFOPLIST_FILE   @"请配置BugPlugin工程中BugInfo.plist文件项"
#define BUGINFOPLIST_VERSIONID_HAVE_NOT_DEFINED @"工程中BugPlugin文件中 version_id 没有配置"
#define BUGINFOPLIST_AUTHOR_HAVE_NOT_DEFINED @"工程中BugPlugin文件中 Author 没有配置"



@interface BugPluginViewController (){
    BugPluginBrain *_bpBrain;
}
//@property (nonatomic, retain) NSString *defaultVersionIdStr;
//@property (nonatomic,retain) NSString *defaultAuthorStr;

@end

@implementation BugPluginViewController
@synthesize bugCompleteBtn = _bugCompleteBtn;
@synthesize bugVersionIdStr, bugAuthorStr, bugAssignedStr, bugSubjectStr, bugTrackerIdStr,
bugLogicalStatuStr, bugNotNoticeStr, bugTestsuiteIdStr, bugPriorityIdStr,
bugExpectedAtStr, bugSeriousLevelStr, bugDescriptionStr, bugWatcherUserIdsStr, bugCustomFieldValuesStr;
//@synthesize defaultVersionIdStr, defaultAuthorStr;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
        
    }
    return self;
}

- (void)viewDidLoad
{
    NSMutableDictionary *testerConfigMutDic = [[NSMutableDictionary alloc] initWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"BugInfo" ofType:@"plist"]];
    if (bugVersionIdStr == NULL) {
        if (testerConfigMutDic) {
            bugVersionIdStr = [testerConfigMutDic objectForKey:@"version_id"];
            if (bugVersionIdStr == NULL) {
                [self showAlertMessageStr:BUGINFOPLIST_VERSIONID_HAVE_NOT_DEFINED];
                bugVersionIdStr = @"371773";
            }
        }else {
            [self showAlertMessageStr:CAN_NOT_FIND_BUGINFOPLIST_FILE];
        }
    }
    if (bugAuthorStr == NULL) {
        if (testerConfigMutDic) {
            bugAuthorStr = [testerConfigMutDic objectForKey:@"version_id"];
            if (bugAuthorStr == NULL) {
                [self showAlertMessageStr:BUGINFOPLIST_AUTHOR_HAVE_NOT_DEFINED];
                bugAuthorStr = @"061331";
            }
        }else {
            [self showAlertMessageStr:CAN_NOT_FIND_BUGINFOPLIST_FILE];
        }
    }
    
    bugTitleLable.text = [_bpBrain getBugTitleWithVersionIdStr:bugVersionIdStr];
    _bugCompleteBtn.backgroundColor = [UIColor yellowColor];
    
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)showAlertMessageStr:(NSString *)alertMessage{
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:nil message:alertMessage delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil, nil];
    [alert show];
    [alert release];
}
- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
@end
