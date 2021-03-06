/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIAlertControllerDescriptor, UITraitCollection;

@interface UIAlertControllerVisualStyle : NSObject {

	UIAlertControllerDescriptor* _descriptor;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,retain) UIAlertControllerDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                   //@synthesize traitCollection=_traitCollection - In the implementation block
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(float)maximumWidth;
-(id)backgroundView;
-(id)dimmingView;
-(void)setDescriptor:(UIAlertControllerDescriptor *)arg1 ;
-(float)verticalContentMargin;
-(id)titleLabelFont;
-(id)titleLabelColor;
-(float)marginAboveTitleLabelFirstBaseline;
-(float)marginBelowLastLabelLastBaseline;
-(int)maximumNumberOfLinesInTitleLabel;
-(id)messageLabelFont;
-(id)messageLabelColor;
-(int)maximumNumberOfLinesInMessageLabel;
-(float)horizontalContentMargin;
-(float)visualAltitude;
-(id)regularActionFont;
-(id)defaultActionFont;
-(id)actionHighlightedBackgroundView;
-(id)highlightedActionContentColor;
-(id)defaultActionBackgroundColorWhenSeparate;
-(float)minimumActionHeight;
-(id)disabledActionContentColor;
-(char)focusedActionAnimatesOnPresentationAndDismissal;
-(CGAffineTransform)presentationAnimationStartTransform;
-(float)sectionDelimitingSeparatorDimension;
-(char)hideActionSeparators;
-(float)marginBelowTitleLabelLastBaseline;
-(float)marginAboveMessageLabelFirstBaseline;
-(float)marginBelowMessageLabelLastBaseline;
-(id)_detailMessageFont;
-(float)actionWidthForMinimumActionWidth:(float)arg1 ;
-(float)backgroundCornerRadius;
-(CGSize)collectionViewOutsetSize;
-(float)_scaledMarginAboveTitleLabelFirstBaseline;
-(float)_scaledMarginBelowTitleLabelLastBaseline;
-(float)_scaledMarginAboveMessageLabelFirstBaseline;
-(float)_scaledMarginBelowMessageLabelLastBaseline;
-(float)_scaledMarginBelowLastLabelLastBaseline;
-(UIAlertControllerDescriptor *)descriptor;
@end

