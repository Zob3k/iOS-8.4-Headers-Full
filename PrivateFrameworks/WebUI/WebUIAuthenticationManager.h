/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, UIAlertController;

@interface WebUIAuthenticationManager : NSObject {

	NSMutableArray* _authenticationChallenges;
	char _isShowingAuthenticationPanel;
	UIAlertController* _alertController;
	id _delegate;

}

@property (__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)authenticationChallenge;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)_cancel;
-(void)_didResolveChallenge;
-(void)setShowingAuthentication:(char)arg1 ;
-(void)addAuthenticationChallenge:(id)arg1 displayPanel:(char)arg2 ;
-(void)cancelAuthentication;
-(void)addAuthenticationChallenge:(id)arg1 ;
-(void)removeAuthenticationChallenge:(id)arg1 ;
@end
