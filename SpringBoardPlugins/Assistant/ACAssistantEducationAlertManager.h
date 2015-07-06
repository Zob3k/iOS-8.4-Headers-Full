/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Assistant/ACAssistantEducationAlertItemDelegate.h>

@class NSTimer, NSString, NSMutableOrderedSet, ACAssistantEducationAlertItem;

@interface ACAssistantEducationAlertManager : NSObject <ACAssistantEducationAlertItemDelegate> {

	id _unlockHandler;
	NSTimer* _unlockTimer;
	char _assistantSupported;
	char _dictationSupported;
	char _siriDidActivate;
	NSString* _syncDidFinishLanguage;
	NSMutableOrderedSet* _newlyAvailableLanguages;
	ACAssistantEducationAlertItem* _item;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)_invalidate;
-(void)_assistantDidActivate:(id)arg1 ;
-(id)_currentAssistantLanguage;
-(void)educationAlertWasDeactivated:(id)arg1 ;
-(char)_shouldShowReadyForLanguageCode:(id)arg1 ;
-(void)_languageActivated:(id)arg1 ;
-(void)_clearUnlockTimer;
-(char)_shouldAcceptNewLanguage:(id)arg1 ;
-(void)_unlockTimerFired:(id)arg1 ;
-(void)_showEducationAlert;
-(void)_waitForUnlockToDisplayAlert;
-(char)_availableForLanguage:(id)arg1 ;
-(void)_startUnlockTimer;
-(char)_availableForCurrentLanguage;
@end
