/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>
#import <CommunicationsSetupUI/CNFRegCreateAccountControllerDelegate.h>

@class PSSpecifier, NSString, CNFRegLearnMoreButton;

@interface CNFRegSignInController : CNFRegFirstRunController <CNFRegCreateAccountControllerDelegate> {

	PSSpecifier* _usernameSpecifier;
	PSSpecifier* _passwordSpecifier;
	PSSpecifier* _actionGroupSpecifier;
	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _createAccountButtonSpecifier;
	NSString* _pendingUsername;
	NSString* _pendingPassword;
	/*^block*/id _alertHandler;
	unsigned _signinFailureCount;
	CNFRegLearnMoreButton* _learnMoreButton;
	char _hideLearnMoreButton;
	char _useSystemAccount;

}

@property (nonatomic,copy) NSString * pendingUsername;                 //@synthesize pendingUsername=_pendingUsername - In the implementation block
@property (nonatomic,copy) NSString * pendingPassword;                 //@synthesize pendingPassword=_pendingPassword - In the implementation block
@property (nonatomic,copy) id alertHandler;                            //@synthesize alertHandler=_alertHandler - In the implementation block
@property (assign,nonatomic) unsigned signinFailureCount;              //@synthesize signinFailureCount=_signinFailureCount - In the implementation block
@property (assign,nonatomic) char hideLearnMoreButton;                 //@synthesize hideLearnMoreButton=_hideLearnMoreButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpecifier:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationDidResume;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)loadView;
-(id)passwordTextField;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)bundle;
-(void)setAlertHandler:(id)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(id)alertHandler;
-(void)systemApplicationDidEnterBackground;
-(id)specifierList;
-(id)logName;
-(void)_setFieldsEnabled:(char)arg1 animated:(char)arg2 ;
-(void)_setupEventHandlers;
-(void)setUsernameText:(id)arg1 ;
-(id)usernameTextField;
-(void)signInTapped:(id)arg1 ;
-(void)showCreateAccountController;
-(void)forgotIDButtonTapped;
-(char)usernameIsEmpty;
-(char)passwordIsEmpty;
-(void)_buildSpecifierCache:(id)arg1 ;
-(void)setHideLearnMoreButton:(char)arg1 ;
-(void)_launchForgotPasswordUrl;
-(void)_resetSigninFailureCount;
-(void)_incrementSigninFailureCount;
-(void)_showRegistrationFailureWithError:(id)arg1 ;
-(void)createAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(char)hideLearnMoreButton;
-(void)_returnKeyPressed;
-(id)_rightButtonItem;
-(id)validationString;
-(void)_updateControllerState;
-(void)_layoutLearnMoreButton;
-(void)learnMorePressed:(id)arg1 ;
-(void)_resignFirstResponders;
-(NSString *)pendingUsername;
-(NSString *)pendingPassword;
-(id)getUserNameForSpecifier:(id)arg1 ;
-(id)getPasswordForSpecifier:(id)arg1 ;
-(void)setSignInButtonEnabled:(char)arg1 animated:(char)arg2 ;
-(void)__userTappedTextField;
-(void)setPendingUsername:(NSString *)arg1 ;
-(void)setPendingPassword:(NSString *)arg1 ;
-(void)_startTimeout;
-(void)_loadRegionsIfNecessary;
-(void)setUsernameEnabled:(char)arg1 animated:(char)arg2 ;
-(void)setPasswordEnabled:(char)arg1 animated:(char)arg2 ;
-(void)setCreateAccountButtonEnabled:(char)arg1 animated:(char)arg2 ;
-(void)_buildCreateAccountButtonSpecifierCache:(id)arg1 ;
-(void)_buildSignInGroupSpecifierCache:(id)arg1 ;
-(void)_buildCredentialSpecifierCache:(id)arg1 ;
-(unsigned)signinFailureCount;
-(void)_showSigninFailureAlert;
-(void)setSigninFailureCount:(unsigned)arg1 ;
-(void)_showNewPasswordNeededSheetWithAppleID:(id)arg1 ;
-(void)_showAccountNotAuthorizedSheetWithAuthID:(id)arg1 token:(id)arg2 ;
-(void)_finishSignInWithAccount:(id)arg1 animated:(char)arg2 ;
-(void)usernameFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2 ;
-(void)passwordFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2 ;
-(void)usernameFieldDidBeginEditing:(id)arg1 ;
-(void)passwordFieldDidBeginEditing:(id)arg1 ;
-(void)_setupAppearBlockForNewPasswordWithAppleID:(id)arg1 ;
-(void)_setupAppearBlockForAccountAuthorizeWithAuthID:(id)arg1 token:(id)arg2 ;
-(void)_handleTimeout;
-(void)handleURL:(id)arg1 ;
-(void)_updateUI;
-(void)cancelButtonTapped;
-(void)setPasswordText:(id)arg1 ;
@end
