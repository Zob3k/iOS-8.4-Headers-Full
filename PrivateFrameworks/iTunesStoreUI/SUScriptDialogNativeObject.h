/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface SUScriptDialogNativeObject : SUScriptNativeObject <UIActionSheetDelegate, UIAlertViewDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)show;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)dismiss;
-(void)destroyNativeObject;
-(void)showSheet;
-(void)showSheetInViewController:(id)arg1 ;
-(void)showFromRect:(CGRect)arg1 inView:(id)arg2 ;
-(void)_addScriptButton:(id)arg1 toAlert:(id)arg2 atIndex:(int)arg3 ;
-(id)_newActionSheetForDialog:(id)arg1 ;
-(void)_tearDownForDismissWithButtonIndex:(int)arg1 ;
@end
