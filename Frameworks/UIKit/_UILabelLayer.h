/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class _UILabelContentLayer;

@interface _UILabelLayer : CALayer {

	_UILabelContentLayer* _contentLayer;
	char _contentInsetsValid;
	UIEdgeInsets _contentInsets;

}
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setMasksToBounds:(char)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)invalidateContentInsets;
-(void)_updateContentLayer;
-(void)updateContentInsets;
-(void)updateContentLayerSize;
-(void)layoutSublayers;
@end

