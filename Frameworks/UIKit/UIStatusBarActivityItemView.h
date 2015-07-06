/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@class UIActivityIndicatorView;

@interface UIStatusBarActivityItemView : UIStatusBarItemView {

	UIActivityIndicatorView* _activityIndicator;
	char _slowActivity;
	char _syncActivity;
	char _newsstandActivity;

}
-(void)dealloc;
-(void)setVisible:(char)arg1 ;
-(char)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(float)updateContentsAndWidth;
-(float)shadowPadding;
-(void)_stopAnimating;
-(void)_startAnimating;
-(int)_activityIndicatorStyle;
@end
