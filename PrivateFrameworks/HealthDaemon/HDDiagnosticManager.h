/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable;

@interface HDDiagnosticManager : NSObject {

	NSHashTable* _objects;
	int _lock;

}
+(id)sharedDiagnosticManager;
-(void)removeObject:(id)arg1 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)_diagnosticsForKey:(id)arg1 shouldLog:(char)arg2 ;
-(id)_diagnosticsOverview;
-(void)logAllDiagnostics;
-(id)diagnosticsForKey:(id)arg1 ;
@end

