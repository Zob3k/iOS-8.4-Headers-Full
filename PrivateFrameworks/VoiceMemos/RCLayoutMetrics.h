/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/NSCopying.h>

@class NSString;

@interface RCLayoutMetrics : NSObject <NSCopying> {

	SCD_Struct_RC15 _metricInfo;
	NSString* _label;
	float _hPresentedRecordMemoHeight;

}

@property (nonatomic,readonly) float vDeltaWaveformToTimeBaseline; 
@property (nonatomic,readonly) float vDeltaTimeBaselineToTitleBaseline; 
@property (nonatomic,readonly) float vDeltaTitleBaselineToDateBaseline; 
@property (nonatomic,readonly) float vDeltaDateBaselineToControlsTop; 
@property (nonatomic,readonly) float vDeltaControlsBottomToBottom; 
@property (nonatomic,readonly) float vDeltaControlsTopToNavigationBottom; 
@property (nonatomic,readonly) char hIsWaveformFlushToEdges; 
@property (nonatomic,readonly) float hDeltaAdditionalInsetFromWaveformEdge; 
@property (nonatomic,readonly) float hDeltaControlButtonsSpacing; 
@property (nonatomic,readonly) float hDeltaTrimProgressInset; 
@property (nonatomic,readonly) float hDeltaAcousticAnnotationLabelToWaveformRight; 
@property (nonatomic,readonly) float hTrimModeInset; 
@property (nonatomic,readonly) float hDetailNavigationBarInset; 
@property (assign,nonatomic) float hPresentedRecordMemoHeight;                                             //@synthesize hPresentedRecordMemoHeight=_hPresentedRecordMemoHeight - In the implementation block
@property (nonatomic,readonly) float vDeltaLockAbsoluteTopToWaveformTop; 
@property (nonatomic,readonly) float vDeltaLockNotificationListBottom; 
@property (nonatomic,readonly) float vDeltaLockNotificationListBottomToRecordingTimeBaseline; 
+(id)defaultMetrics;
+(id)largeVerticalMetrics;
+(id)normalVerticalMetrcis;
+(id)largeHorizontalMetrics;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)hDeltaControlButtonsSpacing;
-(float)vDeltaControlsBottomToBottom;
-(id)initWithLabel:(id)arg1 ;
-(void)setMetricInfo:(SCD_Struct_RC15)arg1 ;
-(float)vDeltaWaveformToTimeBaseline;
-(float)vDeltaTimeBaselineToTitleBaseline;
-(float)vDeltaTitleBaselineToDateBaseline;
-(float)vDeltaDateBaselineToControlsTop;
-(float)vDeltaControlsTopToNavigationBottom;
-(char)hIsWaveformFlushToEdges;
-(float)hDeltaAdditionalInsetFromWaveformEdge;
-(float)hDeltaTrimProgressInset;
-(float)hDeltaAcousticAnnotationLabelToWaveformRight;
-(float)hTrimModeInset;
-(float)hDetailNavigationBarInset;
-(float)vDeltaLockNotificationListTop;
-(float)vDeltaLockNotificationListTopToRecordingTextBaseline;
-(float)vDeltaLockAbsoluteTopToWaveformTop;
-(float)vDeltaLockNotificationListBottom;
-(float)vDeltaLockNotificationListBottomToRecordingTimeBaseline;
-(void)setHPresentedRecordMemoHeight:(float)arg1 ;
-(float)hPresentedRecordMemoHeight;
@end

