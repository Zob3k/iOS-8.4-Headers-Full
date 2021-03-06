/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PLUIImageViewController.h>

@interface PLUIEditImageViewController : PLUIImageViewController {

	id _delegate;
	int _saveOptions;
	int _mode;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                 //@synthesize mode=_mode - In the implementation block
-(id)photo;
-(id)initWithPhoto:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)imageTile;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(void)cropOverlayWasOKed:(id)arg1 ;
-(int)cropOverlayMode;
-(unsigned)_contentAutoresizingMask;
-(unsigned)_tileAutoresizingMask;
-(void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2 ;
-(void)setImageSavingOptions:(int)arg1 ;
-(int)saveOptions;
-(int)imageFormat;
@end

