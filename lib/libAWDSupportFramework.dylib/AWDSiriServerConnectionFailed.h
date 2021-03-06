/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDSiriServerConnectionFailed : PBCodable <NSCopying> {

	long long _errorCode;
	unsigned long long _timestamp;
	int _connectionType;
	NSString* _errorDomain;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                       //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) char hasConnectionType; 
@property (assign,nonatomic) int connectionType;                        //@synthesize connectionType=_connectionType - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(int)connectionType;
-(void)setConnectionType:(int)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(char)hasErrorDomain;
-(NSString *)errorDomain;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasErrorCode:(char)arg1 ;
-(char)hasErrorCode;
-(long long)errorCode;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasConnectionType:(char)arg1 ;
-(char)hasConnectionType;
@end

