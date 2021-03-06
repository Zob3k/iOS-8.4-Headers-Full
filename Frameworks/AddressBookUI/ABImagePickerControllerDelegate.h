/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class ABImagePickerController;


@protocol ABImagePickerControllerDelegate
@property (assign,nonatomic) char popoverSizeUpdatesDisabled; 
@property (nonatomic,readonly) ABImagePickerController * imagePicker; 
@required
-(void)imagePicker:(id)arg1 pickedPhoto:(id)arg2;
-(void)imagePickerWillBeRemoved:(id)arg1;
-(void)setPopoverSizeUpdatesDisabled:(char)arg1;
-(id)imagePickerControllerViewControllerToPresentModal:(id)arg1;
-(id)personImageView;
-(void)imagePicker:(id)arg1 presentActionSheet:(id)arg2;
-(void)removeImagePickerControllerFromUI;
-(void)finishTearingDownImagePickerController;
-(void)imagePickerWillBeShown:(id)arg1;
-(id)imagePickerControllerViewForApplyImageAnimation:(id)arg1;
-(void)imagePicker:(id)arg1 didDismissActionSheet:(id)arg2;
-(id)selectedPeople;
-(void)showImageMenuForHelper:(id)arg1;
-(char)popoverSizeUpdatesDisabled;
-(ABImagePickerController *)imagePicker;
-(id)styleProvider;

@end

