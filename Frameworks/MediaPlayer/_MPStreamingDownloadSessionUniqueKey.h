/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _MPStreamingDownloadSessionUniqueKey : NSObject {

	NSString* _buyParameters;
	long long _storeAdamID;

}

@property (nonatomic,copy) NSString * buyParameters;              //@synthesize buyParameters=_buyParameters - In the implementation block
@property (assign,nonatomic) long long storeAdamID;               //@synthesize storeAdamID=_storeAdamID - In the implementation block
-(NSString *)buyParameters;
-(long long)storeAdamID;
-(void)setBuyParameters:(NSString *)arg1 ;
-(void)setStoreAdamID:(long long)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
@end

