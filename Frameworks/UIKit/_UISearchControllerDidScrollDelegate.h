/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIScrollNotification.h>

@protocol _UIScrollNotification;
@class UIScrollView, NSString;

@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollNotification> {

	UIScrollView* _scrollView;
	id<_UIScrollNotification> _controller;

}

@property (assign,nonatomic) id<_UIScrollNotification> controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) UIScrollView * scrollView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_updateBackdropMaskViewsInScrollView:(id)arg1 ;
-(void)_didScroll;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(id<_UIScrollNotification>)controller;
-(void)setController:(id<_UIScrollNotification>)arg1 ;
@end
