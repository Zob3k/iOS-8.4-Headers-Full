/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIWebView, NSData;

@interface PSWebContainerView : UIView {

	UIWebView* _webView;
	NSData* _content;

}

@property (nonatomic,readonly) UIWebView * webView;              //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSData * content;                   //@synthesize content=_content - In the implementation block
-(float)heightForWidth:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(UIWebView *)webView;
-(void)setUserStyleSheet:(id)arg1 ;
-(NSData *)content;
-(void)setContent:(NSData *)arg1 ;
@end
