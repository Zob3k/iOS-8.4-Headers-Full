/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>

@protocol EKUIDividedGridViewControllerDelegate;
@class NSArray;

@interface EKUIDividedGridViewController : UIViewController {

	int _type;
	float _preferredWidth;
	NSArray* _buttonTitles;
	NSArray* _allCells;
	id<EKUIDividedGridViewControllerDelegate> _delegate;
	NSArray* _weekViews;

}

@property (assign,nonatomic) float preferredWidth;                                  //@synthesize preferredWidth=_preferredWidth - In the implementation block
@property (nonatomic,retain) NSArray * buttonTitles;                                //@synthesize buttonTitles=_buttonTitles - In the implementation block
@property (retain) NSArray * allCells;                                              //@synthesize allCells=_allCells - In the implementation block
@property (__weak) id<EKUIDividedGridViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSArray * weekViews;                                             //@synthesize weekViews=_weekViews - In the implementation block
+(id)dividerColor;
-(NSArray *)allCells;
-(id)_newDividerView;
-(float)_defaultButtonWidthForButtonAtIndex:(int)arg1 ;
-(void)setAllCells:(NSArray *)arg1 ;
-(void)setWeekViews:(NSArray *)arg1 ;
-(float)_rowHeightForWidth:(float)arg1 ;
-(NSArray *)weekViews;
-(float)_neededHeight;
-(id)initWithType:(int)arg1 buttonTitles:(id)arg2 ;
-(void)cellTapped:(id)arg1 ;
-(void)setDelegate:(id<EKUIDividedGridViewControllerDelegate>)arg1 ;
-(id<EKUIDividedGridViewControllerDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(NSArray *)buttonTitles;
-(void)setButtonTitles:(NSArray *)arg1 ;
-(float)preferredWidth;
-(void)setPreferredWidth:(float)arg1 ;
@end

