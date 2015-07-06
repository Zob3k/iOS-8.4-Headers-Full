/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@protocol MTDateLabelObserver;
@class NSTimeZone, NSDate, UILabel, UIColor, UIFont;

@interface MTDateLabel : UIView {

	NSTimeZone* _timeZone;
	char _hideTimeDesignator;
	NSDate* _date;
	UILabel* _dateLabel;
	UILabel* _timeDesignatorLabel;
	float _paddingFromTimeToDesignator;
	int _timeDesignatorBaselineAdjustment;
	id<MTDateLabelObserver> _observer;

}

@property (nonatomic,copy) NSDate * date;                                       //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,readonly) UILabel * dateLabel;                             //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,readonly) UILabel * timeDesignatorLabel;                   //@synthesize timeDesignatorLabel=_timeDesignatorLabel - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIFont * timeDesignatorFont; 
@property (nonatomic,readonly) char hasTimeDesignator; 
@property (assign,nonatomic) char hideTimeDesignator;                           //@synthesize hideTimeDesignator=_hideTimeDesignator - In the implementation block
@property (assign,nonatomic) float paddingFromTimeToDesignator;                 //@synthesize paddingFromTimeToDesignator=_paddingFromTimeToDesignator - In the implementation block
@property (assign,nonatomic) int timeDesignatorBaselineAdjustment;              //@synthesize timeDesignatorBaselineAdjustment=_timeDesignatorBaselineAdjustment - In the implementation block
@property (assign,nonatomic) id<MTDateLabelObserver> observer;                  //@synthesize observer=_observer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIFont *)font;
-(UIColor *)textColor;
-(id<MTDateLabelObserver>)observer;
-(void)setObserver:(id<MTDateLabelObserver>)arg1 ;
-(id)viewForBaselineLayout;
-(UIFont *)timeDesignatorFont;
-(void)setDate:(NSDate *)arg1 ;
-(float)paddingFromTimeToDesignator;
-(void)setPaddingFromTimeToDesignator:(float)arg1 ;
-(NSTimeZone *)timeZone;
-(UILabel *)dateLabel;
-(void)setTimeDesignatorFont:(UIFont *)arg1 ;
-(void)setHideTimeDesignator:(char)arg1 ;
-(void)_updateDateString;
-(void)_noteLayoutChange;
-(char)hasTimeDesignator;
-(void)setTimeDesignatorBaselineAdjustment:(int)arg1 ;
-(UILabel *)timeDesignatorLabel;
-(char)hideTimeDesignator;
-(int)timeDesignatorBaselineAdjustment;
@end
