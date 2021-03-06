/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

@class CADisplayLink, NSUUID, NSArray;

@interface MPUPercentDrivenInteractionTransition : UIPercentDrivenInteractiveTransition {

	CADisplayLink* _displayLink;
	NSUUID* _transitionUUID;
	NSArray* _persistentAnimationLayers;

}

@property (nonatomic,retain) NSArray * persistentAnimationLayers;              //@synthesize persistentAnimationLayers=_persistentAnimationLayers - In the implementation block
-(void)dealloc;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)_cleanup;
-(NSArray *)persistentAnimationLayers;
-(void)setPersistentAnimationLayers:(NSArray *)arg1 ;
-(void)stopInteractiveTransition;
-(void)finalizeInteractiveTransition;
-(void)tick:(id)arg1 ;
@end

