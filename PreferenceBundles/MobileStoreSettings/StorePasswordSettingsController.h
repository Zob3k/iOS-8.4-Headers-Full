/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface StorePasswordSettingsController : PSListController {

	char _ignoreAccountStoreChangedNotification;

}
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)_setPurchasesPasswordSetting:(id)arg1 ;
-(void)_setFreeDownloadsRequirePasswordEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_freeDownloadsRequirePasswordEnabled;
-(void)_updateSpecifierValues;
-(void)_updateAccountPasswordSettings:(id)arg1 ;
-(id)specifiers;
@end

