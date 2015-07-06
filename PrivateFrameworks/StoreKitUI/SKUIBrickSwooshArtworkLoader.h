/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUISwooshArtworkLoader.h>

@class SKUIBrickSwooshViewController;

@interface SKUIBrickSwooshArtworkLoader : SKUISwooshArtworkLoader {

	int _artworkSize;

}

@property (nonatomic,readonly) SKUIBrickSwooshViewController * swooshViewController; 
-(id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2 ;
-(char)loadImageForBrick:(id)arg1 reason:(int)arg2 ;
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(id)cachedImageForBrick:(id)arg1 ;
-(void)loadImagesForNextPageWithReason:(int)arg1 ;
@end
