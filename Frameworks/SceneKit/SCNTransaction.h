/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SCNTransaction : NSObject
+(char)immediateMode;
+(void)setImmediateMode:(char)arg1 ;
+(id)SCNJSExportProtocol;
+(void)postCommandWithContext:(void*)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(/*^block*/id)arg4 ;
+(void)postCommandWithContext:(void*)arg1 object:(id)arg2 applyBlock:(/*^block*/id)arg3 ;
+(id)animationTimingFunction;
+(id)valueForKey:(id)arg1 ;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(/*^block*/id)completionBlock;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(void)flush;
+(void)setAnimationDuration:(double)arg1 ;
+(void)lock;
+(void)unlock;
+(unsigned)currentState;
+(char)disableActions;
+(void)setDisableActions:(char)arg1 ;
+(void)commit;
+(double)animationDuration;
+(void)begin;
+(void)setAnimationTimingFunction:(id)arg1 ;
-(id)animationTimingFunction;
-(void)flush;
-(void)setAnimationDuration:(double)arg1 ;
-(void)lock;
-(void)unlock;
-(char)disableActions;
-(void)setDisableActions:(char)arg1 ;
-(void)commit;
-(double)animationDuration;
-(void)begin;
-(void)setAnimationTimingFunction:(id)arg1 ;
@end

