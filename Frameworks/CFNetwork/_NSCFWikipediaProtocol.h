/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface _NSCFWikipediaProtocol : NSURLProtocol {

	const void* _instance;
	const CFURLProtocolInstanceCallbacks* _callbacks;

}
+(char)canInitWithRequest:(id)arg1 ;
+(char)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)scheduleOnRunloop:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(void)unscheduleOnRunloop:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(void)startLoading;
-(void)dealloc;
-(void)stopLoading;
@end

