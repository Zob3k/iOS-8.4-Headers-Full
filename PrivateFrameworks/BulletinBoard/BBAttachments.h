/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/NSCopying.h>
#import <BulletinBoard/NSSecureCoding.h>

@class NSCountedSet, NSMutableDictionary;

@interface BBAttachments : NSObject <NSCopying, NSSecureCoding> {

	int primaryType;
	NSCountedSet* _additionalAttachments;
	NSMutableDictionary* _clientSideComposedImageInfos;

}

@property (assign,nonatomic) int primaryType; 
@property (nonatomic,retain) NSCountedSet * additionalAttachments;                            //@synthesize additionalAttachments=_additionalAttachments - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clientSideComposedImageInfos;              //@synthesize clientSideComposedImageInfos=_clientSideComposedImageInfos - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)primaryType;
-(unsigned)numberOfAdditionalAttachments;
-(unsigned)numberOfAdditionalAttachmentsOfType:(int)arg1 ;
-(void)setPrimaryType:(int)arg1 ;
-(void)addAttachmentOfType:(int)arg1 ;
-(char)isEqualToAttachments:(id)arg1 ;
-(NSCountedSet *)additionalAttachments;
-(void)setAdditionalAttachments:(NSCountedSet *)arg1 ;
-(NSMutableDictionary *)clientSideComposedImageInfos;
-(void)setClientSideComposedImageInfos:(NSMutableDictionary *)arg1 ;
@end
