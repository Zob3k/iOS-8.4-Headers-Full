/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PLPrivacy : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	int _authStatus;

}
+(id)sharedInstance;
+(void)enableForceOverrideTCC;
+(void)disableForceOverrideTCC;
-(int)photosTCCAccessStatus;
-(char)isPhotosTCCAccessRestricted;
-(void)dealloc;
-(id)init;
-(char)isPhotosAccessAllowedWithScope:(int)arg1 promptIfNeededWithHandler:(/*^block*/id)arg2 ;
-(char)_isPhotosAccessAllowedWithScope:(int)arg1 forceHandler:(char)arg2 accessAllowedHandler:(/*^block*/id)arg3 ;
-(char)isPhotosAccessAllowedPromptIfNeededWithHandler:(/*^block*/id)arg1 ;
-(void)photoAccessPowersActive;
-(char)isPhotoLibraryReadAccessAllowed;
-(char)isPhotosTCCAccessNotAllowed;
-(char)isPhotosTCCAccessAllowed;
-(void)isPhotosAccessAllowedWithScope:(int)arg1 handler:(/*^block*/id)arg2 ;
-(char)isPhotoLibrarySharingOrModificationAllowed;
@end

