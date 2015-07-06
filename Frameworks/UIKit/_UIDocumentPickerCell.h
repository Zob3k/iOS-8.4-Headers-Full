/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIImageView, UIProgressView, UIView, NSLayoutConstraint, UILongPressGestureRecognizer;

@interface _UIDocumentPickerCell : UICollectionViewCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _subtitle2Label;
	UIImageView* _thumbnailView;
	UIProgressView* _progressView;
	UIView* _thumbnailCenterView;
	NSLayoutConstraint* _thumbnailCenterWidthConstraint;
	NSLayoutConstraint* _thumbnailCenterHeightConstraint;
	UILongPressGestureRecognizer* _pickableDiagnosticGestureRecognizer;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitle2Label;                                                        //@synthesize subtitle2Label=_subtitle2Label - In the implementation block
@property (nonatomic,retain) UIImageView * thumbnailView;                                                     //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                                   //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * thumbnailCenterView;                                                    //@synthesize thumbnailCenterView=_thumbnailCenterView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * thumbnailCenterWidthConstraint;                             //@synthesize thumbnailCenterWidthConstraint=_thumbnailCenterWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * thumbnailCenterHeightConstraint;                            //@synthesize thumbnailCenterHeightConstraint=_thumbnailCenterHeightConstraint - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * pickableDiagnosticGestureRecognizer;              //@synthesize pickableDiagnosticGestureRecognizer=_pickableDiagnosticGestureRecognizer - In the implementation block
+(CGSize)thumbnailSizeForTraits:(id)arg1 ;
+(CGSize)defaultSizeForTraits:(id)arg1 ;
+(id)folderIconForTraits:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(UILabel *)subtitleLabel;
-(void)_showPickableDiagnostic;
-(void)setPickableDiagnosticGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)pickableDiagnosticGestureRecognizer;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setSubtitle2Label:(UILabel *)arg1 ;
-(UILabel *)subtitle2Label;
-(void)setThumbnailCenterView:(UIView *)arg1 ;
-(void)setThumbnailView:(UIImageView *)arg1 ;
-(UIImageView *)thumbnailView;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(UIView *)thumbnailCenterView;
-(void)setThumbnailCenterHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setThumbnailCenterWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)thumbnailCenterHeightConstraint;
-(NSLayoutConstraint *)thumbnailCenterWidthConstraint;
-(id)viewControllerForDisplay;
-(void)reloadItem:(char)arg1 ;
@end
