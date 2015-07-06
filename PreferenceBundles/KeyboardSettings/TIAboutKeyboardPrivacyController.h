/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <KeyboardSettings/KeyboardSettings-Structs.h>
#import <UIKit/UITextViewDelegate.h>

@class PSSpecifier, PSListController, NSString;

@interface TIAboutKeyboardPrivacyController : NSObject <UITextViewDelegate> {

	char _asHeader;
	PSSpecifier* _specifier;
	PSListController* _listController;

}

@property (nonatomic,retain) PSSpecifier * specifier;                        //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,retain) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic) char asHeader;                                  //@synthesize asHeader=_asHeader - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)dealloc;
-(char)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(id)initWithGroupSpecifier:(id)arg1 asHeader:(char)arg2 inListController:(id)arg3 ;
-(void)addPrivacyLinkViewIfNecessaryToHeaderView:(id)arg1 forSection:(int)arg2 ;
-(void)setupSpecifier;
-(char)asHeader;
-(void)aboutDonePressed;
-(void)setListController:(PSListController *)arg1 ;
-(void)setAsHeader:(char)arg1 ;
-(PSListController *)listController;
@end
