/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:35:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryFramework/PhotoLibraryFramework-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UIView;

@interface PLUIAccessibilityMockSlider : UIAccessibilityElement {

	UIView* _view;
	id _delegate;

}

@property (nonatomic,retain) UIView * view;              //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) id delegate;                //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(char)accessibilityScroll:(int)arg1 ;
@end

