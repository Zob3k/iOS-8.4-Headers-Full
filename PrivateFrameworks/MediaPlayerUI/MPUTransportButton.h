/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class MPUTransportButtonEventHandler;


@protocol MPUTransportButton <NSObject>
@property (nonatomic,readonly) MPUTransportButtonEventHandler * transportButtonEventHandler; 
@property (assign,nonatomic) char adjustsImageWhenHighlighted; 
@property (assign,nonatomic) int transportButtonImageViewContentMode; 
@required
+(id)transportButton;
-(void)setAdjustsImageWhenHighlighted:(char)arg1;
-(void)prepareForReuse;
-(char)adjustsImageWhenHighlighted;
-(void)applyTransportButtonLayoutAttributes:(SCD_Struct_MP5)arg1;
-(char)wantsCustomHighlightAppearance;
-(MPUTransportButtonEventHandler *)transportButtonEventHandler;
-(void)setTransportButtonImageViewContentMode:(int)arg1;
-(int)transportButtonImageViewContentMode;

@end

