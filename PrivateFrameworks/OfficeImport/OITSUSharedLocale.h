/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSArray;

@interface OITSUSharedLocale : NSObject {

	CFLocaleRef mCurrentLocale;
	NSArray* mObserverObjects;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
+(id)sharedLocale;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CFLocaleRef)currentLocale;
-(void)datePreferencesChanged:(id)arg1 ;
-(oneway void)release;
@end
