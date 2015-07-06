/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface UITableViewCellSelectedBackground : UIView {

	int _selectionStyle;
	UIColor* _multiselectBackgroundColor;
	UIColor* _selectionTintColor;
	char _multiselect;

}

@property (assign,nonatomic) int selectionStyle;                                 //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (nonatomic,retain) UIColor * multiselectBackgroundColor;               //@synthesize multiselectBackgroundColor=_multiselectBackgroundColor - In the implementation block
@property (assign,getter=isMultiselect,nonatomic) char multiselect; 
@property (nonatomic,retain) UIColor * selectionTintColor;                       //@synthesize selectionTintColor=_selectionTintColor - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(void)setMultiselect:(char)arg1 ;
-(char)isMultiselect;
-(void)setSelectionStyle:(int)arg1 ;
-(int)selectionStyle;
-(UIColor *)multiselectBackgroundColor;
-(void)setMultiselectBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)selectionTintColor;
@end
