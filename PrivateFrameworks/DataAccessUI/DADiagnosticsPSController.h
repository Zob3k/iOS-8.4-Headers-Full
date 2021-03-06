/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <DataAccessUI/DADiagnosticSaveNotesDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSString;

@interface DADiagnosticsPSController : PSListController <DADiagnosticSaveNotesDelegate, UIAlertViewDelegate> {

	UIAlertView* _simpleAlert;
	UIAlertView* _savingDataAlert;
	SEL _simpleConfirmSheetDismissedSEL;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)linkSpecifier;
+(char)diagnosticsVisible;
+(id)dumpRuntimeStateSpecifiers;
-(void)suspend;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)handleDumpRuntimeStateForSpecifier:(id)arg1 ;
-(id)diagnosticSpecifiers;
-(void)handleSaveAllLogsStep2;
-(void)runSimpleAlertWithTitle:(id)arg1 message:(id)arg2 dismissedSelector:(SEL)arg3 ;
-(void)setLoggingEnabled:(char)arg1 forSpecifier:(id)arg2 ;
-(char)isLoggingEnabledForSpecifier:(id)arg1 ;
-(id)pathsOfAllLogFiles;
-(id)savedLogsDirectoryNameForSpecifier:(id)arg1 ;
-(char)saveFileAtPath:(id)arg1 toDirectory:(id)arg2 withExtension:(id)arg3 error:(id*)arg4 ;
-(void)purgeFileAtPath:(id)arg1 ;
-(void)runSimpleAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)saveLogsWithNotes:(id)arg1 ;
-(void)_presentNotesController;
-(void)_dismissSavingDataAlert;
-(void)saveNotesInBackground:(id)arg1 ;
-(void)setBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)booleanPropertyWithSpecifier:(id)arg1 ;
-(void)handleSaveAllLogsForSpecifier:(id)arg1 ;
-(void)handleClearAllLogsForSpecifier:(id)arg1 ;
-(id)pathsOfPurgableFiles;
-(id)specifiers;
@end

