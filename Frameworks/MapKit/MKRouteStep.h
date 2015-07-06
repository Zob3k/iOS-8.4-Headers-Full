/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOStep, NSString, MKRouteStepPolyline, MKPolyline;

@interface MKRouteStep : NSObject {

	GEOStep* _geoStep;
	NSString* _instructions;
	unsigned _transportType;
	MKRouteStepPolyline* _polyline;

}

@property (nonatomic,readonly) NSString * instructions;                        //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) NSString * notice; 
@property (nonatomic,readonly) MKPolyline * polyline;                          //@synthesize polyline=_polyline - In the implementation block
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) unsigned transportType;                         //@synthesize transportType=_transportType - In the implementation block
@property (getter=_geoStep,nonatomic,readonly) GEOStep * geoStep;              //@synthesize geoStep=_geoStep - In the implementation block
-(id)_initWithGEOStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned)arg3 polyline:(id)arg4 ;
-(id)_geoStep;
-(NSString *)instructions;
-(NSString *)notice;
-(double)distance;
-(MKPolyline *)polyline;
-(unsigned)transportType;
@end
