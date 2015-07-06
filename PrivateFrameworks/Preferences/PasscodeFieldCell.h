/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>
#import <Preferences/PSPasscodeFieldDelegate.h>

@protocol KeychainSyncPasscodeFieldDelegate;
@class PSPasscodeField, NSString;

@interface PasscodeFieldCell : PSTableCell <PSPasscodeFieldDelegate> {

	PSPasscodeField* _passcodeField;
	char _convertsNumeralsToASCII;
	char _denyFirstResponder;
	id<KeychainSyncPasscodeFieldDelegate> _delegate;

}

@property (assign,nonatomic) id<KeychainSyncPasscodeFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char convertsNumeralsToASCII;                                //@synthesize convertsNumeralsToASCII=_convertsNumeralsToASCII - In the implementation block
@property (assign,nonatomic) char denyFirstResponder;                                     //@synthesize denyFirstResponder=_denyFirstResponder - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<KeychainSyncPasscodeFieldDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<KeychainSyncPasscodeFieldDelegate>)delegate;
-(char)becomeFirstResponder;
-(char)hasText;
-(void)deleteBackward;
-(int)keyboardType;
-(id)passcodeField:(id)arg1 shouldInsertText:(id)arg2 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)setConvertsNumeralsToASCII:(char)arg1 ;
-(char)denyFirstResponder;
-(char)convertsNumeralsToASCII;
-(void)_setSecureTextEntry:(char)arg1 ;
-(void)setPasscodeText:(id)arg1 ;
-(id)passcodeText;
-(void)setDenyFirstResponder:(char)arg1 ;
@end
