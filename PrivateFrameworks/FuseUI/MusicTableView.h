/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicBasicTableView.h>

@class NSArray;

@interface MusicTableView : MusicBasicTableView {

	int _highlightedSectionHeaderViewIndex;
	int _selectedSectionHeaderViewIndex;
	char _enforcesMinimumLayoutMargin;
	char _rightSeparatorInsetFollowsLayoutMargin;
	char _shouldTreatContentOffsetChangesAsDeltas;

}

@property (assign,nonatomic) id<MusicTableViewDelegate> delegate; 
@property (assign,nonatomic) char enforcesMinimumLayoutMargin;                          //@synthesize enforcesMinimumLayoutMargin=_enforcesMinimumLayoutMargin - In the implementation block
@property (assign,nonatomic) char rightSeparatorInsetFollowsLayoutMargin;               //@synthesize rightSeparatorInsetFollowsLayoutMargin=_rightSeparatorInsetFollowsLayoutMargin - In the implementation block
@property (nonatomic,readonly) int indexForSelectedSectionHeader; 
@property (nonatomic,copy,readonly) NSArray * visibleSectionHeaderViews; 
@property (assign,nonatomic) char shouldTreatContentOffsetChangesAsDeltas;              //@synthesize shouldTreatContentOffsetChangesAsDeltas=_shouldTreatContentOffsetChangesAsDeltas - In the implementation block
-(void)layoutSubviews;
-(void)layoutMarginsDidChange;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)layoutMargins;
-(void)tintColorDidChange;
-(char)_shouldDrawSeparatorAtBottomOfSection:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)_touchesBegan:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3 ;
-(void)_touchesCancelled:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3 ;
-(void)_touchesEnded:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3 ;
-(void)_touchesMoved:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3 ;
-(char)shouldTreatContentOffsetChangesAsDeltas;
-(void)setRightSeparatorInsetFollowsLayoutMargin:(char)arg1 ;
-(char)rightSeparatorInsetFollowsLayoutMargin;
-(void)setEnforcesMinimumLayoutMargin:(char)arg1 ;
-(int)indexForSelectedSectionHeader;
-(void)deselectHeaderForSection:(int)arg1 animated:(char)arg2 ;
-(void)selectHeaderForSection:(int)arg1 animated:(char)arg2 ;
-(void)setShouldTreatContentOffsetChangesAsDeltas:(char)arg1 ;
-(NSArray *)visibleSectionHeaderViews;
-(void)_updateRightSeparatorInset;
-(void)_clearHeaderViewSelectionAnimated:(char)arg1 ;
-(int)_sectionForSelectableHeaderView:(id)arg1 ;
-(void)_clearHeaderViewHighlightAnimated:(char)arg1 ;
-(char)enforcesMinimumLayoutMargin;
@end

