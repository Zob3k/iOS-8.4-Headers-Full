/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITableView.h>

@class UISearchDisplayController, UIView;

@interface UISearchResultsTableView : UITableView {

	UISearchDisplayController* _controller;
	float _offsetForNoResultsMessage;
	UIView* _topShadowView;

}

@property (assign,nonatomic) UISearchDisplayController * controller;                                               //@synthesize controller=_controller - In the implementation block
@property (setter=_setTopShadowView:,getter=_topShadowView,nonatomic,retain) UIView * _topShadowView; 
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)_numberOfRowsDidChange;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(UIView *)_topShadowView;
-(UISearchDisplayController *)controller;
-(void)setController:(UISearchDisplayController *)arg1 ;
-(void)_setOffsetForNoResultsMessage:(float)arg1 ;
-(float)_offsetForNoResultsMessage;
-(void)_setTopShadowView:(id)arg1 ;
@end

