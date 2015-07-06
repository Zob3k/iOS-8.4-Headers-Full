/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class WKContentView, NSString;

@interface WKAirPlayRoutePicker : UIView <UIPopoverControllerDelegate> {

	RetainPtr<MPAVRoutingController>* _routingController;
	RetainPtr<MPAudioVideoRoutingPopoverController>* _popoverController;
	RetainPtr<MPAudioVideoRoutingActionSheet>* _actionSheet;
	WKContentView* _view;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithView:(id)arg1 ;
-(void)show:(char)arg1 fromRect:(CGRect)arg2 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)_windowWillRotate:(id)arg1 ;
-(void)_dismissAirPlayRoutePickerIPad;
-(void)_windowDidRotate:(id)arg1 ;
-(void)_presentAirPlayPopoverAnimated:(char)arg1 fromRect:(CGRect)arg2 ;
-(void)showAirPlayPickerIPad:(unsigned)arg1 fromRect:(CGRect)arg2 ;
-(void)showAirPlayPickerIPhone:(unsigned)arg1 ;
@end
