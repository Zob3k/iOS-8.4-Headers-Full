/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@interface SUFrameAdjustmentImageModifier : SUImageModifier {

	char _shouldSizeDownToFit;
	unsigned _sizingMask;

}

@property (assign,nonatomic) char shouldSizeDownToFit;              //@synthesize shouldSizeDownToFit=_shouldSizeDownToFit - In the implementation block
@property (assign,nonatomic) unsigned sizingMask;                   //@synthesize sizingMask=_sizingMask - In the implementation block
-(char)isEqual:(id)arg1 ;
-(char)scalesImage;
-(CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(unsigned)sizingMask;
-(void)setSizingMask:(unsigned)arg1 ;
-(char)shouldSizeDownToFit;
-(void)setShouldSizeDownToFit:(char)arg1 ;
@end

