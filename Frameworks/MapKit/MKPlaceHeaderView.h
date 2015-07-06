/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <MapKit/MKStackingViewControllerSizableView.h>
#import <MapKit/MKPlaceHeaderViewCinematics.h>
#import <MapKit/MKPlaceHeaderBackgroundViewDelegate.h>

@protocol MKPlaceHeaderViewDelegate;
@class MKPlaceHeaderBackgroundView, UIView, UIImageView, MKDistanceDetailProvider, MKStarRatingView, MKMapItem, NSLayoutConstraint, NSArray, NSMutableArray, NSString, UIFont;

@interface MKPlaceHeaderView : UIView <MKStackingViewControllerSizableView, MKPlaceHeaderViewCinematics, MKPlaceHeaderBackgroundViewDelegate> {

	MKPlaceHeaderBackgroundView* _background;
	UIView* _screen;
	UIImageView* _vignette;
	MKDistanceDetailProvider* _distanceMonitor;
	char _showBusinessDetails;
	MKStarRatingView* _ratingView;
	UILabel* _titleLabel;
	UILabel* _distanceToPlaceLabel;
	struct {
		unsigned isPresenting;
	}  _headerViewFlags;
	char _needsToUpdateTitleLabel;
	MKMapItem* _mapItem;
	int _backgroundTypeOverride;
	id<MKPlaceHeaderViewDelegate> _delegate;
	NSLayoutConstraint* _titleLabelBaselineConstraint;
	NSArray* _labelWidthConstraints;
	NSMutableArray* _viewDidAppearBlocks;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                            //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) int backgroundTypeOverride;                                     //@synthesize backgroundTypeOverride=_backgroundTypeOverride - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subTitle; 
@property (assign,nonatomic) float rating; 
@property (nonatomic,readonly) UIFont * subtitleFont; 
@property (assign,nonatomic,__weak) id<MKPlaceHeaderViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char needsToUpdateTitleLabel;                                   //@synthesize needsToUpdateTitleLabel=_needsToUpdateTitleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelBaselineConstraint;              //@synthesize titleLabelBaselineConstraint=_titleLabelBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSArray * labelWidthConstraints;                                //@synthesize labelWidthConstraints=_labelWidthConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewDidAppearBlocks;                           //@synthesize viewDidAppearBlocks=_viewDidAppearBlocks - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewDidAppearBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)viewDidAppearBlocks;
-(void)setSubTitle:(NSString *)arg1 ;
-(void)setBackgroundTypeOverride:(int)arg1 ;
-(void)resetAnimations;
-(void)restartAnimations;
-(void)setBackgroundViewTransform:(CATransform3D)arg1 ;
-(void)pauseAnimations;
-(void)resumeAnimations;
-(void)prepareForPresentation;
-(void)headerViewBackgroundDidFinishLoading:(id)arg1 ;
-(void)refreshContent;
-(void)addContent;
-(void)addConstraints;
-(NSLayoutConstraint *)titleLabelBaselineConstraint;
-(void)setNeedsToUpdateTitleLabel:(char)arg1 ;
-(void)_configureLabelForHeader:(id)arg1 ;
-(UILabel*)newInfoLabel;
-(void)setTitleLabelBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)presentBackgroundIfNeeded;
-(void)fadeOutScreen;
-(NSString *)subTitle;
-(int)backgroundTypeOverride;
-(NSArray *)labelWidthConstraints;
-(void)setLabelWidthConstraints:(NSArray *)arg1 ;
-(char)needsToUpdateTitleLabel;
-(void)updateTitleLabel;
-(id)viewsForPresentation;
-(void)resetVignette;
-(void)headerViewBackground:(id)arg1 willShowBackground:(id)arg2 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MKPlaceHeaderViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MKPlaceHeaderViewDelegate>)delegate;
-(NSString *)title;
-(void)reset;
-(void)viewDidAppear:(char)arg1 ;
-(void)resume;
-(void)present;
-(UIFont *)subtitleFont;
-(void)pause;
-(CATransform3D)perspectiveTransform;
-(float)rating;
-(void)setRating:(float)arg1 ;
@end
