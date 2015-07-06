/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebApp/WebApp-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSURL, NSMutableDictionary, NSString;

@interface WebApplication : UIApplication <UIApplicationDelegate> {

	NSURL* _lastActiveWebClipURL;
	NSMutableDictionary* webAppControllerDictionary;
	char _wasSuspendedUnderLock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(char)applicationSuspendWithSettings:(id)arg1 ;
-(void)applicationOpenURL:(id)arg1 ;
-(id)_currentWebAppController;
-(id)nameOfDefaultImageToUpdateAtSuspension:(int)arg1 ;
-(void)bringToFrontWebAppControllerForWebAppURL:(id)arg1 ;
@end
