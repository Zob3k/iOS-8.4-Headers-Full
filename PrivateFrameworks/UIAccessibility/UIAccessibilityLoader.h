/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface UIAccessibilityLoader : NSObject
+(id)loadAccessibilityBundle:(id)arg1 didLoad:(char*)arg2 ;
+(void)loadActualAccessibilityBundle:(id)arg1 didLoad:(char*)arg2 loadSubbundles:(char)arg3 ;
+(void)initialize;
+(void)_accessibilityStartServer;
+(void)_accessibilityReenabled;
+(void)_accessibilityStopServer;
+(char)_accessibilityServerStarted;
+(id)_loadAXBundleForBundle:(id)arg1 didLoad:(char*)arg2 ;
+(id)_accessibilityBundlesForBundle:(id)arg1 ;
+(id)_loadAXBundleForBundle:(id)arg1 didLoad:(char*)arg2 forceLoad:(char)arg3 loadSubbundles:(char)arg4 ;
+(id)loadAccessibilityBundle:(id)arg1 didLoad:(char*)arg2 force:(char)arg3 ;
+(id)_axBundleForBundle:(id)arg1 ;
+(void)_accessibilityInitializeRuntimeOverrides;
+(void)_accessibilityLoadSubbundles:(id)arg1 ;
@end
