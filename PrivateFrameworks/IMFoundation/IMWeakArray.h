/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableArray;

@interface IMWeakArray : NSObject {

	NSMutableArray* _weakArray;

}
-(unsigned)countByEnumeratingWithState:(SCD_Struct_IM9*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(void)removeObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)description;
-(id)copyMutableArray;
-(void)addObjectIfNotIdenticalObjectExists:(id)arg1 ;
-(id)copyMutableSet;
@end
