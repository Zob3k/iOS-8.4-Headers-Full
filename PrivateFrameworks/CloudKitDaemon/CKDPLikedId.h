/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPIdentifier, NSData, CKDPShareIdentifier;

@interface CKDPLikedId : PBCodable <NSCopying> {

	CKDPIdentifier* _commentIdentifier;
	NSData* _itemId;
	CKDPShareIdentifier* _shareIdentifier;

}

@property (nonatomic,readonly) char hasShareIdentifier; 
@property (nonatomic,retain) CKDPShareIdentifier * shareIdentifier;              //@synthesize shareIdentifier=_shareIdentifier - In the implementation block
@property (nonatomic,readonly) char hasCommentIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * commentIdentifier;                 //@synthesize commentIdentifier=_commentIdentifier - In the implementation block
@property (nonatomic,readonly) char hasItemId; 
@property (nonatomic,retain) NSData * itemId;                                    //@synthesize itemId=_itemId - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setShareIdentifier:(CKDPShareIdentifier *)arg1 ;
-(char)hasShareIdentifier;
-(CKDPShareIdentifier *)shareIdentifier;
-(void)setCommentIdentifier:(CKDPIdentifier *)arg1 ;
-(void)setItemId:(NSData *)arg1 ;
-(char)hasCommentIdentifier;
-(char)hasItemId;
-(CKDPIdentifier *)commentIdentifier;
-(NSData *)itemId;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

