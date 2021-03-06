/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, NSArray;

@interface MCInstallationWarningCell : UITableViewCell {

	UILabel* _warningLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * warningLabel;              //@synthesize warningLabel=_warningLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;               //@synthesize constraints=_constraints - In the implementation block
+(id)reuseIdentifier;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)_setupConstraints;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(NSArray *)constraints;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(UILabel *)warningLabel;
-(void)setWarningLabel:(UILabel *)arg1 ;
-(void)_setup;
@end

