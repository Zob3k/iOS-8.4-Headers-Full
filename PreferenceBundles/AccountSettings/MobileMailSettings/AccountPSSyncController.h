/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

@class MailAccount;

@interface AccountPSSyncController : ACUIDataclassConfigurationViewController

@property (nonatomic,readonly) MailAccount * mailAccount; 
-(MailAccount *)mailAccount;
-(void)viewDidLoad;
-(char)shouldVerifyBeforeAccountSave;
-(Class)accountInfoControllerClass;
-(id)valueForAccountSummaryCell;
-(id)specifiers;
@end
