/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TSUFlushable.h>

@protocol NSLocking;
@class OITSUFlushingManager, NSObject, NSString;

@interface OITSUFlushableObject : NSObject <TSUFlushable> {

	int _retainCount;
	int _ownerCount;
	OITSUFlushingManager* _flushingManager;
	NSObject*<NSLocking> _flushingManagerIvarLock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)retain;
-(void)dealloc;
-(id)init;
-(unsigned)retainCount;
-(void)flush;
-(void)unload;
-(void)ownerWillAccess;
-(void)ownerDidAccess;
-(char)hasFlushableContent;
-(id)ownerRetain;
-(void)ownerRelease;
-(id)ownerAutoreleasedAccess;
-(oneway void)release;
@end
