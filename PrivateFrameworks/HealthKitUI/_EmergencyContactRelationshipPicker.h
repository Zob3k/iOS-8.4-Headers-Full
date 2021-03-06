/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol _EmergencyContactRelationshipPickerDelegate;
@class NSArray;

@interface _EmergencyContactRelationshipPicker : UITableViewController {

	NSArray* _tokens;
	NSArray* _labels;
	id<_EmergencyContactRelationshipPickerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_EmergencyContactRelationshipPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_cancelTapped:(id)arg1 ;
-(void)setDelegate:(id<_EmergencyContactRelationshipPickerDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<_EmergencyContactRelationshipPickerDelegate>)delegate;
-(void)viewDidLoad;
@end

