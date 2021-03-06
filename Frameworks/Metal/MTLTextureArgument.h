/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLArgument.h>

@interface MTLTextureArgument : MTLArgument {

	unsigned short _textureType;
	unsigned short _textureDataType;

}
-(unsigned)textureType;
-(unsigned)textureDataType;
-(id)initWithName:(id)arg1 access:(unsigned)arg2 isActive:(char)arg3 locationIndex:(unsigned)arg4 arraySize:(unsigned)arg5 dataType:(unsigned)arg6 textureType:(unsigned)arg7 ;
-(id)description;
@end

