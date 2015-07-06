/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:59 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/NSCopying.h>

@class SBAppSwitcherPeopleContactItem;

@interface SBScrollViewItemWrapper : NSObject <NSCopying> {

	unsigned _section;
	SBAppSwitcherPeopleContactItem* _item;
	unsigned _itemIndex;

}

@property (nonatomic,readonly) unsigned section;                                   //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) unsigned itemIndex;                                 //@synthesize itemIndex=_itemIndex - In the implementation block
@property (nonatomic,readonly) SBAppSwitcherPeopleContactItem * item;              //@synthesize item=_item - In the implementation block
-(id)initWithSection:(unsigned)arg1 itemIndex:(unsigned)arg2 item:(id)arg3 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)section;
-(SBAppSwitcherPeopleContactItem *)item;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)itemIndex;
@end
