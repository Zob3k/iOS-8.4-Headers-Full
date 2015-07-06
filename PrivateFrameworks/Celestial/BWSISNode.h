/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <Celestial/BWBracketSettingsProvider.h>

@class NSDictionary, NSArray, FigCaptureStillImageSettings, NSString;

@interface BWSISNode : BWNode <BWBracketSettingsProvider> {

	/*function pointer*/void* _createSampleBufferProcessorFunction;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSDictionary* _sensorIDDictionary;
	NSDictionary* _noiseModelParamsDictionary;
	NSDictionary* _fusionParamsDictionary;
	char _allowExperimentalOverrides;
	int _outputMode;
	int _lensShadingCorrectionMode;
	double _integrationTimeThreshold;
	int _maxIntegrationTimeLimitMsec;
	float _bracketGainCap;
	NSArray* _exposureValues;
	NSArray* _afWindowParamsArray;
	int _sisBracketCount;
	NSArray* _oisExposureDurationTypes;
	int _oisBracketCount;
	FigCaptureStillImageSettings* _currentCaptureSettings;
	char _preBracketedFrameReceived;
	int _numberFramesReceived;
	int _lastFusionTypeUsed;

}

@property (nonatomic,readonly) double integrationTimeThreshold; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)_clearCaptureRequestState;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(long)_setupSampleBufferProcessor;
-(int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg1 ;
-(int)bracketCountForBracketingMode:(int)arg1 withCurrentFrameStats:(SCD_Struct_BW12*)arg2 stillImageSettings:(id)arg3 ;
-(id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(SCD_Struct_BW12*)arg2 stillImageSettings:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)initWithSensorIDDictionary:(id)arg1 ;
-(double)integrationTimeThreshold;
-(id)_initWithSensorIDDictionary:(id)arg1 allowExperimentalOverrides:(char)arg2 ;
-(long)_unpackSISOptions;
-(id)_sisBracketSettingsWithCurrentFrameStats:(SCD_Struct_BW12*)arg1 stillImageSettings:(id)arg2 ;
-(id)_oisBracketSettingsWithCurrentFrameStats:(SCD_Struct_BW12*)arg1 stillImageSettings:(id)arg2 ;
-(void)_sisProcessorOutputReady:(long)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
@end
