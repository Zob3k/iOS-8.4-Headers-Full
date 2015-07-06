/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIBezierPath, UIColor, CAShapeLayer;

@interface _UIGlintyShapeView : UIView {

	UIBezierPath* _path;
	UIColor* _fillColor;
	UIColor* _strokeColor;

}

@property (nonatomic,readonly) CAShapeLayer * shapeLayer; 
@property (nonatomic,readonly) UIBezierPath * path;                    //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) UIColor * fillColor;                    //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,readonly) UIColor * strokeColor;                  //@synthesize strokeColor=_strokeColor - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIBezierPath *)path;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(UIColor *)strokeColor;
-(void)setPath:(UIBezierPath *)arg1 ;
-(CAShapeLayer *)shapeLayer;
@end
