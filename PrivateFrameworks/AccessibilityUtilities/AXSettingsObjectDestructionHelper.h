/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface AXSettingsObjectDestructionHelper : NSObject {

	void* _listenerAddress;
	NSMutableArray* _selectorKeys;

}
-(void)dealloc;
-(id)initWithListenerAddress:(void*)arg1 ;
-(void)addSelectorKey:(SEL)arg1 ;
@end
