/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:15:00 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBScaleIconZoomAnimator.h>

@class SBFolderController, SBFloatyFolderView, _SBInnerFolderIconZoomAnimator, SBFolderZoomSettings, SBFolderIcon, SBFolderIconView;

@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator {

	SBFolderController* _innerFolderController;
	SBFloatyFolderView* _innerFolderView;
	_SBInnerFolderIconZoomAnimator* _innerZoomAnimator;

}

@property (nonatomic,retain) SBFolderZoomSettings * settings; 
@property (nonatomic,retain,readonly) SBFolderIcon * targetIcon; 
@property (nonatomic,retain,readonly) SBFolderIconView * targetIconView; 
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(char)_forceSquareZoomDimension;
-(CGRect)_zoomedFrame;
-(void)_setAnimationFraction:(float)arg1 ;
-(unsigned)_numberOfSignificantAnimations;
-(void)_animateToFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(id)initWithOuterController:(id)arg1 innerController:(id)arg2 folderIcon:(id)arg3 ;
-(void)dealloc;
@end
