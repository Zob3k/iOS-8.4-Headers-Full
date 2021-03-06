/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSObject;

@interface _EARAudioClassifier : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	Nnet* _nnet;
	int _leftContext;
	int _rightContext;

}
-(id)initWithContentsOfNNetFile:(id)arg1 leftContext:(int)arg2 rightContext:(int)arg3 ;
-(id)initWithContentsOfNNetFile:(id)arg1 ;
-(id)startedClassificationSessionWithDelegate:(id)arg1 sampleRate:(float)arg2 ;
@end

