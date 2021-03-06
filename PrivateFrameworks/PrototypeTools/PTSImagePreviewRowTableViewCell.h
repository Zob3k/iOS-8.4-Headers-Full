/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRowTableViewCell.h>

@class UIImageView, UIView;

@interface PTSImagePreviewRowTableViewCell : PTSRowTableViewCell {

	UIImageView* _imageViewOnLight;
	UIImageView* _imageViewOnDark;
	UIView* _lightBackground;
	UIView* _darkBackground;

}
+(float)cellHeightForRow:(id)arg1 ;
+(void)_getCellHeight:(float*)arg1 leftFrame:(CGRect*)arg2 rightFrame:(CGRect*)arg3 forImage:(id)arg4 inBounds:(CGRect)arg5 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateDisplayedValue;
@end

