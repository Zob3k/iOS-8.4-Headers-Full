/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAVFAudio.dylib/AVAudioUnitEffect.h>

@class NSArray;

@interface AVAudioUnitEQ : AVAudioUnitEffect

@property (nonatomic,readonly) NSArray * bands; 
@property (assign,nonatomic) float globalGain; 
-(id)initWithNumberOfBands:(unsigned)arg1 ;
-(NSArray *)bands;
-(float)globalGain;
-(void)setGlobalGain:(float)arg1 ;
-(id)init;
@end
