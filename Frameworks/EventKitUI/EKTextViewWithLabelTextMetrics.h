/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITextView.h>
#import <EventKitUI/CalendarLabelTextMetrics.h>

@class UIFont, UIColor, NSString;

@interface EKTextViewWithLabelTextMetrics : UITextView <CalendarLabelTextMetrics> {

	int lineBreakMode;

}

@property (assign,nonatomic) int numberOfLines; 
@property (assign,nonatomic) int lineBreakMode; 
@property (assign,nonatomic) int textAlignment; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) NSString * text; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberOfLines:(int)arg1 ;
-(void)setLineBreakMode:(int)arg1 ;
-(int)lineBreakMode;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(int)arg2 ;
-(int)numberOfLines;
-(void)setURL:(id)arg1 ;
@end

