/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:35:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/__UITransitionViewAccessibility_super.h>
#import <UIKit/UIAXDelegateClearerDelegateeProtocol.h>

@class NSString;

@interface UITransitionViewAccessibility : __UITransitionViewAccessibility_super <UIAXDelegateClearerDelegateeProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_axCleanupDelegateClearer;
-(id)_accessibilityRetrieveDelegate;
-(id)_axDelegateClearerKey;
-(char)_accessibilityIgnoreDelegate;
-(void)clearDelegateClearer;
-(void)_axClearDelegate:(id)arg1 ;
-(void)_accessibilitySetDelegateClearer:(id)arg1 ;
-(id)_accessibilityDimmingViewSubview;
-(id)_accessibilityDimmingViewForAlertController;
-(id)_accessibilityDimmingView;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)_didCompleteTransition:(char)arg1 ;
-(char)accessibilityViewIsModal;
-(char)accessibilityPerformEscape;
@end

