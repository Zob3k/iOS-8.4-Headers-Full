/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMapTable.h>

@interface NSClassicMapTable : NSMapTable {

	SCD_Struct_NS42* _keyCallBacks;
	SCD_Struct_NS43* _valueCallBacks;
	CFBasicHashRef _ht;

}
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(char)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(unsigned)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(void)removeAllItems;
-(id)allKeys;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(id)copy;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allValues;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
