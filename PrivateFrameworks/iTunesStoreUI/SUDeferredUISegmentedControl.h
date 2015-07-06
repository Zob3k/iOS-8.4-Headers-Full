/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UISegmentedControl.h>
#import <iTunesStoreUI/SUDeferredUIView.h>

@class NSMutableArray, NSString;

@interface SUDeferredUISegmentedControl : UISegmentedControl <SUDeferredUIView> {

	CGRect _deferredFrame;
	float _deferredMaxTotalWidth;
	float _deferredMinSegmentWidth;
	NSMutableArray* _deferredSegments;
	int _deferredSegmentedControlStyle;
	unsigned _deferredSelectedSegmentIndex;
	char _deferredSizeToFit;
	char _isDeferringInterfaceUpdates;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDeferringInterfaceUpdates,nonatomic) char deferringInterfaceUpdates; 
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)sizeToFit;
-(void)setSegmentedControlStyle:(int)arg1 ;
-(void)removeAllSegments;
-(void)setSelectedSegmentIndex:(int)arg1 ;
-(int)segmentedControlStyle;
-(void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned)arg2 animated:(char)arg3 ;
-(void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned)arg2 animated:(char)arg3 ;
-(void)removeSegmentAtIndex:(unsigned)arg1 animated:(char)arg2 ;
-(void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned)arg2 ;
-(id)titleForSegmentAtIndex:(unsigned)arg1 ;
-(void)setImage:(id)arg1 forSegmentAtIndex:(unsigned)arg2 ;
-(id)imageForSegmentAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfSegments;
-(int)selectedSegmentIndex;
-(char)isDeferringInterfaceUpdates;
-(void)setDeferringInterfaceUpdates:(char)arg1 ;
-(void)sizeToFitWithMinimumSegmentWidth:(float)arg1 maximumTotalWidth:(float)arg2 ;
-(void)_saveCurrentStateAsDeferred;
-(void)_commitDeferredInterfaceUpdates;
-(void)_insertSegmentWithValue:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_saveSegmentsAsDeferred;
@end
