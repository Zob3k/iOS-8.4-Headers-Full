/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMChatItem.h>

@class NSString;

@interface IMTranscriptChatItem : IMChatItem {

	NSString* _guid;
	unsigned char _contiguousType;
	unsigned char _attachmentContiguousType;
	unsigned _contiguousLoaded : 1;

}

@property (nonatomic,copy) NSString * guid;                                         //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) unsigned char contiguousType; 
@property (nonatomic,readonly) unsigned char attachmentContiguousType; 
@property (getter=isContiguous,nonatomic,readonly) char contiguous; 
-(Class)__ck_chatItemClass;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)contiguousType;
-(unsigned char)attachmentContiguousType;
-(NSString *)guid;
-(char)isContiguousWithChatItem:(id)arg1 ;
-(char)isAttachmentContiguousWithChatItem:(id)arg1 ;
-(char)isContiguous;
-(char)_isContiguousLoaded;
-(void)_setContiguousLoaded:(char)arg1 ;
-(void)_setContiguousType:(unsigned char)arg1 ;
-(void)_setAttachmentContiguousType:(unsigned char)arg1 ;
-(void)_setGUID:(id)arg1 ;
@end
