/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _RadioPlayEventStationInformation : NSObject {

	NSString* _stationHash;
	long long _stationID;

}

@property (nonatomic,copy) NSString * stationHash;              //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) long long stationID;               //@synthesize stationID=_stationID - In the implementation block
-(NSString *)stationHash;
-(long long)stationID;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
@end
