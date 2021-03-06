/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWCaptureDevice.h>
#import <Celestial/BWZoomCompletionDelegate.h>

@protocol OS_dispatch_queue, BWFigVideoDeviceStillImageCaptureDelegate, OS_dispatch_group;
@class NSObject, NSDictionary, NSArray, NSMutableArray, NSMutableDictionary, FigCaptureThermalMonitor, BWStillImageTimeMachine, BWZoomCommandHandler, NSData, BWDeviceMotionActivityDetector, NSString;

@interface BWFigVideoCaptureDevice : BWCaptureDevice <BWZoomCompletionDelegate> {

	OpaqueFigCaptureDeviceRef _device;
	OpaqueFigCaptureStreamRef _stream;
	char _usingMultipleStreamOutputs;
	OpaqueCMClockRef _clock;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	opaqueCMBufferQueueRef _streamQueue;
	opaqueCMBufferQueueTriggerTokenRef _streamQueueTriggerToken;
	NSObject*<OS_dispatch_queue> _bufferServicingQueue;
	NSObject*<OS_dispatch_queue> _zoomUpdateQueue;
	opaqueCMBufferQueueRef _stillImageQueue;
	opaqueCMBufferQueueTriggerTokenRef _stillImageQueueTriggerToken;
	NSObject*<OS_dispatch_queue> _stillImageServicingQueue;
	char _streaming;
	NSDictionary* _supportedProperties;
	NSArray* _supportedFormats;
	int _activeFormatIndex;
	char _fullRangeVideo;
	int _minimumFrameRate;
	int _maximumFrameRate;
	CFStringRef _portType;
	int _position;
	NSDictionary* _attributes;
	int _clientRetainedBufferCountHint;
	NSMutableArray* _streamingClientCallbacks;
	NSMutableArray* _stillImageClientCallbacks;
	char _deferMetadataDictionaryCreation;
	/*function pointer*/void* _createAutofocusSampleBufferProcessorFunction;
	NSObject*<OS_dispatch_queue> _autofocusProcessorQueue;
	NSMutableDictionary* _autofocusCachedPropertiesDictionary;
	OpaqueFigSimpleMutexRef _autofocusStatusMutex;
	OpaqueFigSampleBufferProcessorRef _autofocusProcessor;
	char _allowAEStableNotifications;
	char _aeStable;
	SCD_Struct_BW2 _aeRequestTime;
	int _aeRequestCount;
	int _aeFrameWaitCount;
	char _allowAWBStableNotifications;
	char _awbStable;
	CGRect _cachedFocusRect;
	CGRect _cachedExposureRect;
	char _useAutoImageControlMode;
	int _autoImageControlMode;
	int _currentImageControlMode;
	char _faceDetectionMetadataRequested;
	NSDictionary* _faceDetectionConfiguration;
	char _faceDetectionEnabled;
	NSArray* _lastValidDetectedFacesArray;
	char _cacheDetectedFacesForBracketedCapture;
	int _frameStatisticsLock;
	SCD_Struct_BW64 _currentFrameStatistics;
	char _hasFlash;
	char _autoFlashEnabled;
	char _flashActive;
	float _stillImageStabilizationIntegrationTimeThreshold;
	char _stillImageStabilizationAutomaticallyEnabled;
	OpaqueFigSimpleMutexRef _torchLock;
	char _autoTorchEnabled;
	char _autoTorchStatsCheckedForVideoRecording;
	char _torchActive;
	float _torchLevel;
	FigCaptureThermalMonitor* _thermalMonitor;
	char _hdrSceneDetectionEnabled;
	char _hdrScene;
	int _lowLightBoostLock;
	char _lowLightBoostSupportedForFormat;
	char _lowLightBoostActive;
	char _stillImageCaptureEnabled;
	char _timeMachineEnabledForMultistream;
	/*^block*/id _stillImageBufferTimeMachineHandler;
	int _timeMachineCapacity;
	BWStillImageTimeMachine* _timeMachine;
	NSObject*<OS_dispatch_queue> _stillImageDispatchQueue;
	char _providesPreBracketedEV0;
	id<BWFigVideoDeviceStillImageCaptureDelegate> _stillImageCaptureDelegate;
	NSObject*<OS_dispatch_group> _stillImageCaptureDelegateDispatchGroup;
	int _expectedImagesForCaptureStillImageNow;
	int _receivedImagesForCaptureStillImageNow;
	int _skippedFramesCountForAF;
	int _stillImageCaptureLock;
	char _grabNextFrame;
	char _retryCaptureStillImageNow;
	char _retryCaptureUsesFlash;
	NSMutableDictionary* _retryStillImageCaptureOptions;
	int _currentManualFocusCompletedID;
	int _currentManualExposureCompletedID;
	int _currentBiasedExposureCompletedID;
	int _currentManualWhiteBalanceCompletedID;
	NSMutableDictionary* _observedProperties;
	OpaqueFigSimpleMutexRef _manualPropertyMutex;
	float _lensPosition;
	SCD_Struct_BW2 _exposureDuration;
	float _ISO;
	float _exposureTargetBias;
	float _exposureTargetOffset;
	SCD_Struct_Fi49 _deviceWhiteBalanceGains;
	SCD_Struct_Fi49 _grayWorldWhiteBalanceGains;
	NSObject*<OS_dispatch_queue> _whiteBalanceGainsQueue;
	NSMutableDictionary* _whiteBalanceGains;
	NSMutableArray* _whiteBalanceGainsOrderedKeys;
	int _whiteBalanceModeForExif;
	BWZoomCommandHandler* _zoomCommandHandler;
	float _maxISPZoomFactor;
	SCD_Struct_BW28 _ispOutputDimensions;
	SCD_Struct_BW28 _maxISPCropDimensions;
	SCD_Struct_BW28 _lastISPCropDimensions;
	CGSize _overscanPercentage;
	int _tccLock;
	char _clientProcessHasAccessToCamera;
	NSData* _auditTokenData;
	char _feature1Enabled;
	NSObject*<OS_dispatch_queue> _feature1ProcessorQueue;
	OpaqueFigSampleBufferProcessorRef _feature1Processor;
	char _hasSphere;
	int _sphereLock;
	char _enableSphereWhenAvailable;
	char _sphereEnabled;
	char _motionDataInvalid;
	BWDeviceMotionActivityDetector* _deviceMotionActivityDetector;
	NSMutableDictionary* _dutyCycleMetadataCache;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(long)setupVibeHandlingIfRequired;
+(CFStringRef)_autofocusProcessorImageControlModeFromImageControlMode:(int)arg1 ;
-(long)setSubjectAreaChangeMonitoringEnabled:(char)arg1 ;
-(long)setProvidesStortorgetMetadata:(char)arg1 ;
-(float)lensPosition;
-(SCD_Struct_BW2)exposureDuration;
-(float)ISO;
-(float)exposureTargetOffset;
-(float)exposureTargetBias;
-(SCD_Struct_Fi49)deviceWhiteBalanceGains;
-(SCD_Struct_Fi49)grayWorldDeviceWhiteBalanceGains;
-(long)setAutomaticallyAdjustsImageControlMode:(char)arg1 ;
-(long)setImageControlMode:(int)arg1 ;
-(void)setFaceDetectionConfiguration:(id)arg1 ;
-(void)setZoomFactor:(float)arg1 ;
-(float)zoomFactor;
-(void)dealloc;
-(int)position;
-(char)isStreaming;
-(int)autoImageControlMode;
-(long)setAutoImageControlMode:(int)arg1 ;
-(void)unregisterForAEMatrixMetadata;
-(void)unregisterForFaceDetectionMetadata;
-(void)setStillImageCaptureEnabled:(char)arg1 ;
-(id)sensorIDDictionary;
-(id)moduleInfo;
-(id)cameraTuningParametersDictionary;
-(void)setStillImageStabilizationIntegrationTimeThreshold:(float)arg1 ;
-(void)registerForAEMatrixMetadata;
-(void)setOverscanPercentage:(CGSize)arg1 ;
-(void)setEnableSphereWhenAvailable:(char)arg1 ;
-(void)setStillImageCaptureDelegate:(id)arg1 ;
-(void)captureStillImageNow;
-(void)captureStillImageWithFlashNow;
-(void)captureStillImageBracketNow:(int)arg1 bracketSettings:(id)arg2 ;
-(void)getCurrentVideoFrameStatistics:(SCD_Struct_BW64*)arg1 ;
-(int)lowLightCompensationModeForStatistics:(SCD_Struct_BW64*)arg1 ;
-(void)setClientRetainedBufferCountHint:(int)arg1 ;
-(char)startStreamingToSampleBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)registerStillImageBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)stopStreamingToSampleBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)unregisterStillImageBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)registerForFaceDetectionMetadata;
-(id)supportedFormats;
-(void)setMinimumFrameRate:(int)arg1 ;
-(void)setMaximumFrameRate:(int)arg1 ;
-(long)setLowLightBoostAutomaticallyEnabled:(char)arg1 supportedForFormat:(char)arg2 ;
-(void)setActiveFormatIndex:(int)arg1 ;
-(void)setUsesFullRangeVideo:(char)arg1 ;
-(id)bufferServicingQueue;
-(void)disposeFigCaptureDevice;
-(long)setAlternateOutputSizeAndCrop:(id)arg1 ;
-(void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 rampComplete:(char)arg3 rampCommandID:(int)arg4 ;
-(void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2 commandID:(int)arg3 ;
-(id)streamSupportedProperties;
-(id)zoomCommandHandler;
-(void)setTimeMachineEnabledForMultistream:(char)arg1 ;
-(void)setStillImageBufferTimeMachineHandler:(/*^block*/id)arg1 ;
-(void)sourceNodeWillStartStreaming;
-(void)sourceNodeDidStopStreaming;
-(void)sourceNodeDidStartStreaming;
-(void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(int)arg1 ;
-(int)timeMachineCapacity;
-(void)sourceNodeWillDiscardVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)providesPreBracketedEV0;
-(void)sourceNodeWillEmitVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillEmitVideoPreviewSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillEmitStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)checkTCCAccess;
-(void)setProperty:(id)arg1 isObserved:(char)arg2 ;
-(char)setAutoFlashEnabled:(char)arg1 error:(id*)arg2 ;
-(long)setTorchLevel:(float)arg1 ;
-(long)setAutomaticallyAdjustsTorch:(char)arg1 ;
-(long)setFaceDetectionDrivenImageProcessingMode:(int)arg1 ;
-(char)setHDRSceneDetectionEnabled:(char)arg1 error:(id*)arg2 ;
-(void)setStillImageStabilizationAutomaticallyEnabled:(char)arg1 ;
-(long)setWhiteBalanceModeAuto;
-(long)setWhiteBalanceModeLockedWithGains:(SCD_Struct_Fi49)arg1 requestID:(int)arg2 ;
-(long)setExposureTargetBias:(float)arg1 requestID:(int)arg2 ;
-(long)setExposureModeAutoWithRect:(CGRect)arg1 ;
-(long)setExposureModeLocked;
-(long)setExposureModeCustomWithExposureDuration:(SCD_Struct_BW2)arg1 minFrameRate:(double)arg2 maxFrameRate:(double)arg3 ISO:(float)arg4 requestID:(int)arg5 ;
-(long)setFocusModeAutoWithRect:(CGRect)arg1 continuous:(char)arg2 smooth:(char)arg3 rangeRestrictionNear:(float)arg4 rangeRestrictionFar:(float)arg5 ;
-(long)setFocusModeManualWithLensPosition:(float)arg1 requestID:(int)arg2 ;
-(id)initWithPosition:(int)arg1 attributes:(id)arg2 ;
-(void)drainNotifications;
-(id)_initWithFigCaptureDeviceRef:(OpaqueFigCaptureDeviceRef)arg1 figCaptureStreamRef:(OpaqueFigCaptureStreamRef)arg2 attributes:(id)arg3 createAutofocusSampleBufferProcessorFunction:(/*function pointer*/void*)arg4 ;
-(char)_unprepareStreamQueue;
-(void)_updateSphereMode;
-(void)_setFaceDetectionEnabled:(char)arg1 ;
-(long)_updateFaceDetectionConfigurationOnStream:(id)arg1 ;
-(void)_updateImageControlModeStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_updateExposureStateForAutofocusProperty:(CFStringRef)arg1 ;
-(void)_updateWhiteBalanceStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_updateFaceDetectionStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_postNotificationWithPayload:(id)arg1 notificationPayload:(id)arg2 ;
-(long)_copyAutofocusProcessorPropertyInternal:(CFStringRef)arg1 propertyValueOut:(void*)arg2 ;
-(long)_setAutofocusProcessorPropertyInternal:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(char)_prepareStreamQueue;
-(void)_willStartStreaming;
-(void)_didStopStreaming;
-(void)_didStartStreaming;
-(void)_updateZoomCapabilitiesForActiveFormatIndex:(int)arg1 ;
-(void)_handleVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addCaptureStreamAttachments:(opaqueCMSampleBufferRef)arg1 ;
-(long)_setupAutofocusSampleBufferProcessor;
-(long)_setupFeature1SampleBufferProcessor;
-(void)_serviceLowLightBoostActiveNotification:(opaqueCMSampleBufferRef)arg1 ;
-(void)_teardownAutoFocusSampleBufferProcessor;
-(void)_teardownFeature1SampleBufferProcessor;
-(void)_serviceZoomForSampleBuffer:(opaqueCMSampleBufferRef)arg1 updateISPZoom:(char)arg2 ;
-(char)isSphereEnabled;
-(void)_updateMotionDataStatus:(opaqueCMSampleBufferRef)arg1 ;
-(void)_emitVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)isPropertyObserved:(id)arg1 ;
-(void)_postManualControlRequestCompletedWithName:(id)arg1 requestID:(int)arg2 timeDictionary:(id)arg3 additionalPayloadItems:(id)arg4 ;
-(char)_prepareStillImageQueue;
-(char)_unprepareStillImageQueue;
-(void)_captureStillImageNow;
-(void)_captureStillImageWithFlashNow;
-(void)_captureStillImageBracketNow:(int)arg1 bracketSettings:(id)arg2 ;
-(void)_handleStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)_shouldUseSphereForStillImageCapture:(double)arg1 ;
-(void)_resetCaptureRequestState;
-(void)_emitStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 fromTimeMachine:(char)arg2 ;
-(long)_captureStillImageNowOnStreamWithOptions:(id)arg1 flashMode:(char)arg2 ;
-(void)_addAutofocusAndDiagnosticMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addFeature1ToMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addExifWhiteBalanceMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(long)_setAutofocusProcessorProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(long)_setAutofocusProcessorImageControlModeProperty:(int)arg1 ;
-(long)_updateAutoFocusRectIfNeededForZoomFactor:(float)arg1 ;
-(long)_updateExposureRectIfNeededForZoomFactor:(float)arg1 ;
-(void)_updateISPCropForZoomFactor:(float)arg1 ;
-(float)_ispAppliedZoomFromSampleBufferMetadataDictionary:(id)arg1 ;
-(int)minimumFrameRate;
-(int)maximumFrameRate;
-(long)_copyAutofocusProcessorProperty:(CFStringRef)arg1 propertyValueOut:(void*)arg2 ;
-(int)activeFormatIndex;
-(int)clientRetainedBufferCountHint;
-(char)usesFullRangeVideo;
-(void)_servicePropertyChangeNotifications:(opaqueCMSampleBufferRef)arg1 ;
-(void)_serviceCompletedRequestNotifications:(opaqueCMSampleBufferRef)arg1 ;
-(char)stillImageCaptureEnabled;
-(id)stillImageCaptureDelegate;
-(char)timeMachineEnabledForMultistream;
-(/*^block*/id)stillImageBufferTimeMachineHandler;
-(void)_serviceAutoTorchNotification;
-(float)stillImageStabilizationIntegrationTimeThreshold;
-(char)enableSphereWhenAvailable;
-(OpaqueFigCaptureStreamRef)stream;
-(OpaqueCMClockRef)clock;
-(void)setClientAuditTokenData:(id)arg1 ;
@end

