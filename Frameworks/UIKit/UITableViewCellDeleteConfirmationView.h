/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UITableViewCellActionButton, NSArray;

@interface UITableViewCellDeleteConfirmationView : UIView {

	float _visibleWidth;
	CGSize _contentSize;
	float _visibleHeightRatio;
	float _cornerRadius;
	int _sectionLocation;
	_UITableViewCellActionButton* _deleteView;
	_UITableViewCellActionButton* _accessoryView;
	NSArray* _actionButtons;

}

@property (assign,nonatomic) float visibleWidth;                                          //@synthesize visibleWidth=_visibleWidth - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                        //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) float visibleHeightRatio;                                    //@synthesize visibleHeightRatio=_visibleHeightRatio - In the implementation block
@property (assign,nonatomic) float cornerRadius;                                          //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) int sectionLocation;                                         //@synthesize sectionLocation=_sectionLocation - In the implementation block
@property (nonatomic,readonly) _UITableViewCellActionButton * deleteView;                 //@synthesize deleteView=_deleteView - In the implementation block
@property (nonatomic,readonly) _UITableViewCellActionButton * accessoryView;              //@synthesize accessoryView=_accessoryView - In the implementation block
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)contentSize;
-(float)cornerRadius;
-(void)setCornerRadius:(float)arg1 ;
-(void)setVisibleHeightRatio:(float)arg1 ;
-(int)sectionLocation;
-(void)setSectionLocation:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 actionButtons:(id)arg2 contentSize:(CGSize)arg3 ;
-(void)setVisibleWidth:(float)arg1 ;
-(_UITableViewCellActionButton *)accessoryView;
-(void)updateMaskView:(char)arg1 ;
-(void)updateBounds;
-(float)visibleWidth;
-(float)visibleHeightRatio;
-(_UITableViewCellActionButton *)deleteView;
@end

