/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface MKSystemController : NSObject
+(id)sharedInstance;
-(char)supportsPitchAPI;
-(char)requiresRTT;
-(char)overrideBlurStyle;
-(char)supports3DImagery;
-(char)supports3DMaps;
-(char)isDevicePluggedIn;
-(char)isHiDPI;
-(char)isWifiEnabled;
-(char)openURL:(id)arg1 bundleIdentifier:(id)arg2 ;
-(char)shouldRateLimitSearchCompletions;
-(int)userInterfaceIdiom;
-(char)openURL:(id)arg1 ;
-(float)screenScale;
-(char)isInternalInstall;
-(CGSize)screenSize;
@end
