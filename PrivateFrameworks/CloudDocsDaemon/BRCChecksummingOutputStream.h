/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@class NSData;

@interface BRCChecksummingOutputStream : NSOutputStream {

	CC_SHA1state_st _ctx;
	unsigned char _sig[21];
	char _isOpen;

}

@property (nonatomic,readonly) NSData * signature; 
+(id)checksummingOutputStreamWithTag:(unsigned char)arg1 ;
-(void)close;
-(NSData *)signature;
-(id)initWithTag:(unsigned char)arg1 ;
-(char)hasSpaceAvailable;
-(void)open;
-(int)write:(const char*)arg1 maxLength:(unsigned)arg2 ;
@end

