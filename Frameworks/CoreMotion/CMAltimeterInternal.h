/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue;

@interface CMAltimeterInternal : NSObject {

	Dispatcher* fFilteredPressureDispatcher;
	/*^block*/id fRelativeAltimeterHandler;
	NSOperationQueue* fRelativeAltimeterQueue;
	Sample fBaseAltimeterSample;
	float fBarometricBaseAltitude;
	BOOL fBaselineReceived;
	deque<float, std::__1::allocator<float> >* fPressureSamples;

}
-(void)dealloc;
-(id)init;
@end
