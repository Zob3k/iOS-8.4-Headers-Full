/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface _WBUDynamicMeCard : NSObject {

	void* _me;
	NSMutableArray* _blocksPendingMeCard;

}
+(int)_ABPropertyIDForString:(id)arg1 ;
+(char)isProxyProperty:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_addressBookChanged:(id)arg1 ;
-(id)valueForProperty:(id)arg1 isMultiValue:(char*)arg2 ;
-(id)valueForProxyProperty:(id)arg1 ;
-(void)performWhenReady:(/*^block*/id)arg1 ;
@end
