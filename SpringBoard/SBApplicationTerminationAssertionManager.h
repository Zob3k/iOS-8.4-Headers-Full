/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:47 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBApplicationTerminationAssertionManager : NSObject {

	NSMutableDictionary* _assertionsByDisplayId;

}
+(id)sharedInstance;
-(id)terminationAssertionsForDisplayId:(id)arg1 ;
-(id)terminationAssertionsForDisplayId:(id)arg1 withReason:(unsigned char)arg2 ;
-(id)acquireTerminationAssertionForDisplayId:(id)arg1 withReason:(unsigned char)arg2 error:(char*)arg3 ;
-(char)_canAcquireTerminationAssertionForDisplayId:(id)arg1 reason:(unsigned char)arg2 error:(char*)arg3 ;
-(id)_requestPluginHoldForAppInfo:(id)arg1 ;
-(void)_addTerminationAssertion:(id)arg1 ;
-(void)_removeTerminationAssertion:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
