/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLArgument.h>

@interface MTLThreadgroupMemoryArgument : MTLArgument {

	unsigned short _alignment;
	unsigned _dataSize;

}
-(id)describe;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 access:(unsigned)arg3 isActive:(char)arg4 locationIndex:(unsigned)arg5 arraySize:(unsigned)arg6 dataSize:(unsigned)arg7 alignment:(unsigned)arg8 ;
-(unsigned)threadgroupMemoryAlignment;
-(unsigned)threadgroupMemoryDataSize;
-(id)description;
@end

