/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKWelcomeView.h>

@class UIButton;

@interface PKPassWelcomeView : PKWelcomeView {

	UIButton* _appStoreButton;

}
+(id)messageAttributedString:(char)arg1 ;
+(float)headerImageRegionHeight;
+(UIEdgeInsets)margins;
+(UIEdgeInsets)textInsets;
-(void)_scanCodePressed;
-(void)_appStorePressed;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
@end

