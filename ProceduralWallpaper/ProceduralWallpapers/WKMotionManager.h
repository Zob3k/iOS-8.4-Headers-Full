/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
@class CMMotionManager, WKInfiniteImpulseResponseFilter;

@interface WKMotionManager : NSObject {

	double _x;
	double _y;
	double _z;
	SCD_Struct_WK4 _attitude;
	double _roll;
	double _pitch;
	double _yaw;
	double _coefficient;
	double _threshold;
	unsigned _referenceFrame;
	CMMotionManager* _motionManager;
	char _motionManagerPaused;
	WKInfiniteImpulseResponseFilter* _motionFilterX;
	WKInfiniteImpulseResponseFilter* _motionFilterY;
	WKInfiniteImpulseResponseFilter* _motionFilterZ;
	WKInfiniteImpulseResponseFilter* _motionFilterAX;
	WKInfiniteImpulseResponseFilter* _motionFilterAY;
	WKInfiniteImpulseResponseFilter* _motionFilterAZ;
	WKInfiniteImpulseResponseFilter* _motionFilterAW;
	WKInfiniteImpulseResponseFilter* _motionFilterRoll;
	WKInfiniteImpulseResponseFilter* _motionFilterPitch;
	WKInfiniteImpulseResponseFilter* _motionFilterYaw;

}

@property (nonatomic,readonly) double x; 
@property (nonatomic,readonly) double y; 
@property (nonatomic,readonly) double z; 
@property (nonatomic,readonly) SCD_Struct_WK4 attitude; 
@property (nonatomic,readonly) double roll; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (assign,nonatomic) double deviceMotionUpdateInterval; 
@property (assign,nonatomic) double accelerometerUpdateInterval; 
-(double)accelerometerUpdateInterval;
-(id)init;
-(double)x;
-(double)y;
-(double)z;
-(void)setAccelerometerUpdateInterval:(double)arg1 ;
-(void)setDeviceMotionUpdateInterval:(double)arg1 ;
-(char)isDeviceMotionAvailable;
-(double)deviceMotionUpdateInterval;
-(SCD_Struct_WK4)attitude;
-(double)pitch;
-(double)yaw;
-(void)stopDeviceMotionUpdates;
-(void)startDeviceMotionUpdates;
-(double)roll;
-(id)initWithCoefficient:(double)arg1 threshold:(double)arg2 ;
-(void)startDeviceAccelerometerUpdates;
-(id)initWithCoefficient:(double)arg1 ;
-(char)zeroMovementSinceLastFrame;
-(void)stopDeviceAccelerometerUpdates;
-(void)createMotionManager;
-(void)_createFilters;
-(void)pauseDeviceMotionUpdates;
@end

