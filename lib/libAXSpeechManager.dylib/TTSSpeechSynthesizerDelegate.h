/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAXSpeechManager.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TTSSpeechSynthesizerDelegate <NSObject>
@optional
-(void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(char)arg3 withError:(id)arg4;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(char)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
-(void)speechSynthesizer:(id)arg1 didPauseSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didContinueSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 forRequest:(id)arg3;

@end
