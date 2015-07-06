/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UITableViewCell.h>

@class NSArray;

@interface CertUIItemDetailsSummaryCell : UITableViewCell {

	NSArray* _detailViews;
	float _detailLabelOriginX;

}

@property (nonatomic,retain) NSArray * detailViews;                 //@synthesize detailViews=_detailViews - In the implementation block
@property (assign,nonatomic) float detailLabelOriginX;              //@synthesize detailLabelOriginX=_detailLabelOriginX - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(NSArray *)detailViews;
-(void)setDetailViews:(NSArray *)arg1 ;
-(void)setDetailLabelOriginX:(float)arg1 ;
-(void)createViewWithDescriptors:(id)arg1 ;
-(void)createViewWithItemDetailArray:(id)arg1 ;
-(float)detailLabelOriginX;
@end
