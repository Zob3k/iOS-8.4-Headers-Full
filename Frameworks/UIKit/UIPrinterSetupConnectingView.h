/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView;

@interface UIPrinterSetupConnectingView : UIView {

	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;
	double _presentationTime;

}

@property (nonatomic,retain) UILabel * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) double presentationTime;                                  //@synthesize presentationTime=_presentationTime - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setMessage:(id)arg1 active:(char)arg2 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)presentView;
-(UIActivityIndicatorView *)activityIndicator;
-(double)presentationTime;
-(void)setPresentationTime:(double)arg1 ;
@end
