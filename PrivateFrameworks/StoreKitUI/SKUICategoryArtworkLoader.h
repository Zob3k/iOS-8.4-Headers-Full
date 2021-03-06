/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>

@class NSMapTable, SKUIImageDataConsumer, SKUIResourceLoader, NSHashTable, UIImage, NSString;

@interface SKUICategoryArtworkLoader : NSObject <SKUIArtworkRequestDelegate> {

	NSMapTable* _artworkRequestIDs;
	SKUIImageDataConsumer* _imageDataConsumer;
	SKUIResourceLoader* _loader;
	NSHashTable* _observers;
	UIImage* _placeholderImage;

}

@property (nonatomic,readonly) SKUIResourceLoader * artworkLoader;                   //@synthesize loader=_loader - In the implementation block
@property (nonatomic,retain) SKUIImageDataConsumer * imageDataConsumer;              //@synthesize imageDataConsumer=_imageDataConsumer - In the implementation block
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (nonatomic,readonly) CGSize imageSize; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(CGSize)imageSize;
-(UIImage *)placeholderImage;
-(void)addObserver:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithArtworkLoader:(id)arg1 ;
-(SKUIResourceLoader *)artworkLoader;
-(SKUIImageDataConsumer *)imageDataConsumer;
-(void)setImageDataConsumer:(SKUIImageDataConsumer *)arg1 ;
-(id)cachedImageForCategory:(id)arg1 ;
-(void)loadImageForCategory:(id)arg1 reason:(int)arg2 ;
@end

