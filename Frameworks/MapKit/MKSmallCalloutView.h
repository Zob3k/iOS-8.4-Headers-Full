/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <MapKit/CalloutViewControllerProtocol.h>

@protocol _MKCalloutAccessoryView;
@class UILabel, UIView, _MKSmallCalloutPassthroughButton, MKCalloutBackgroundView, NSMutableArray, NSString;

@interface MKSmallCalloutView : UIView <CalloutViewControllerProtocol> {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView*<_MKCalloutAccessoryView> _leftView;
	UIView*<_MKCalloutAccessoryView> _rightView;
	UIView*<_MKCalloutAccessoryView> _externalLeftView;
	UIView*<_MKCalloutAccessoryView> _externalRightView;
	UIView*<_MKCalloutAccessoryView> _detailView;
	CGSize _preferredContentSize;
	float _maxWidth;
	char _shouldPositionTitleForMapsTransitionMovingSideways;
	_MKSmallCalloutPassthroughButton* _maskedContainerView;
	UIView* _unmaskedContainerView;
	MKCalloutBackgroundView* _calloutBackgroundView;
	unsigned _mapDisplayStyle;
	UIView* _leftSpacerView;
	UIView* _rightSpacerView;
	NSMutableArray* _lastConstraints;
	char _initialDetailViewPositioning;
	char _initialLeftViewPositioning;
	char _initialRightViewPositioning;

}

@property (nonatomic,readonly) CGSize _preferredContentSize;                               //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (nonatomic,retain) MKCalloutBackgroundView * calloutBackgroundView;              //@synthesize calloutBackgroundView=_calloutBackgroundView - In the implementation block
@property (assign,nonatomic) unsigned mapDisplayStyle;                                     //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (assign,nonatomic) float maximumWidth;                                           //@synthesize maxWidth=_maxWidth - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * calloutTitle; 
@property (nonatomic,copy) NSString * calloutSubtitle; 
@property (nonatomic,retain) UIView * leftView; 
@property (nonatomic,retain) UIView * rightView; 
@property (nonatomic,retain) UIView * detailView; 
-(NSString *)calloutSubtitle;
-(void)setCalloutSubtitle:(id)arg1 animated:(char)arg2 ;
-(void)setDetailView:(id)arg1 animated:(char)arg2 ;
-(void)beginMapsTransitionMovingSideways;
-(UIView *)detailView;
-(MKCalloutBackgroundView *)calloutBackgroundView;
-(void)setCalloutBackgroundView:(MKCalloutBackgroundView *)arg1 ;
-(char)canDisplayCompleteTitleWhenExpanded;
-(void)setCalloutSubtitle:(NSString *)arg1 ;
-(void)setDetailView:(UIView *)arg1 ;
-(void)_updateAccessoryViewStyles;
-(id)_subtitleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)reset;
-(void)setMaximumWidth:(float)arg1 ;
-(float)maximumWidth;
-(CGSize)_preferredContentSize;
-(void)updateConstraints;
-(void)setLeftView:(id)arg1 animated:(char)arg2 ;
-(void)setRightView:(id)arg1 animated:(char)arg2 ;
-(void)setLeftView:(UIView *)arg1 ;
-(void)setRightView:(UIView *)arg1 ;
-(UIView *)leftView;
-(UIView *)rightView;
-(void)_updatePreferredContentSize;
-(NSString *)calloutTitle;
-(void)setCalloutTitle:(NSString *)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(unsigned)mapDisplayStyle;
-(void)setMapDisplayStyle:(unsigned)arg1 ;
@end

