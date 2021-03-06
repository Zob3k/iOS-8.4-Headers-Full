/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class SBFBackdropStatisticsProvider, CABackdropLayer;

@interface SBFBackdropWallpaperView : SBFWallpaperView {

	SBFBackdropStatisticsProvider* _statisticsProvider;
	CABackdropLayer* _layer;

}

@property (assign,nonatomic) char colorSamplingEnabled; 
+(char)_allowsParallax;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setColorSamplingEnabled:(char)arg1 ;
-(char)colorSamplingEnabled;
-(id)_computeAverageColor;
@end

