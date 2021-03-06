/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface NSCountedSet : NSMutableSet {

	id _table;
	void* _reserved;

}
+(char)supportsSecureCoding;
-(id)initWithSet:(id)arg1 copyItems:(char)arg2 ;
-(void)getObjects:(id*)arg1 count:(unsigned)arg2 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)objectEnumerator;
-(id)initWithArray:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(unsigned)countForObject:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
@end

