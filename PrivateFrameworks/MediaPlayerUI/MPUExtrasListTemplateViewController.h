/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, UIImageView, NSArray, NSMapTable, NSIndexPath, MPUExtrasViewElementViewController, NSString;

@interface MPUExtrasListTemplateViewController : MPUExtrasTemplateViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	char _tableViewLeft;
	UIImageView* _vignetteView;
	char _relatedContentEmbedded;
	NSArray* _masterViewConstraints;
	NSArray* _detailViewConstraints;
	NSMapTable* _relatedContentViewControllerMap;
	NSIndexPath* _autohighlightIndexPath;
	MPUExtrasViewElementViewController* _relatedContentViewController;

}

@property (nonatomic,retain) MPUExtrasViewElementViewController * relatedContentViewController;              //@synthesize relatedContentViewController=_relatedContentViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)relatedContentViewControllerForElement:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)setRelatedContentViewController:(MPUExtrasViewElementViewController *)arg1 ;
-(MPUExtrasViewElementViewController *)relatedContentViewController;
-(char)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)_prepareLayout;
-(void)_configureBannerWithElement:(id)arg1 ;
-(void)_updateForTemplate:(id)arg1 ;
-(void)_updateRelatedContent:(id)arg1 forListItem:(id)arg2 ;
-(void)_embedRelatedContentViewController;
-(void)_unembedRelatedContent;
-(void)_pushRelatedViewController:(id)arg1 animated:(char)arg2 ;
-(void)_setDetailContraints;
-(void)_setRelatedContentEmbedded:(char)arg1 ;
-(void)_addConstraintsToTableView:(id)arg1 ;
-(void)_configureVignette:(char)arg1 ;
-(void)_setNavigationConstraints;
-(char)showsPlaceholder;
-(id)templateElement;
@end

