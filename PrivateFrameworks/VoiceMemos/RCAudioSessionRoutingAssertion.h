/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface RCAudioSessionRoutingAssertion : NSObject {

	NSString* _debugLabel;
	char _requiresActiveAudioSession;
	int _priority;

}

@property (nonatomic,readonly) char requiresActiveAudioSession;              //@synthesize requiresActiveAudioSession=_requiresActiveAudioSession - In the implementation block
@property (nonatomic,readonly) int priority;                                 //@synthesize priority=_priority - In the implementation block
+(id)newCaptureAssertionNamed:(id)arg1 ;
+(id)newPreviewAssertionNamed:(id)arg1 ;
+(id)newForegroundAppAssertionRequiringActiveAudioSession:(char)arg1 ;
+(id)newForegroundAppAssertion;
-(void)dealloc;
-(id)init;
-(id)description;
-(int)priority;
-(char)requiresActiveAudioSession;
-(id)initWithDebugLabel:(id)arg1 requiresActiveAudioSession:(char)arg2 priority:(int)arg3 ;
@end

