/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:59 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBIconListPageControlDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBIconScrollViewDelegate.h>

@protocol SBFolderViewDelegate;
@class NSMutableArray, NSMutableSet, SBIconListView, SBIconViewMap, SBIconListPageControl, SBIconScrollView, SBFolderTitleTextField, UIView, SBFakeStatusBarView, UISwipeGestureRecognizer, UITapGestureRecognizer, SBFolder, _UILegibilitySettings, NSArray, NSString;

@interface SBFolderView : UIView <SBIconListPageControlDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, SBIconScrollViewDelegate> {

	NSMutableArray* _iconListViews;
	NSMutableSet* _scrollingDisabledReasons;
	SBIconListView* _rotatingIconList;
	int _minVisibleListViewIndex;
	int _maxVisibleListViewIndex;
	int _minAnimatingListViewIndex;
	int _maxAnimatingListViewIndex;
	int _disableUpdatingCurrentIconListCount;
	int _firstDisplayedColumnOnCurrentList;
	char _animatedScrolling;
	char _scalingViewIsBorrowed;
	SBIconViewMap* _viewMap;
	NSMutableArray* _scrollFrames;
	unsigned _scrollFrameCount;
	SBIconListPageControl* _pageControl;
	SBIconScrollView* _scrollView;
	SBFolderTitleTextField* _titleTextField;
	UIView* _scalingView;
	SBFakeStatusBarView* _reachabilityStatusBar;
	UISwipeGestureRecognizer* _swipeToCancelReachabilityGestureRecognizer;
	UISwipeGestureRecognizer* _swipeToRevealNotificationCenterGestureRecognizer;
	UITapGestureRecognizer* _tapToCancelReachabilityGestureRecognizer;
	char _isEditing;
	char _isScrolling;
	int _currentPageIndex;
	float _statusBarHeight;
	id<SBFolderViewDelegate> _delegate;
	SBFolder* _folder;
	int _orientation;
	_UILegibilitySettings* _legibilitySettings;
	int _animatingToOrientation;
	UIEdgeInsets _reachabilityStatusBarEdgeInsets;

}

@property (assign,nonatomic) id<SBFolderViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBFolder * folder;                                         //@synthesize folder=_folder - In the implementation block
@property (getter=isEditing,nonatomic,readonly) char editing;                           //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,getter=isScrolling,nonatomic) char scrolling;                         //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign,nonatomic) int orientation;                                           //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) int currentPageIndex;                                    //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iconListViews;                            //@synthesize iconListViews=_iconListViews - In the implementation block
@property (nonatomic,readonly) unsigned iconListViewCount; 
@property (nonatomic,retain,readonly) SBIconViewMap * viewMap; 
@property (assign,nonatomic) float statusBarHeight;                                     //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) int animatingToOrientation;                                //@synthesize animatingToOrientation=_animatingToOrientation - In the implementation block
@property (assign,nonatomic) UIEdgeInsets reachabilityStatusBarEdgeInsets;              //@synthesize reachabilityStatusBarEdgeInsets=_reachabilityStatusBarEdgeInsets - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)_countOfAdditionalPagesToKeepVisibleInOneDirection;
+(Class)_scrollViewClass;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(SBIconViewMap *)viewMap;
-(void)handleRevealNotificationCenterGesture:(id)arg1 ;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 context:(id)arg4 ;
-(unsigned)iconListViewCount;
-(void)resetIconListViews;
-(void)updateIconListViews;
-(NSArray *)iconListViews;
-(void)_updateIconListFrames;
-(void)_updatePageControlToIndex:(int)arg1 ;
-(void)_setScrollingDisabled:(char)arg1 forReason:(id)arg2 ;
-(char)setCurrentPageIndex:(int)arg1 animated:(char)arg2 ;
-(id)_newPageControl;
-(float)_offsetToCenterPageControlInSpaceForPageControl;
-(void)prepareToOpen;
-(void)setPageControlHidden:(char)arg1 ;
-(id)iconListViewAtIndex:(unsigned)arg1 ;
-(void)layoutIconLists:(double)arg1 domino:(char)arg2 forceRelayout:(char)arg3 ;
-(id)currentIconListView;
-(id)iconListViewForTouch:(id)arg1 ;
-(void)noteUserIsInteractingWithIcons;
-(void)handleReachabilityActivated:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)borrowScalingView;
-(void)returnScalingView;
-(void)fadeContentForMagnificationFraction:(float)arg1 ;
-(void)handleCancelReachabilityGesture:(id)arg1 ;
-(void)resetContentOffsetToCurrentPage;
-(void)pageControl:(id)arg1 didRecieveTouchInDirection:(int)arg2 ;
-(char)_showsTitle;
-(float)_titleFontSize;
-(void)didAnimate;
-(id)_legibilitySettingsWithPrimaryColor:(id)arg1 ;
-(void)prepareForZoomAnimation;
-(void)cleanUpAfterZoomAnimation;
-(char)doesPageContainIconListView:(int)arg1 ;
-(void)willAnimateWithSettings:(id)arg1 ;
-(void)setIconPageIndicatorImageSetCache:(id)arg1 ;
-(void)_addIconListView:(id)arg1 ;
-(void)_removeIconListView:(id)arg1 ;
-(unsigned)_countOfAdditionalPagesToKeepAnimatingInOneDirection;
-(CGRect)_frameForScalingView;
-(void)_updateIconListContainment:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_currentPageIndexDidChange;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(void)repositionForReachabilityActivated:(char)arg1 animated:(char)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(CGRect)_iconListFrameForPageRect:(CGRect)arg1 atIndex:(unsigned)arg2 ;
-(char)locationCountsAsInsideFolder:(CGPoint)arg1 ;
-(void)fadeContentForMinificationFraction:(float)arg1 ;
-(float)reachabilityYOffset;
-(void)_disableUserInteractionBeforeSignificantAnimation;
-(void)_enableUserInteractionAfterSignificantAnimation;
-(void)tearDownListViews;
-(char)_updatesWallpaperRelativeCenter;
-(void)_purgeListViews;
-(char)_scrollViewThinksItsScrolling;
-(void)_setAnimatedScrolling:(char)arg1 ;
-(void)_endScrollingTest;
-(void)updateIconListIndexAndVisibility:(char)arg1 ;
-(void)_setCurrentPageIndex:(int)arg1 deferringPageControlUpdate:(char)arg2 ;
-(char)_isValidPageIndex:(int)arg1 ;
-(float)_scrollOffsetForPageAtIndex:(int)arg1 ;
-(void)_setCurrentPageIndex:(int)arg1 ;
-(unsigned)_minusPageCount;
-(float)_pageWidth;
-(float)_scrollOffsetForFirstListView;
-(id)_iconListViewAtIndex:(unsigned)arg1 ;
-(id)_createIconListViewForList:(id)arg1 ;
-(void)_addIconListViewsForModels:(id)arg1 ;
-(id)_iconListViewForList:(id)arg1 ;
-(CGSize)_scrollViewContentSize;
-(void)_resetIconListViews;
-(void)_updateIconListViews;
-(void)updateIconListIndexAndVisibility;
-(char)_shouldDisableUpdatingCurrentIconList;
-(int)_pageIndexForOffset:(float)arg1 ;
-(int)lowestVisibleIconListIndexAndColumn:(int*)arg1 columnsOnScreen:(int*)arg2 totalLists:(unsigned)arg3 columnsPerList:(unsigned)arg4 ;
-(void)_pushDisableUpdateCurrentIconListCount;
-(id)_currentIconListView;
-(void)_popDisableUpdateCurrentIconListCount;
-(void)_setFolderName:(id)arg1 ;
-(void)_updateTitleLegibilitySettings;
-(int)animatingToOrientation;
-(UIEdgeInsets)reachabilityStatusBarEdgeInsets;
-(void)iconScrollViewWillCancelTouchTracking:(id)arg1 ;
-(void)iconScrollViewDidCancelTouchTracking:(id)arg1 ;
-(void)iconScrollView:(id)arg1 willSetContentOffset:(inout CGPoint*)arg2 ;
-(CGRect)scalingViewFrame;
-(char)_hasMinusPages;
-(void)noteUserHasGrabbedIcon:(char)arg1 ;
-(void)cleanupAfterClosing;
-(void)setAnimatingToOrientation:(int)arg1 ;
-(void)setReachabilityStatusBarEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SBFolderViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SBFolderViewDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(float)statusBarHeight;
-(int)orientation;
-(id)_interactionTintColor;
-(void)willMoveToWindow:(id)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 ;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)scrollView;
-(void)setOrientation:(int)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(char)isScrolling;
-(void)_orientationDidChange:(int)arg1 ;
-(int)currentPageIndex;
-(void)setStatusBarHeight:(float)arg1 ;
-(void)setFolder:(SBFolder *)arg1 ;
-(SBFolder *)folder;
-(void)_updateEditingStateAnimated:(char)arg1 ;
-(void)_layoutSubviews;
-(void)setScrolling:(char)arg1 ;
@end
