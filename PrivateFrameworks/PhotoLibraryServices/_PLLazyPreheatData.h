/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class NSString, NSData;

@interface _PLLazyPreheatData : NSData {

	NSString* _path;
	NSData* _data;

}
+(id)dataWithContentsOfFile:(id)arg1 ;
-(void)dealloc;
-(unsigned)length;
-(const void*)bytes;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)_loadData;
@end

