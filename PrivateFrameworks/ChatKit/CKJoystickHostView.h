/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class CKJoystickView, NSArray;


@protocol CKJoystickHostView
@property (nonatomic,retain,readonly) CKJoystickView * joystickView; 
@property (nonatomic,copy) NSArray * passthroughViews; 
@required
+(id)sharedInstance;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(id)arg1;
-(CKJoystickView *)joystickView;
-(void)dismissJoystickViewAnimated:(char)arg1;
-(void)presentJoystickView:(id)arg1 fromPoint:(CGPoint)arg2 inView:(id)arg3 animated:(char)arg4;

@end
