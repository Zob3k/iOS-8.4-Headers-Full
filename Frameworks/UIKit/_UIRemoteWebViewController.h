/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>

@class _UIWebViewController;

@interface _UIRemoteWebViewController : _UIRemoteViewController {

	_UIWebViewController* _webViewController;

}

@property (assign,nonatomic) _UIWebViewController * webViewController;              //@synthesize webViewController=_webViewController - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(_UIWebViewController *)webViewController;
-(void)setWebViewController:(_UIWebViewController *)arg1 ;
@end
