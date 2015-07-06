/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDAirPlaySessionStarted : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _audioCompressionType;
	unsigned _initiator;
	unsigned _sessionType;
	NSString* _sessionUUID;
	unsigned _transportType;
	SCD_Struct_AW9 _has;

}

@property (nonatomic,readonly) char hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                     //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasInitiator; 
@property (assign,nonatomic) unsigned initiator;                         //@synthesize initiator=_initiator - In the implementation block
@property (assign,nonatomic) char hasSessionType; 
@property (assign,nonatomic) unsigned sessionType;                       //@synthesize sessionType=_sessionType - In the implementation block
@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                     //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) char hasAudioCompressionType; 
@property (assign,nonatomic) unsigned audioCompressionType;              //@synthesize audioCompressionType=_audioCompressionType - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(void)setTransportType:(unsigned)arg1 ;
-(char)hasTransportType;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasTransportType:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)transportType;
-(void)setSessionUUID:(NSString *)arg1 ;
-(char)hasSessionUUID;
-(NSString *)sessionUUID;
-(void)setInitiator:(unsigned)arg1 ;
-(void)setHasInitiator:(char)arg1 ;
-(char)hasInitiator;
-(unsigned)initiator;
-(void)setSessionType:(unsigned)arg1 ;
-(void)setHasSessionType:(char)arg1 ;
-(char)hasSessionType;
-(void)setAudioCompressionType:(unsigned)arg1 ;
-(void)setHasAudioCompressionType:(char)arg1 ;
-(char)hasAudioCompressionType;
-(unsigned)sessionType;
-(unsigned)audioCompressionType;
@end
