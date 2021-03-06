/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@interface AWDSiriSpeechRecognized : PBCodable <NSCopying> {

	unsigned long long _durationFromVoiceRecordingEnd;
	unsigned long long _durationFromVoiceSendEnd;
	unsigned long long _timestamp;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasDurationFromVoiceRecordingEnd; 
@property (assign,nonatomic) unsigned long long durationFromVoiceRecordingEnd;              //@synthesize durationFromVoiceRecordingEnd=_durationFromVoiceRecordingEnd - In the implementation block
@property (assign,nonatomic) char hasDurationFromVoiceSendEnd; 
@property (assign,nonatomic) unsigned long long durationFromVoiceSendEnd;                   //@synthesize durationFromVoiceSendEnd=_durationFromVoiceSendEnd - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDurationFromVoiceRecordingEnd:(unsigned long long)arg1 ;
-(void)setHasDurationFromVoiceRecordingEnd:(char)arg1 ;
-(char)hasDurationFromVoiceRecordingEnd;
-(void)setDurationFromVoiceSendEnd:(unsigned long long)arg1 ;
-(void)setHasDurationFromVoiceSendEnd:(char)arg1 ;
-(char)hasDurationFromVoiceSendEnd;
-(unsigned long long)durationFromVoiceRecordingEnd;
-(unsigned long long)durationFromVoiceSendEnd;
@end

