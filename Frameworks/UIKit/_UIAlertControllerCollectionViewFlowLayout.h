/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class UIAlertControllerVisualStyle, NSArray;

@interface _UIAlertControllerCollectionViewFlowLayout : UICollectionViewFlowLayout {

	float _alignedDescriptiveLabelTextWidth;
	char _hideSeparators;
	UIAlertControllerVisualStyle* _visualStyle;
	char _shouldRoundFirstCell;
	NSArray* _actionDelimiterIndices;

}

@property (assign) char shouldRoundFirstCell;                                         //@synthesize shouldRoundFirstCell=_shouldRoundFirstCell - In the implementation block
@property (assign) char hideSeparators; 
@property (assign) float alignedDescriptiveLabelTextWidth; 
@property (nonatomic,retain) NSArray * actionDelimiterIndices;                        //@synthesize actionDelimiterIndices=_actionDelimiterIndices - In the implementation block
@property (assign,nonatomic) UIAlertControllerVisualStyle * visualStyle; 
+(Class)layoutAttributesClass;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)setHideSeparators:(char)arg1 ;
-(UIAlertControllerVisualStyle *)visualStyle;
-(void)setVisualStyle:(UIAlertControllerVisualStyle *)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setAlignedDescriptiveLabelTextWidth:(float)arg1 ;
-(float)alignedDescriptiveLabelTextWidth;
-(char)_collectionViewIsLayingOutHorizontallyWithCellHeight:(float)arg1 ;
-(char)shouldRoundFirstCell;
-(id)_topDecorationViewLayoutAttributesAtIndexPath:(id)arg1 ;
-(char)_indexPathIsSectionDelimiter:(id)arg1 ;
-(float)_decorationDimensionAtIndexPath:(id)arg1 ;
-(float)_delimiterShiftForCellAtIndexPath:(id)arg1 ;
-(NSArray *)actionDelimiterIndices;
-(float)_delimiterShiftForDecorationViewAtIndexPath:(id)arg1 ;
-(char)hideSeparators;
-(void)setShouldRoundFirstCell:(char)arg1 ;
-(void)setActionDelimiterIndices:(NSArray *)arg1 ;
@end

