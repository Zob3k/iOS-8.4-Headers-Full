/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TKTonePickerControllerDelegateInternal <NSObject>
@optional
-(id)tonePickerController:(id)arg1 titleOfMediaItemAtIndex:(unsigned)arg2;
-(void)tonePickerController:(id)arg1 didSelectMediaItemAtIndex:(unsigned)arg2 selectionDidChange:(char)arg3;
-(void)tonePickerControllerRequestsPresentingMediaItemPicker:(id)arg1;
-(void)tonePickerControllerRequestsPresentingVibrationPicker:(id)arg1;
-(void)tonePickerController:(id)arg1 requestsPresentingToneClassicsPickerForItem:(id)arg2;
-(void)tonePickerControllerRequestsPresentingToneStore:(id)arg1;
-(void)tonePickerControllerDidStopPlaying:(id)arg1 withFadeOutDuration:(double)arg2;
-(char)tonePickerControllerShouldShowMedia:(id)arg1;
-(unsigned)numberOfMediaItemsInTonePickerController:(id)arg1;
-(id)tonePickerController:(id)arg1 identifierOfMediaItemAtIndex:(unsigned)arg2;
-(unsigned)tonePickerController:(id)arg1 indexOfMediaItemWithIdentifier:(id)arg2;
-(void)tonePickerController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2;
-(void)tonePickerControllerRequestsMediaItemsRefresh:(id)arg1;

@end

