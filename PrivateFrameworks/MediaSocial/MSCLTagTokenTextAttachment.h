/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <MediaSocial/MSCLTokenTextAttachment.h>

@class MSCLTag, MSCLTagTokenView;

@interface MSCLTagTokenTextAttachment : MSCLTokenTextAttachment

@property (nonatomic,retain) MSCLTag * representedObject; 
@property (nonatomic,retain) MSCLTagTokenView * tokenView; 
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned)arg4 ;
-(id)initWithTag:(id)arg1 ;
-(id)representedText;
@end

