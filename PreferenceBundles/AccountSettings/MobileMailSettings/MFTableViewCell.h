/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIColor;

@interface MFTableViewCell : UITableViewCell {

	UIColor* _savedTextColor;
	char _shouldDisableWhileEditing;

}

@property (nonatomic,readonly) float accessoryWidth; 
@property (assign,nonatomic) char disabled; 
@property (assign,nonatomic) char shouldDisableWhileEditing;              //@synthesize shouldDisableWhileEditing=_shouldDisableWhileEditing - In the implementation block
+(float)defaultAccessoryWidth;
+(float)reorderingAccessoryWidth;
-(void)dealloc;
-(void)prepareForReuse;
-(void)willTransitionToState:(unsigned)arg1 ;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(void)setShouldDisableWhileEditing:(char)arg1 ;
-(char)shouldDisableWhileEditing;
-(float)accessoryWidth;
@end
