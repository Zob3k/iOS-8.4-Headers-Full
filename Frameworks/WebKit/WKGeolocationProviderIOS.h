/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WebGeolocationCoreLocationUpdateListener.h>

@interface WKGeolocationProviderIOS : NSObject <WebGeolocationCoreLocationUpdateListener> {

	RefPtr<WebKit::WebGeolocationManagerProxy>* _geolocationManager;
	RetainPtr<WebGeolocationCoreLocationProvider>* _coreLocationProvider;
	char _isWebCoreGeolocationActive;
	RefPtr<WebKit::WebGeolocationPosition>* _lastActivePosition;
	Vector<GeolocationRequestData, 0, WTF::CrashOnOverflow>* _requestsWaitingForCoreLocationAuthorization;

}
-(id)init;
-(id)initWithContext:(WebContext*)arg1 ;
-(void)_setEnableHighAccuracy:(char)arg1 ;
-(void)decidePolicyForGeolocationRequestFromOrigin:(OpaqueWKSecurityOriginRef)arg1 frame:(OpaqueWKFrameRef)arg2 request:(OpaqueWKGeolocationPermissionRequestRef)arg3 window:(id)arg4 ;
-(void)geolocationAuthorizationGranted;
-(void)geolocationAuthorizationDenied;
-(void)positionChanged:(GeolocationPosition*)arg1 ;
-(void)errorOccurred:(id)arg1 ;
-(void)resetGeolocation;
-(void)_stopUpdating;
-(void)_startUpdating;
@end

