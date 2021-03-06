/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@interface UIRemoveControlMinusButton : UIControl {

	unsigned _rotated : 1;
	unsigned _rotating : 1;
	unsigned _hiding : 1;
	unsigned _showAsPlus : 1;
	unsigned _reserved : 28;
	float _verticalOffset;

}
+(id)minusImage;
+(float)defaultWidth;
+(id)plusImage;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(char)isRotating;
-(void)animator:(id)arg1 stopAnimation:(id)arg2 ;
-(void)_toggleRotateAnimationDidStop:(id)arg1 finished:(char)arg2 ;
-(id)initWithRemoveControl:(id)arg1 ;
-(void)setHiding:(char)arg1 ;
-(char)isHiding;
-(void)toggleRotate:(char)arg1 ;
-(char)isRotated;
@end

