/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSISEngineDelegate <NSObject>
@required
-(void)constraintsDidChangeInEngine:(id)arg1;
-(id)engine:(id)arg1 markerForConstraintToBreakAmongConstraints:(id)arg2;
-(void)engine:(id)arg1 willBreakConstraint:(id)arg2 dueToMutuallyExclusiveConstraints:(id)arg3;

@end
