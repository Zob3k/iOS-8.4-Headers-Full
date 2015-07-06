/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HelpKit/HelpKit-Structs.h>
#import <HelpKit/APDNavigationTableViewController.h>
#import <UIKit/UISearchBarDelegate.h>

@class APDSearchModel, APDSearchBar, UILabel, UIView, NSTimer, NSString;

@interface APDSearchViewController : APDNavigationTableViewController <UISearchBarDelegate> {

	char _showSearchBarPending;
	char _viewDidAppeared;
	char _shouldHighlighViewingTopic;
	APDSearchModel* _searchModel;
	char _searching;
	APDSearchBar* _searchBar;
	UILabel* _footerViewLabel;
	UIView* _footerView;
	UIView* _toolbarTopOverlapView;
	UIView* _topbarBottomStrokeView;
	NSTimer* _axSearchTimer;

}

@property (assign,nonatomic,__weak) id<APDSearchViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) APDSearchBar * searchBar;                                  //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic,__weak) UILabel * footerViewLabel;                                 //@synthesize footerViewLabel=_footerViewLabel - In the implementation block
@property (assign,getter=isSearching,nonatomic) char searching;                                //@synthesize searching=_searching - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                              //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * toolbarTopOverlapView;                            //@synthesize toolbarTopOverlapView=_toolbarTopOverlapView - In the implementation block
@property (assign,nonatomic,__weak) UIView * topbarBottomStrokeView;                           //@synthesize topbarBottomStrokeView=_topbarBottomStrokeView - In the implementation block
@property (nonatomic,retain) NSTimer * axSearchTimer;                                          //@synthesize axSearchTimer=_axSearchTimer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isSearching;
-(void)hide;
-(void)show;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(int)positionForBar:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(APDSearchBar *)searchBar;
-(void)dismissKeyboard;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(char)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)setSearchBar:(APDSearchBar *)arg1 ;
-(void)setSearching:(char)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)updateLocalizedStrings;
-(void)updateViewLayout;
-(UILabel *)footerViewLabel;
-(UIView *)toolbarTopOverlapView;
-(UIView *)topbarBottomStrokeView;
-(NSTimer *)axSearchTimer;
-(void)updateFooterLabel;
-(void)updateTableViewData;
-(void)announceResults;
-(void)setAxSearchTimer:(NSTimer *)arg1 ;
-(void)enableSearchBarCancelButton:(id)arg1 ;
-(void)endSearch;
-(void)setFooterViewLabel:(UILabel *)arg1 ;
-(void)setToolbarTopOverlapView:(UIView *)arg1 ;
-(void)setTopbarBottomStrokeView:(UIView *)arg1 ;
@end
