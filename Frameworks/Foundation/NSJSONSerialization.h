/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSJSONSerialization : NSObject {

	void** reserved[6];

}
+(int)writeJSONObject:(id)arg1 toStream:(id)arg2 options:(unsigned)arg3 error:(id*)arg4 ;
+(id)JSONObjectWithStream:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)isValidJSONObject:(id)arg1 ;
+(id)dataWithJSONObject:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
+(id)JSONObjectWithData:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)init;
@end
