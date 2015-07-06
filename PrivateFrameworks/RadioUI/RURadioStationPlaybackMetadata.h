/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <RadioUI/NSCopying.h>
#import <RadioUI/NSMutableCopying.h>
#import <RadioUI/NSSecureCoding.h>

@class RadioArtworkCollection, RadioStation, NSString, NSDictionary;

@interface RURadioStationPlaybackMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	RadioArtworkCollection* _artworkCollection;
	char _hasSetArtworkCollection;
	char _hasSetStationHash;
	char _hasSetStationID;
	char _hasSetStationName;
	char _hasSetStationStringID;
	char _hasValidRadioStation;
	RadioStation* _station;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationName;
	NSString* _stationStringID;

}

@property (nonatomic,readonly) RadioArtworkCollection * artworkCollection; 
@property (nonatomic,readonly) RadioStation * station;                                  //@synthesize station=_station - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stationDictionary; 
@property (nonatomic,copy,readonly) NSString * stationName; 
@property (nonatomic,copy,readonly) NSString * stationHash; 
@property (nonatomic,readonly) long long stationID; 
@property (nonatomic,copy,readonly) NSString * stationStringID; 
+(char)supportsSecureCoding;
-(id)_station;
-(id)initWithStation:(id)arg1 ;
-(id)initWithStationStringID:(id)arg1 ;
-(RadioStation *)station;
-(NSString *)stationStringID;
-(NSString *)stationHash;
-(long long)stationID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 class:(Class)arg2 ;
-(NSDictionary *)stationDictionary;
-(char)isEffectivelyEqualStationWithPlaybackMetadata:(id)arg1 ;
-(NSString *)stationName;
-(RadioArtworkCollection *)artworkCollection;
@end
