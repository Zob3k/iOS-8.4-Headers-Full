/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <PBBridgeSupport/NSCopying.h>

@interface PBBProtoDidEndPasscodeCreation : PBCodable <NSCopying> {

	char _isLong;
	char _success;
	SCD_Struct_PB1 _has;

}

@property (assign,nonatomic) char success;                //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) char hasIsLong; 
@property (assign,nonatomic) char isLong;                 //@synthesize isLong=_isLong - In the implementation block
-(char)success;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIsLong:(char)arg1 ;
-(void)setHasIsLong:(char)arg1 ;
-(char)hasIsLong;
-(char)isLong;
-(void)setSuccess:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

