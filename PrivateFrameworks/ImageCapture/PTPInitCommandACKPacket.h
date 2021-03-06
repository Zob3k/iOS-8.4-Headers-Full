/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PTPInitCommandACKPacket : NSObject {

	unsigned long _connectionNumber;
	unsigned char _responderGUID[16];
	NSString* _responderFriendlyName;

}
-(void)dealloc;
-(id)description;
-(id)contentForTCP;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(id)initWithConnectionNumber:(unsigned long)arg1 responderGUID:(char*)arg2 responderFriendlyName:(id)arg3 ;
-(unsigned long)connectionNumber;
-(id)responderGUIDString;
-(void)setConnectionNumber:(unsigned long)arg1 ;
-(const char*)responderGUID;
-(void)setResponderGUID:(char*)arg1 ;
-(id)responderFriendlyName;
-(void)setResponderFriendlyName:(id)arg1 ;
@end

