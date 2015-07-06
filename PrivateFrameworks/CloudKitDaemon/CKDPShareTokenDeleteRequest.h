/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, NSData;

@interface CKDPShareTokenDeleteRequest : PBRequest <NSCopying> {

	NSString* _routingKey;
	NSData* _shortTokenHash;

}

@property (nonatomic,readonly) char hasRoutingKey; 
@property (nonatomic,retain) NSString * routingKey;                 //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,readonly) char hasShortTokenHash; 
@property (nonatomic,retain) NSData * shortTokenHash;               //@synthesize shortTokenHash=_shortTokenHash - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(void)setShortTokenHash:(NSData *)arg1 ;
-(char)hasShortTokenHash;
-(NSData *)shortTokenHash;
-(char)hasRoutingKey;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
