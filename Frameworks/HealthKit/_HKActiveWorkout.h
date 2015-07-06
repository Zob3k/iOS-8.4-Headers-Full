/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HKWorkout.h>
#import <HealthKit/_HKActiveWorkoutClient.h>

@protocol _HKActiveWorkoutDelegate, _HKActiveWorkoutLifecycleDelegate, OS_dispatch_queue, NSXPCProxyCreating;
@class NSObject, NSDate, NSMutableDictionary, NSMutableData, NSDictionary, NSData, NSString;

@interface _HKActiveWorkout : HKWorkout <_HKActiveWorkoutClient> {

	id<_HKActiveWorkoutDelegate> _delegate;
	id<_HKActiveWorkoutLifecycleDelegate> _lifecycleDelegate;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	int _workoutState;
	int _serverState;
	NSDate* _lastObservedDate;
	NSMutableDictionary* _resumeDataByType;
	id<NSXPCProxyCreating> _serverProxy;
	NSMutableData* _associatedObjectUUIDData;
	char _shouldUseDeviceData;

}

@property (__weak) id<_HKActiveWorkoutDelegate> delegate; 
@property (readonly) int workoutState; 
@property (readonly) int serverState; 
@property (readonly) NSDictionary * resumeDataByType;                                                                                            //@synthesize resumeDataByType=_resumeDataByType - In the implementation block
@property (getter=_associatedObjectUUIDData,readonly) NSData * associatedObjectUUIDData; 
@property (getter=_shouldUseDeviceData,readonly) char shouldUseDeviceData;                                                                       //@synthesize shouldUseDeviceData=_shouldUseDeviceData - In the implementation block
@property (setter=_setLifecycleDelegate:,getter=_lifecycleDelegate,__weak) id<_HKActiveWorkoutLifecycleDelegate> lifecycleDelegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_workoutWithActivityType:(unsigned)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalEnergyBurned:(id)arg6 totalDistance:(id)arg7 goalType:(unsigned)arg8 goal:(id)arg9 shouldUseDeviceData:(char)arg10 metadata:(id)arg11 ;
+(id)_clientInterface;
+(id)_serverInterface;
+(char)supportsSecureCoding;
-(void)_setEndDate:(id)arg1 ;
-(void)updateTotalsWithEnergyBurned:(id)arg1 distance:(id)arg2 resumeData:(id)arg3 UUIDs:(id)arg4 ;
-(void)serverPausedWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)activateWorkoutWithCompletion:(/*^block*/id)arg1 ;
-(void)pauseWorkoutWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endWorkoutWithDate:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_workoutServerWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_queue_transitionToServerState:(int)arg1 ;
-(void)_handleWorkoutPausedWithDate:(id)arg1 ;
-(void)_queue_alertDelegateDidUpdateState:(int)arg1 date:(id)arg2 ;
-(void)_queue_setEndDate:(id)arg1 ;
-(id)_queue_endDate;
-(void)_queue_deactivate;
-(id)_lifecycleDelegate;
-(id)_propertyQueue_serverConfiguration;
-(void)_queue_alertDelegateDidEncounterError:(id)arg1 ;
-(void)_queue_addEnergyBurned:(id)arg1 ;
-(void)_queue_alertDelegateWorkoutDidUpdateTotalEnergyBurned;
-(void)_queue_addDistance:(id)arg1 ;
-(void)_queue_alertDelegateWorkoutDidUpdateTotalDistance;
-(void)_queue_addAssociatedObjectUUIDs:(id)arg1 ;
-(char)_queue_serverAttached;
-(char)_serverAttached;
-(id)_serverProxy;
-(char)_objectCanBeSaved:(id*)arg1 ;
-(void)resumeWorkoutFromDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endWorkoutWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_attachServerWithClientQueue:(id)arg1 lifecycleDelegate:(id)arg2 connection:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_connectionDidEncounterError:(id)arg1 ;
-(void)_addSamples:(id)arg1 ;
-(id)_inactiveCopy;
-(void)_setServerProxy:(id)arg1 ;
-(void)_setLifecycleDelegate:(id)arg1 ;
-(id)_associatedObjectUUIDData;
-(NSDictionary *)resumeDataByType;
-(char)_shouldUseDeviceData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_HKActiveWorkoutDelegate>)arg1 ;
-(id<_HKActiveWorkoutDelegate>)delegate;
-(double)duration;
-(id)totalDistance;
-(id)_init;
-(int)serverState;
-(void)_setTotalEnergyBurned:(id)arg1 ;
-(void)_setTotalDistance:(id)arg1 ;
-(id)totalEnergyBurned;
-(id)metadata;
-(int)workoutState;
-(id)endDate;
@end
