/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:35:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextContentViewAccessibility_super.h>

@interface UITextContentViewAccessibility : __UITextContentViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
-(char)_accessibilitySupportsActivateAction;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(char)_accessibilityShouldAnnounceFontInfo;
-(char)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(char)arg3 ;
-(char)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
-(char)accessibilityActivate;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
@end
