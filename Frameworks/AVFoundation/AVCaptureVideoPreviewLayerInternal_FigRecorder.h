/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureSession_FigRecorder, AVCaptureConnection_FigRecorder, CALayer, NSString;

@interface AVCaptureVideoPreviewLayerInternal_FigRecorder : NSObject {

	AVCaptureSession_FigRecorder* session;
	AVCaptureConnection_FigRecorder* connection;
	CALayer* sublayer;
	CGSize sensorSize;
	NSString* sensorToPreviewVTScalingMode;
	CGSize previewSize;
	float previewRotationDegrees;
	NSString* gravity;
	char disableActions;
	int orientation;
	char automaticallyAdjustsMirroring;
	char mirrored;
	char isPresentationLayer;
	char visible;
	char isPaused;
	char chromaNoiseReductionEnabled;
	int changeSeed;
	CGAffineTransform captureDeviceTransform;
	float rollAdjustment;

}
@end
