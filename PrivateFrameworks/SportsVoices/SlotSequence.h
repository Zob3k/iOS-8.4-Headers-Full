/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsVoices/Slot.h>

@class NSMutableArray;

@interface SlotSequence : Slot {

	NSMutableArray* _slots;

}

@property (retain) NSMutableArray * slots;              //@synthesize slots=_slots - In the implementation block
+(id)emptySlotSequence;
+(id)slotSequenceWithArray:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(id)initWithArray:(id)arg1 ;
-(id)first;
-(id)initFromPlist:(id)arg1 ;
-(id)overlayedOn:(id)arg1 ;
-(NSMutableArray *)slots;
-(id)indicesOfOccurrencesInTarget:(id)arg1 ;
-(id)occurrenceOfSequence:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)portionPrecedingOccurrenceOfSequence:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)portionFollowingOccurrenceOfSequence:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)rest;
-(id)slotSubsequenceFromIndex:(unsigned)arg1 ;
-(id)subsequenceFromIndex:(unsigned)arg1 ;
-(void)setSlots:(NSMutableArray *)arg1 ;
-(char)matches:(id)arg1 ;
-(id)reversed;
-(char)empty;
@end
