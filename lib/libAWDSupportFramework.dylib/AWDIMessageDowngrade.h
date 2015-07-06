/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageDowngrade : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _durationBeforeDowngrade;
	NSString* _guid;
	unsigned _isManualDowngrade;
	SCD_Struct_AW7 _has;

}

@property (nonatomic,readonly) char hasGuid; 
@property (nonatomic,retain) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasDurationBeforeDowngrade; 
@property (assign,nonatomic) unsigned durationBeforeDowngrade;              //@synthesize durationBeforeDowngrade=_durationBeforeDowngrade - In the implementation block
@property (assign,nonatomic) char hasIsManualDowngrade; 
@property (assign,nonatomic) unsigned isManualDowngrade;                    //@synthesize isManualDowngrade=_isManualDowngrade - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(char)hasGuid;
-(NSString *)guid;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDurationBeforeDowngrade:(unsigned)arg1 ;
-(void)setHasDurationBeforeDowngrade:(char)arg1 ;
-(char)hasDurationBeforeDowngrade;
-(void)setIsManualDowngrade:(unsigned)arg1 ;
-(void)setHasIsManualDowngrade:(char)arg1 ;
-(char)hasIsManualDowngrade;
-(unsigned)durationBeforeDowngrade;
-(unsigned)isManualDowngrade;
@end
