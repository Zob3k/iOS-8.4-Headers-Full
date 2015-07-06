/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>

@class NSMutableArray;

@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {

	UIEdgeInsets _contentInset;
	float _arrowHeight;
	CGSize _preferredContentSize;
	unsigned _preferredArrowDirections;
	CGRect _containingFrame;
	UIEdgeInsets _containingFrameInsets;
	CGRect _targetRect;
	char _constrainToTargetRect;
	CGRect _frame;
	float _offset;
	unsigned _arrowDirection;
	char _preferLandscapeOrientations;
	char _updatesEnabled;
	NSMutableArray* _candidates;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                                                          //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) float arrowHeight;                                                                  //@synthesize arrowHeight=_arrowHeight - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;                                                        //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign,nonatomic) unsigned preferredArrowDirections;                                                  //@synthesize preferredArrowDirections=_preferredArrowDirections - In the implementation block
@property (assign,nonatomic) CGRect containingFrame;                                                             //@synthesize containingFrame=_containingFrame - In the implementation block
@property (assign,nonatomic) UIEdgeInsets containingFrameInsets;                                                 //@synthesize containingFrameInsets=_containingFrameInsets - In the implementation block
@property (assign,nonatomic) CGRect targetRect;                                                                  //@synthesize targetRect=_targetRect - In the implementation block
@property (assign,nonatomic) char constrainToTargetRect;                                                         //@synthesize constrainToTargetRect=_constrainToTargetRect - In the implementation block
@property (assign,nonatomic) char preferLandscapeOrientations;                                                   //@synthesize preferLandscapeOrientations=_preferLandscapeOrientations - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                                                     //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) float offset;                                                                     //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned arrowDirection;                                                          //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (assign,setter=_setUpdatesEnabled:,getter=_updatesEnabled,nonatomic) char updatesEnabled;              //@synthesize updatesEnabled=_updatesEnabled - In the implementation block
+(id)_observationKeys;
-(void)dealloc;
-(id)init;
-(CGRect)frame;
-(id)description;
-(UIEdgeInsets)contentInset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(CGSize)preferredContentSize;
-(id)candidates;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(float)offset;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGRect)targetRect;
-(void)setTargetRect:(CGRect)arg1 ;
-(unsigned)arrowDirection;
-(void)_setUpdatesEnabled:(char)arg1 ;
-(void)setArrowHeight:(float)arg1 ;
-(void)setPreferredArrowDirections:(unsigned)arg1 ;
-(void)setContainingFrame:(CGRect)arg1 ;
-(void)setContainingFrameInsets:(UIEdgeInsets)arg1 ;
-(void)setConstrainToTargetRect:(char)arg1 ;
-(void)setPreferLandscapeOrientations:(char)arg1 ;
-(void)_updateOutputs;
-(unsigned)preferredArrowDirections;
-(CGRect)containingFrame;
-(UIEdgeInsets)containingFrameInsets;
-(char)constrainToTargetRect;
-(char)preferLandscapeOrientations;
-(CGSize)_popoverViewSizeForContentSize:(CGSize)arg1 arrowDirection:(unsigned)arg2 ;
-(void)setProperties:(/*^block*/id)arg1 ;
-(float)arrowHeight;
-(char)_updatesEnabled;
@end
