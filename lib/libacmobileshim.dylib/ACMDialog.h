/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString;

@interface ACMDialog : UIViewController {

	int _savedStatusBarStyle;

}

@property (readonly) int statusBarStyle; 
@property (assign) int savedStatusBarStyle;                       //@synthesize savedStatusBarStyle=_savedStatusBarStyle - In the implementation block
@property (readonly) NSString * backgroundImageName; 
+(id)dialog;
+(void)setDialogOnFlight:(char)arg1 ;
+(char)dialogOnFlight;
-(void)dealloc;
-(id)init;
-(int)statusBarStyle;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(NSString *)backgroundImageName;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)disableControls:(char)arg1 ;
-(void)showWithOptions:(id)arg1 ;
-(void)hideWithOptions:(id)arg1 ;
-(void)setSavedStatusBarStyle:(int)arg1 ;
-(int)savedStatusBarStyle;
-(void)showWithParentViewController:(id)arg1 animated:(char)arg2 ;
-(void)hideWithParentViewController:(id)arg1 animated:(char)arg2 ;
@end

