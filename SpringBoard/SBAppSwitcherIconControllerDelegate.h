/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:47 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBAppSwitcherIconControllerDelegate <NSObject>
@required
-(void)switcherIconScroller:(id)arg1 contentOffsetChanged:(float)arg2;
-(void)switcherIconScroller:(id)arg1 activate:(id)arg2;
-(char)switcherIconScroller:(id)arg1 shouldHideIconForDisplayLayout:(id)arg2;
-(void)switcherIconScrollerBeganPanning:(id)arg1;
-(unsigned)switcherIconScroller:(id)arg1 settledIndexForNormalizedOffset:(inout float*)arg2 andXVelocity:(float)arg3;
-(void)switcherIconScrollerDidEndScrolling:(id)arg1;

@end

