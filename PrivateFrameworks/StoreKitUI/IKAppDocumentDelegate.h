/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IKAppDocumentDelegate <NSObject>
@optional
-(void)document:(id)arg1 runTestWithName:(id)arg2 options:(id)arg3;
-(void)documentScrollToTop:(id)arg1;
-(id)impressionableViewElementsForDocument:(id)arg1;
-(char)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;

@required
-(void)documentDidUpdate:(id)arg1;
-(void)documentNeedsUpdate:(id)arg1;

@end

