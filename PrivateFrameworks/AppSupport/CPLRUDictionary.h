/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject {

	CFDictionaryRef _dictionary;
	unsigned _maxCount;
	CPLRUDictionaryNode* _head;
	CPLRUDictionaryNode* _tail;

}
+(id)dictionaryWithMaximumCapacity:(unsigned)arg1 ;
-(id)allKeys;
-(void)dealloc;
-(unsigned)count;
-(void)removeAllObjects;
-(id)description;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithMaximumCapacity:(unsigned)arg1 ;
-(void)_removeNodeFromLinkedList:(id)arg1 ;
-(void)_addNodeToFront:(id)arg1 ;
-(void)_removeNode:(id)arg1 ;
-(void)_moveNodeToFront:(id)arg1 ;
-(unsigned)linkedListCount;
-(id)allKeysInLRUOrder;
-(id)allValuesInLRUOrder;
-(id)objectForKeyWithoutAffectingLRU:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
