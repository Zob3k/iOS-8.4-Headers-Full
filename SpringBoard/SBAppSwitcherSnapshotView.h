/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:54 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBAppSwitcherPageContentView.h>

@protocol SBAppSwitcherCacheVended, OS_dispatch_queue;
@class SBDisplayItem, SBApplication, UIView, SBAppSwitcherSettings, SBWallpaperEffectView, SBSnapshotImageInfo, UIImageView, SBZoomableCrossfadeView, UIImage, SBAppSwitcherStatusBarViewCache, NSObject, NSString;

@interface SBAppSwitcherSnapshotView : UIView <SBAppSwitcherPageContentView> {

	SBDisplayItem* _displayItem;
	SBApplication* _application;
	UIView* _containerView;
	SBAppSwitcherSettings* _settings;
	SBWallpaperEffectView* _wallpaperEffectView;
	SBSnapshotImageInfo* _snapshotImageInfo;
	UIImageView* _snapshotImageView;
	CGSize _imageSize;
	SBZoomableCrossfadeView* _updateCrossfadeView;
	SBZoomableCrossfadeView* _zoomUpCrossfadeView;
	UIImageView* _zoomUpSnapshotView;
	CGSize _zoomUpImageSize;
	UIImage* _deferredUpdateImage;
	SBAppSwitcherStatusBarViewCache* _statusBarCache;
	UIView*<SBAppSwitcherCacheVended> _statusBar;
	char _isVisible;
	char _simplifyForMotion;
	char _invalidated;
	char _needsZoomFilter;
	char _loadedImage;
	char _needsZoomUpImage;
	int _appSnapshotUpdatedSequenceID;
	NSObject*<OS_dispatch_queue> _snapshotQueue;
	char _shouldTransitionToDefaultPng;
	int _orientation;

}

@property (nonatomic,copy,readonly) SBDisplayItem * displayItem;                         //@synthesize displayItem=_displayItem - In the implementation block
@property (assign,nonatomic) int orientation;                                            //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) char shouldTransitionToDefaultPng;                          //@synthesize shouldTransitionToDefaultPng=_shouldTransitionToDefaultPng - In the implementation block
@property (nonatomic,retain) SBSnapshotImageInfo * snapshotImageInfo;                    //@synthesize snapshotImageInfo=_snapshotImageInfo - In the implementation block
@property (nonatomic,retain) SBZoomableCrossfadeView * updateCrossfadeView;              //@synthesize updateCrossfadeView=_updateCrossfadeView - In the implementation block
@property (nonatomic,retain) UIImage * deferredUpdateImage;                              //@synthesize deferredUpdateImage=_deferredUpdateImage - In the implementation block
@property (assign) char invalidated;                                                     //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appSwitcherSnapshotViewForDisplayItem:(id)arg1 orientation:(int)arg2 loadAsync:(char)arg3 withQueue:(id)arg4 statusBarCache:(id)arg5 ;
+(id)_fallbackDefaultBackgroundColor;
-(void)_viewPresenting:(id)arg1 ;
-(void)_viewDismissing:(id)arg1 ;
-(void)prepareToBecomeVisibleIfNecessary;
-(void)respondToBecomingInvisibleIfNecessary;
-(void)simplifyForMotion;
-(void)unsimplifyAfterMotion;
-(void)setOrientation:(int)arg1 orientationBehavior:(int)arg2 ;
-(void)setShouldTransitionToDefaultPng:(char)arg1 ;
-(void)_layoutStatusBar;
-(id)initWithDisplayItem:(id)arg1 application:(id)arg2 orientation:(int)arg3 async:(char)arg4 withQueue:(id)arg5 statusBarCache:(id)arg6 ;
-(void)_snapshotChanged:(id)arg1 ;
-(int)_containerOrientation;
-(SBSnapshotImageInfo *)snapshotImageInfo;
-(CGRect)_snapshotFrame;
-(void)_updateStatusbarTranslucency;
-(void)_loadSnapshotAsync;
-(void)_loadZoomUpSnapshotSync;
-(void)setDeferredUpdateImage:(UIImage *)arg1 ;
-(void)setUpdateCrossfadeView:(SBZoomableCrossfadeView *)arg1 ;
-(void)_updateTranslucency;
-(UIImage *)deferredUpdateImage;
-(void)_crossfadeToNewSnapshotImage:(id)arg1 ;
-(void)_layoutContainer;
-(CGAffineTransform)_rotationTransformForOrientation;
-(void)_loadSnapshotSync;
-(id)_cachedImageForImageInfos:(id)arg1 downscaled:(char)arg2 foundInfo:(out id*)arg3 ;
-(id)_snapshotInfoForSnapshotFromInfos:(id)arg1 ;
-(id)_snapshotImageForImageInfo:(id)arg1 downscaledIfAvailable:(char)arg2 downscaledWasAvailableOut:(out char*)arg3 ;
-(id)_snapshotInfoForDefaultPNG;
-(char)shouldTransitionToDefaultPng;
-(id)_snapshotInfos;
-(id)_imageFromSnapshotInfos:(id)arg1 forZoomUp:(char)arg2 loadedImageInfoOut:(out id*)arg3 loadedDownscaledOut:(out char*)arg4 ;
-(void)setSnapshotImageInfo:(SBSnapshotImageInfo *)arg1 ;
-(void)_loadImageAsyncFromSnapshotInfo:(id)arg1 ;
-(id)_snapshotInfoForDefaultPNGWithLaunchOrientation:(int)arg1 ;
-(id)_snapshotName;
-(char)_queue_keepGoing;
-(CGImageRef)_queue_createDecodedImageIfPossible:(CGImageRef)arg1 ;
-(void)_snapshotImageLoaded:(CGImageRef)arg1 withInfo:(id)arg2 downscaled:(char)arg3 ;
-(void)_loadImageAsyncBodySnapshotInfo:(id)arg1 displayItem:(id)arg2 ;
-(id)_cachedSnapshotForSnapshotInfos:(id)arg1 downscaled:(char)arg2 foundInfo:(out id*)arg3 ;
-(CGImageRef)_cgImageForSnapshotInfo:(id)arg1 downscaled:(char)arg2 ;
-(void)_crossfadeToZoomUpViewIfNecessary;
-(SBDisplayItem *)displayItem;
-(SBZoomableCrossfadeView *)updateCrossfadeView;
-(char)invalidated;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidate;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(void)setInvalidated:(char)arg1 ;
@end
