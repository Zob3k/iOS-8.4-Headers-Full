/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicProductDetailViewController.h>
#import <FuseUI/MusicEntityEditableVerticalLockupViewDelegate.h>

@protocol MusicPlaylistProductDetailViewControllerDelegate;
@class MusicEntityEditableVerticalLockupView, UIImage, NSString;

@interface MusicPlaylistProductDetailViewController : MusicProductDetailViewController <MusicEntityEditableVerticalLockupViewDelegate> {

	MusicEntityEditableVerticalLockupView* _editableVerticalLockupView;
	UIImage* _editedPlaylistArtworkImage;
	char _forPlaylistCreation;
	id<MusicPlaylistProductDetailViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MusicPlaylistProductDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MusicPlaylistProductDetailViewControllerDelegate>)arg1 ;
-(id<MusicPlaylistProductDetailViewControllerDelegate>)delegate;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewDidLoad;
-(id)initWithContainerEntityProvider:(id)arg1 clientContext:(id)arg2 forPlaylistCreation:(char)arg3 ;
-(void)setEditedPlaylistArtworkImage:(id)arg1 ;
-(void)editableVerticalLockupView:(id)arg1 didSelectCameraButton:(id)arg2 ;
-(void)cancelEditing;
-(id)loadVerticalLockupContentDescriptor;
-(id)loadVerticalLockupView;
@end

