/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>

@class NSString, NSArray;

@interface UIKBGradient : NSObject <NSCopying> {

	NSString* _gradientName;
	NSString* _flatColorName;
	NSString* _startColorName;
	NSString* _endColorName;
	NSArray* _colors;
	float _middleLocation;
	float _opacity;
	char _horizontal;
	char _usesRGBColors;
	char _didQueryRGBColors;

}

@property (assign,nonatomic) float opacity;                     //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) char horizontal;                   //@synthesize horizontal=_horizontal - In the implementation block
@property (nonatomic,readonly) char usesRGBColors; 
+(id)gradientWithFlatColor:(id)arg1 ;
+(id)gradientWith3Colors:(id)arg1 middleLocation:(float)arg2 ;
+(id)gradientWithStartColor:(id)arg1 endColor:(id)arg2 ;
+(id)gradientWithName:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setHorizontal:(char)arg1 ;
-(id)initWithName:(id)arg1 ;
-(char)horizontal;
-(CGGradientRef)CGGradient;
-(id)initWithFlatColor:(id)arg1 ;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 ;
-(id)initWith3Colors:(id)arg1 middleLocation:(float)arg2 ;
-(char)usesRGBColors;
@end

