/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/NSCoding.h>

@class NSString;

@interface MSSubscribedStream : NSObject <NSCoding> {

	NSString* _streamID;
	NSString* _ctag;

}

@property (nonatomic,retain) NSString * streamID;              //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                  //@synthesize ctag=_ctag - In the implementation block
+(id)subscribedStreamWithStreamID:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)ctag;
-(NSString *)streamID;
-(void)setCtag:(NSString *)arg1 ;
-(id)initWithStreamID:(id)arg1 ;
-(void)setStreamID:(NSString *)arg1 ;
@end

