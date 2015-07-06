/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:59 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class _UISettingsGroup;

@interface SBControlCenterButtonSectionSettings : _UISettings {

	_UISettingsGroup* _settingsGroup;

}

@property (retain) _UISettingsGroup * settingsGroup;              //@synthesize settingsGroup=_settingsGroup - In the implementation block
+(id)supportedButtonModuleClasses;
+(id)buttonModuleClasses;
+(id)settingsControllerModule;
-(char)buttonEnabledForIdentifier:(id)arg1 ;
-(id)buttonSortKeyForIdentifier:(id)arg1 ;
-(Class)buttonSettingsClass;
-(void)setDefaultValues;
-(_UISettingsGroup *)settingsGroup;
-(void)setSettingsGroup:(_UISettingsGroup *)arg1 ;
@end
