/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DuetPLLConfigLogger/DuetPLLConfigLogger-Structs.h>
#import <DuetPLLConfigLogger/DuetLoggerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, BudgetPool, NSDate, NSNumber;

@interface PowerLogStub : NSObject <DuetLoggerProtocol> {

	NSObject*<OS_dispatch_queue> pllStubQueue;
	long long totalBackgroundDownloadPowerUsed;
	long long totalFetchPowerUsed;
	long long totalPushPowerUsed;
	long long totalSilentPushPowerUsed;
	long long totalNonDISCPowerUsed;
	BudgetPool* powerbackgroundDownloadBudgetPool;
	BudgetPool* powerFetchBudgetPool;
	BudgetPool* powerPushBudgetPool;
	BudgetPool* powerSilentPushBudgetPool;
	BudgetPool* powerNonDiscretionaryBudgetPool;
	NSDate* startPowerLogLiteDate;
	NSNumber* batteryCapacity;

}
+(id)instance;
-(id)init;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)energyConsumedRefresh;
-(long long)energyConsumedForFetch;
-(long long)energyConsumedForPush;
-(void)energyStopLogging:(const char*)arg1 withPowerLogStubType:(short)arg2 andSeqNum:(unsigned long long)arg3 ;
-(void)energyStartLogging:(const char*)arg1 withPowerLogStubType:(short)arg2 andSeqNum:(unsigned long long)arg3 ;
-(void)energyPoweronReset;
-(id)getBatteryCapacity;
-(long long)energyConsumedForNonDiscDownload;
-(long long)energyConsumedForBackgroundDownload;
-(short)duetUpdateTypeMapfrom:(short)arg1 ;
@end

