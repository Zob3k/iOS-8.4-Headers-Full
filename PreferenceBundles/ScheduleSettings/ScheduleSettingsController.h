/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/ScheduleSettings.bundle/ScheduleSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScheduleSettings/ScheduleSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UIActionSheetDelegate.h>

@class ACAccountStore, PSSpecifier, NSString;

@interface ScheduleSettingsController : PSListController <UIActionSheetDelegate> {

	ACAccountStore* _accountStore;
	PSSpecifier* _checkedSpecifier;
	int _rowToSelect;
	int _radioGroup;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_makeMCCSpecifiers;
-(void)_readScheduleSettings;
-(id)_specifiersForMCCAccount:(id)arg1 ;
-(id)_specifierForMCCAccount:(id)arg1 dataclasses:(id)arg2 canPush:(char)arg3 canFetch:(char)arg4 canManual:(char)arg5 ;
-(id)_mccSchedule:(id)arg1 ;
-(void)_setMCCSchedule:(id)arg1 specifier:(id)arg2 ;
-(int)styleForAccount:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)pushEnabled:(id)arg1 ;
-(void)setPushEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setPollInterval:(id)arg1 specifier:(id)arg2 ;
-(id)specifiers;
-(id)initForContentSize:(CGSize)arg1 ;
-(void)listItemSelected:(id)arg1 ;
@end
