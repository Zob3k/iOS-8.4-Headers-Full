/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:59 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/_SBFVibrantView.h>

@protocol SBResponderTouchDelegate;
@class UIView, SBLegibilityView, SBSaturatedIconView, UIImage, _SBFVibrantSettings, NSString;

@interface SBSlideUpAppGrabberView : UIView <_SBFVibrantView> {

	UIEdgeInsets _hitTestEdgeInsets;
	UIView* _tintView;
	UIView* _backgroundView;
	SBLegibilityView* _legibilityView;
	SBSaturatedIconView* _saturatedIconView;
	UIImage* _grabberImage;
	char _vibrancyAllowed;
	_SBFVibrantSettings* _vibrantSettings;
	id<SBResponderTouchDelegate> _delegate;

}

@property (assign,nonatomic) id<SBResponderTouchDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets hitTestEdgeInsets;                           //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
@property (assign,getter=isVibrancyAllowed,nonatomic) char vibrancyAllowed;              //@synthesize vibrancyAllowed=_vibrancyAllowed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SBFVibrantSettings * vibrantSettings;                      //@synthesize vibrantSettings=_vibrantSettings - In the implementation block
-(char)_shouldUseVibrancy;
-(void)setVibrancyAllowed:(char)arg1 ;
-(id)initWithAdditionalTopPadding:(char)arg1 invertVerticalInsets:(char)arg2 ;
-(void)setAppStyleGrabberImage:(id)arg1 ;
-(void)setGrabberImage:(id)arg1 ;
-(void)setGrabberImageFromApp:(id)arg1 ;
-(char)isVibrancyAllowed;
-(id)_lazyLegibilityView;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SBResponderTouchDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SBResponderTouchDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundView:(id)arg1 ;
-(_SBFVibrantSettings *)vibrantSettings;
-(void)setVibrantSettings:(_SBFVibrantSettings *)arg1 ;
-(void)setStrength:(float)arg1 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(UIEdgeInsets)hitTestEdgeInsets;
@end
