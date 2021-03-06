/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFileManager, NSString;

@interface ATAirlock : NSObject {

	NSFileManager* _fm;
	NSString* _basePath;

}
+(id)sharedInstance;
-(id)init;
-(id)pathForDataclass:(id)arg1 ;
-(void)evacuateDataclasses:(id)arg1 ;
-(id)artworkPathForDataclass:(id)arg1 artworkIdentifier:(id)arg2 ;
-(id)geniusPathForDataclass:(id)arg1 geniusIdentifier:(id)arg2 ;
-(void)createAirlockForDataclasses:(id)arg1 ;
-(void)evacuate;
-(void)purgeAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 ;
-(void)copyAssetToAirlock:(id)arg1 ;
-(void)processCompletedAsset:(id)arg1 ;
@end

