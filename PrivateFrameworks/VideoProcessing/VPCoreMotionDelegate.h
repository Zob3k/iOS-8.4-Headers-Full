/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class CMMotionManager, NSOperationQueue;

@interface VPCoreMotionDelegate : NSObject {

	CMMotionManager* motionManager;
	NSOperationQueue* operationQueue;
	SCD_Struct_VP0 quaternionBuffer[64];
	double timestampBuffer[64];
	int quaternionBufferIndex;
	opaque_pthread_mutex_t ringMutex;
	SCD_Struct_VP0 lastReadQuaternion;
	VPCoreMotionDelegate* weakSelf;
	int accelRingIndex;
	float accelRingX[256];
	float accelRingY[256];
	float accelRingZ[256];
	double accelRingTime[256];
	_sFILE* gyroFile;

}
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(long)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(void)didUpdateAcceleration:(SCD_Struct_VP2)arg1 time:(double)arg2 ;
-(void)processGyroData:(id)arg1 withError:(id)arg2 ;
-(SCD_Struct_VP0)getQuaternionByTimestamp:(double)arg1 ;
@end

