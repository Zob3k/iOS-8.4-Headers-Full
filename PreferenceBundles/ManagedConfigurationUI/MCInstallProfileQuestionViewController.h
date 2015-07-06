/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <ManagedConfigurationUI/PSStateRestoration.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol MCProfileQuestionsControllerDelegate;
@class MCUIFieldCollection, NSString, UIAlertView, UITextField;

@interface MCInstallProfileQuestionViewController : UITableViewController <PSStateRestoration, UITextFieldDelegate> {

	MCUIFieldCollection* _fieldCollection;
	NSString* _previousResponseValue;
	char _waitingForPasscodePreflight;
	int _outDirection;
	UIAlertView* _activeAlert;
	char _showingKeyboard;
	char _isLastQuestion;
	id<MCProfileQuestionsControllerDelegate> _questionsDelegate;
	UITextField* _textField;

}

@property (assign,nonatomic,__weak) id<MCProfileQuestionsControllerDelegate> questionsDelegate;              //@synthesize questionsDelegate=_questionsDelegate - In the implementation block
@property (assign,nonatomic) int outDirection;                                                               //@synthesize outDirection=_outDirection - In the implementation block
@property (nonatomic,retain) UITextField * textField;                                                        //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateNavigationBar;
-(void)dealloc;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setOutDirection:(int)arg1 ;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
-(void)_showKeyboard:(char)arg1 ;
-(int)outDirection;
-(void)_showProgressIndicator;
-(void)_cancelActiveAlert:(char)arg1 ;
-(id)initWithUserInput:(id)arg1 ;
-(void)stopWaitingForMoreInput;
-(void)updateWithUserInput:(id)arg1 ;
-(void)waitForMoreInput;
-(void)_questionFieldEmpty:(id)arg1 ;
-(void)_questionFieldNotEmpty:(id)arg1 ;
-(void)_hideKeyboard:(char)arg1 ;
-(void)_continueOrFinish;
-(void)_preflightCurrentPayload;
-(void)_processResponseAndContinue;
-(void)_cancelInput;
-(void)_nextButtonClicked;
-(void)_cancelButtonClicked;
-(void)_disableRightButton;
-(void)_showNavButtonsAnimated:(char)arg1 ;
-(void)_enableRightButton;
-(void)_tellDelegateDidFinishWithUserInputResponses:(id)arg1 ;
-(void)_finishInput;
-(void)_continueWithCurrentField;
-(void)_retryCurrentPasswordFieldWithError:(id)arg1 ;
-(void)_showErrorAlertWithError:(id)arg1 ;
-(void)_hideProgressIndicator;
-(void)_didFinishPasscodePreflightWithError:(id)arg1 ;
-(void)_didFinishPreflightWithError:(id)arg1 ;
-(void)_retryWithCurrentField;
-(void)_retryPayload;
-(void)_skipPayload;
-(void)_textFieldValueChanged:(id)arg1 ;
-(void)_configureQuestionField:(id)arg1 ;
-(void)_cancelPayload;
-(id<MCProfileQuestionsControllerDelegate>)questionsDelegate;
-(id)initWithFieldCollection:(id)arg1 ;
-(void)setQuestionsDelegate:(id<MCProfileQuestionsControllerDelegate>)arg1 ;
-(void)_setup;
-(void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2 ;
-(char)canBeShownFromSuspendedState;
@end
