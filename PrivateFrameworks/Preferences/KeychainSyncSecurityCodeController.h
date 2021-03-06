/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/KeychainSyncTextEntryController.h>

@class NSString, UIButton, UILabel;

@interface KeychainSyncSecurityCodeController : KeychainSyncTextEntryController {

	NSString* _generatedCode;
	UIButton* _footerButton;
	UILabel* _footerLabel;
	float _keyboardHeight;
	char _showsAdvancedSettings;
	int _mode;
	int _securityCodeType;
	NSString* _firstPasscodeEntry;

}

@property (assign,nonatomic) int mode;                                   //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) int securityCodeType;                       //@synthesize securityCodeType=_securityCodeType - In the implementation block
@property (assign,nonatomic) char showsAdvancedSettings;                 //@synthesize showsAdvancedSettings=_showsAdvancedSettings - In the implementation block
@property (nonatomic,retain) NSString * firstPasscodeEntry;              //@synthesize firstPasscodeEntry=_firstPasscodeEntry - In the implementation block
-(id)placeholderText;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)specifiers;
-(int)securityCodeType;
-(void)setSecurityCodeType:(int)arg1 ;
-(NSString *)firstPasscodeEntry;
-(void)setFirstPasscodeEntry:(NSString *)arg1 ;
-(Class)textEntryCellClass;
-(id)textEntryCell;
-(void)showAdvancedOptions;
-(void)generateRandomCode;
-(void)forgotSecurityCode;
-(void)updateNextButton;
-(void)animatePasscodeFieldLeft:(char)arg1 ;
-(void)textEntryViewDidChange:(id)arg1 ;
-(void)didFinishEnteringText:(id)arg1 ;
-(void)dismissAlerts;
-(char)showsAdvancedSettings;
-(void)setShowsAdvancedSettings:(char)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
@end

