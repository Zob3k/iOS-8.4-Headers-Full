/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CPBitmapStore, NSCache;

@interface WeatherImageLoader : NSObject {

	float _scale;
	CPBitmapStore* _store;
	NSCache* _conditionImagesCache;

}

@property (nonatomic,retain) CPBitmapStore * store;                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSCache * conditionImagesCache;              //@synthesize conditionImagesCache=_conditionImagesCache - In the implementation block
+(id)sharedImageLoader;
+(id)conditionImageBundle;
+(id)conditionImageNameWithConditionIndex:(int)arg1 ;
+(id)conditionImageNamed:(id)arg1 ;
+(void)cacheImageIfNecessary:(id)arg1 ;
+(id)conditionImageWithConditionIndex:(int)arg1 ;
+(id)cachedImageNamed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CPBitmapStore *)store;
-(void)setStore:(CPBitmapStore *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(id)cachedImageForKey:(id)arg1 ;
-(NSCache *)conditionImagesCache;
-(void)setConditionImagesCache:(NSCache *)arg1 ;
@end

