/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVPlayerItemLegibleOutputDependencyFactory, OS_dispatch_queue;
@class NSArray, AVWeakReferencingDelegateStorage, NSObject, AVWeakReference, NSString;

@interface AVPlayerItemLegibleOutputInternal : NSObject {

	id<AVPlayerItemLegibleOutputDependencyFactory> dependencyFactory;
	NSArray* nativeRepresentationSubtypes;
	AVWeakReferencingDelegateStorage* delegateStorage;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	AVWeakReference* weakReferenceToHost;
	char suppressesPlayerRendering;
	double advanceInterval;
	NSString* textStylingResolution;

}
@end

