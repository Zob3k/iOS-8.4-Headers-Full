/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SlotSequence, SimpleSlotSequence;

@interface SlotsInContext : NSObject {

	SlotSequence* _preContext;
	SlotSequence* _preContextReversed;
	SimpleSlotSequence* _significantSlots;
	SlotSequence* _postContext;

}

@property (readonly) SimpleSlotSequence * significantSlots;              //@synthesize significantSlots=_significantSlots - In the implementation block
+(id)instanceFromPlist:(id)arg1 ;
+(id)test;
+(id)slotsInContextWithSignificantSlotSequence:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initFromPlist:(id)arg1 ;
-(id)indicesOfOccurrencesInTarget:(id)arg1 ;
-(SimpleSlotSequence *)significantSlots;
-(id)initWithArraysForSignificantSlots:(id)arg1 preContext:(id)arg2 postContext:(id)arg3 ;
@end

