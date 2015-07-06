/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKRecurrenceChooserController.h>

@protocol EKRecurrenceChooserControllerDelegate;
@class EKRecurrenceMonthDayChooserController, EKRecurrenceOrdinalChooserController, UITableViewCell;

@interface EKRecurrenceMonthlyChooserController : EKRecurrenceChooserController {

	EKRecurrenceMonthDayChooserController* _monthDayChooser;
	EKRecurrenceOrdinalChooserController* _ordinalChooser;
	id<EKRecurrenceChooserControllerDelegate> _delegate;
	int _selectedRow;
	UITableViewCell* _onEachCell;
	UITableViewCell* _onTheCell;

}

@property (assign,nonatomic) char prohibitsMultipleDaysInMonthlyRecurrence; 
-(id)initWithDate:(id)arg1 ;
-(char)prohibitsMultipleDaysInMonthlyRecurrence;
-(void)setProhibitsMultipleDaysInMonthlyRecurrence:(char)arg1 ;
-(id)cellForRow:(int)arg1 ;
-(float)heightForRow:(int)arg1 ;
-(char)drawBackgroundForRow:(int)arg1 ;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(void)rowTapped:(int)arg1 ;
-(id)_currentChooser;
-(void)_selectRow:(int)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(int)numberOfRows;
-(int)frequency;
@end
