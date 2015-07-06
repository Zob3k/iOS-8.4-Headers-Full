/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVSpeechSynthesizerDelegate;
@interface AVSpeechSynthesizer : NSObject {

	char speaking;
	char paused;
	id<AVSpeechSynthesizerDelegate> delegate;

}

@property (assign,nonatomic) id<AVSpeechSynthesizerDelegate> delegate; 
@property (getter=isSpeaking,nonatomic,readonly) char speaking; 
@property (getter=isPaused,nonatomic,readonly) char paused; 
+(void)initialize;
-(char)shouldHandleAudioInterruptions;
-(id)speechManager;
-(id)speechQueue;
-(void)_speakUtterance:(id)arg1 ;
-(void)setRequestedUtteranceDuringAudioInterruption:(id)arg1 ;
-(id)inflightUtterance;
-(void)_enqueueNextJob;
-(id)requestedUtteranceDuringAudioInterruption;
-(void)setInflightUtterance:(id)arg1 ;
-(void)_handleSpeechDone:(id)arg1 successful:(char)arg2 ;
-(int)_convertBoundary:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_handleMediaServicesWereLost:(id)arg1 ;
-(char)isInAudioInterruption;
-(void)setDidRequestStartSpeakingDuringAudioInterruption:(char)arg1 ;
-(void)setDidRequestPauseSpeakingDuringAudioInterruption:(char)arg1 ;
-(void)setDidRequestResumeSpeakingDuringAudioInterruption:(char)arg1 ;
-(void)setShouldHandleAudioInterruptions:(char)arg1 ;
-(char)wasSpeakingBeforeAudioInterruption;
-(char)isSpeaking;
-(void)setWasSpeakingBeforeAudioInterruption:(char)arg1 ;
-(void)setIsInAudioInterruption:(char)arg1 ;
-(char)didRequestStartSpeakingDuringAudioInterruption;
-(char)didRequestPauseSpeakingDuringAudioInterruption;
-(char)didRequestResumeSpeakingDuringAudioInterruption;
-(void)_didBeginInterruption;
-(void)_didEndInterruption;
-(void)_handleAudioInterruption:(id)arg1 ;
-(void)_handleMediaServicesWereReset:(id)arg1 ;
-(char)isPaused;
-(void)speakUtterance:(id)arg1 ;
-(char)pauseSpeakingAtBoundary:(int)arg1 ;
-(char)continueSpeaking;
-(char)stopSpeakingAtBoundary:(int)arg1 ;
-(void)setDelegate:(id<AVSpeechSynthesizerDelegate>)arg1 ;
-(id<AVSpeechSynthesizerDelegate>)delegate;
-(char)isSpeaking;
-(char)isPaused;
-(void)speakUtterance:(id)arg1 ;
-(char)pauseSpeakingAtBoundary:(int)arg1 ;
-(char)continueSpeaking;
-(char)stopSpeakingAtBoundary:(int)arg1 ;
@end
