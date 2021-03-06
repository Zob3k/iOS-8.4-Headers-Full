/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPCommentContent, CKDPIdentifier, CKDPDate, CKDPLikeInfo, NSString;

@interface CKDPComment : PBCodable <NSCopying> {

	CKDPCommentContent* _commentContent;
	CKDPIdentifier* _commentId;
	CKDPDate* _createdAt;
	CKDPIdentifier* _from;
	CKDPLikeInfo* _likeInfo;
	NSString* _path;

}

@property (nonatomic,readonly) char hasCommentId; 
@property (nonatomic,retain) CKDPIdentifier * commentId;                       //@synthesize commentId=_commentId - In the implementation block
@property (nonatomic,readonly) char hasPath; 
@property (nonatomic,retain) NSString * path;                                  //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) char hasCreatedAt; 
@property (nonatomic,retain) CKDPDate * createdAt;                             //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) char hasFrom; 
@property (nonatomic,retain) CKDPIdentifier * from;                            //@synthesize from=_from - In the implementation block
@property (nonatomic,readonly) char hasCommentContent; 
@property (nonatomic,retain) CKDPCommentContent * commentContent;              //@synthesize commentContent=_commentContent - In the implementation block
@property (nonatomic,readonly) char hasLikeInfo; 
@property (nonatomic,retain) CKDPLikeInfo * likeInfo;                          //@synthesize likeInfo=_likeInfo - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasPath;
-(void)setCommentId:(CKDPIdentifier *)arg1 ;
-(char)hasCommentId;
-(CKDPIdentifier *)commentId;
-(void)setCommentContent:(CKDPCommentContent *)arg1 ;
-(char)hasCommentContent;
-(CKDPCommentContent *)commentContent;
-(void)setLikeInfo:(CKDPLikeInfo *)arg1 ;
-(char)hasLikeInfo;
-(CKDPLikeInfo *)likeInfo;
-(void)setCreatedAt:(CKDPDate *)arg1 ;
-(void)setFrom:(CKDPIdentifier *)arg1 ;
-(char)hasCreatedAt;
-(char)hasFrom;
-(CKDPIdentifier *)from;
-(CKDPDate *)createdAt;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

