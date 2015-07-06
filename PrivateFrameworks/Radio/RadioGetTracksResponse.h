/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSDate, RadioStation, NSDictionary, NSArray;

@interface RadioGetTracksResponse : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _tracksByStationKey;
	NSDate* _expirationDate;
	RadioStation* _station;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * dialogDictionary; 
@property (nonatomic,retain) NSDate * expirationDate;                               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long globalVersion; 
@property (nonatomic,readonly) char shouldIncrementSkipCount; 
@property (nonatomic,retain) RadioStation * station;                                //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) NSDate * skipDate; 
@property (nonatomic,readonly) int tracklistActionType; 
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unusedKBSyncStrings; 
-(id)initWithResponseDictionary:(id)arg1 ;
-(RadioStation *)station;
-(id)init;
-(void)setStation:(RadioStation *)arg1 ;
-(NSDictionary *)responseDictionary;
-(NSDate *)expirationDate;
-(id)tracksForStationID:(long long)arg1 ;
-(id)tracksForStationHash:(id)arg1 ;
-(id)tracksForStationStringID:(id)arg1 ;
-(id)_tracksForStationKey:(id)arg1 ;
-(NSArray *)unusedKBSyncStrings;
-(char)shouldIncrementSkipCount;
-(NSDate *)skipDate;
-(id)tracksForStation:(id)arg1 ;
-(int)tracklistActionType;
-(unsigned long long)globalVersion;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDictionary *)dialogDictionary;
@end
