/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CFPDDataBuffer.h>

@interface CFPDMMAPBuffer : CFPDDataBuffer {

	void* bytes;
	unsigned long length;

}
-(id)initWithFileDescriptor:(int)arg1 size:(unsigned long)arg2 allowMappingIfSafe:(char)arg3 ;
-(id)initWithSize:(unsigned long)arg1 bufferPtr:(void*)arg2 ;
-(void)dealloc;
-(unsigned long)length;
-(void*)bytes;
-(void)finalize;
@end

