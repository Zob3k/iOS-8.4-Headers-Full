/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RCWeakRef;

@interface RCWeakDisplayLinkTargetProxy : NSObject {

	RCWeakRef* _weakTarget;
	SEL _weakTargetSelector;

}
+(SEL)proxyDisplayLinkSelector;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)_weakDisplayLinkTargetProxyAction:(id)arg1 ;
@end

