/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:47 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBIconViewMapDelegate <SBReusableViewMapDelegate>
@optional
-(id)viewMapShouldPrepareViewsOfClasses:(id)arg1;
-(unsigned)viewMap:(id)arg1 numberOfViewsToPrepareOfClass:(Class)arg2;

@required
-(Class)iconViewClassForIcon:(id)arg1 location:(int)arg2;
-(int)viewMap:(id)arg1 locationForIcon:(id)arg2;

@end

