/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/NSCopying.h>

@class NSDictionary;

@interface MTLCompileOptions : NSObject <NSCopying> {

	char _fastMathEnabled;
	char _debuggingEnabled;
	NSDictionary* _preprocessorMacros;

}

@property (nonatomic,copy) NSDictionary * preprocessorMacros;              //@synthesize preprocessorMacros=_preprocessorMacros - In the implementation block
@property (assign,nonatomic) char fastMathEnabled;                         //@synthesize fastMathEnabled=_fastMathEnabled - In the implementation block
@property (assign,nonatomic) char debuggingEnabled;                        //@synthesize debuggingEnabled=_debuggingEnabled - In the implementation block
-(NSDictionary *)preprocessorMacros;
-(void)setPreprocessorMacros:(NSDictionary *)arg1 ;
-(char)fastMathEnabled;
-(void)setFastMathEnabled:(char)arg1 ;
-(char)debuggingEnabled;
-(void)setDebuggingEnabled:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
