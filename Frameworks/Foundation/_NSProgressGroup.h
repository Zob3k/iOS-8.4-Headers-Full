/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSProgress, NSMutableSet, _NSProgressFraction;

@interface _NSProgressGroup : NSObject {

	NSProgress* _parent;
	long long _portionOfParent;
	NSMutableSet* _children;
	_NSProgressFraction* _childrenFraction;
	unsigned long long _finishedChildrenCount;
	char _closed;

}
-(void)prioritize;
-(id)_indentedDescription:(unsigned)arg1 ;
-(id)initWithParent:(id)arg1 portion:(long long)arg2 ;
-(void)updateChildWithOldFraction:(id)arg1 newFraction:(id)arg2 ;
-(void)stopNotifications;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(void)close;
-(void)pause;
-(void)addChild:(id)arg1 ;
-(id)parent;
@end
