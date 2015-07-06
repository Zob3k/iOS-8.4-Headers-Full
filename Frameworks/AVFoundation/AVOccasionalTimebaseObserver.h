/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTimebaseObserver.h>

@class NSArray;

@interface AVOccasionalTimebaseObserver : AVTimebaseObserver {

	NSArray* _times;
	/*^block*/id _block;

}
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 times:(id)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_effectiveRateChanged;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(void)_fireBlock;
-(SCD_Struct_CM4)_nextFiringTimeAfterTime:(SCD_Struct_CM4)arg1 ;
-(SCD_Struct_CM4)_previousFiringTimeBeforeTime:(SCD_Struct_CM4)arg1 ;
-(void)dealloc;
@end
