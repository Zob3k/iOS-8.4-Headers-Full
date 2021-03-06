/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UISwitch;

@interface PKSettingTableCell : UITableViewCell {

	id _target;
	SEL _action;
	UISwitch* _settingSwitch;

}

@property (assign,getter=isOn,nonatomic) char on; 
@property (nonatomic,readonly) id target;                           //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                          //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) UISwitch * settingSwitch;              //@synthesize settingSwitch=_settingSwitch - In the implementation block
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(UISwitch *)settingSwitch;
-(void)setSettingSwitch:(UISwitch *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(SEL)action;
-(id)target;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setOn:(char)arg1 ;
-(char)isOn;
@end

