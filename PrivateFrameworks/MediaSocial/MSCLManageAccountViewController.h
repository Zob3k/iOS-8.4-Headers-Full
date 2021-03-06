/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class MSCLAccount, MSCLAccountStore, MSCLSettingsTableViewCell, MSCLSettingsTextFieldTableViewCell, UITableView, NSString;

@interface MSCLManageAccountViewController : SKUIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {

	MSCLAccount* _account;
	MSCLAccountStore* _accountStore;
	MSCLSettingsTableViewCell* _deleteAccountButtonCell;
	char _isVerifying;
	MSCLSettingsTextFieldTableViewCell* _passwordCell;
	UITableView* _tableView;
	MSCLSettingsTextFieldTableViewCell* _userNameCell;

}

@property (nonatomic,readonly) MSCLAccount * account;                        //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) MSCLAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_doneButtonAction:(id)arg1 ;
-(void)dealloc;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(char)textFieldShouldReturn:(id)arg1 ;
-(MSCLAccount *)account;
-(MSCLAccountStore *)accountStore;
-(void)_textFieldDidChangeNotification:(id)arg1 ;
-(void)_setVerifying:(char)arg1 ;
-(id)_deleteConfirmationMessage;
-(void)_deleteAccount;
-(void)_verifyPassword:(id)arg1 ;
-(void)_finishVerifyWithAccount:(id)arg1 error:(id)arg2 ;
-(id)initWithAccount:(id)arg1 accountStore:(id)arg2 ;
@end

