/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSManagedObjectID.h>

@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {

	int _cd_rc;
	int _counter;
	NSEntityDescription* _entity;

}
+(id)_retain_1;
+(void)_release_1;
+(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(void)_storeDeallocated;
+(id)initWithEntity:(id)arg1 ;
+(unsigned)allocateBatch:(id*)arg1 forEntity:(id)arg2 count:(unsigned)arg3 ;
+(Class)classForStore:(id)arg1 ;
+(char)accessInstanceVariablesDirectly;
+(id)retain;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(int)version;
+(id)alloc;
+(void)release;
-(id)persistentStore;
-(id)_retainedURIString;
-(id)_referenceData;
-(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
-(void)_setPersistentStore:(id)arg1 ;
-(id)_storeIdentifier;
-(char)_isPersistentStoreAlive;
-(id)initWithEntity:(id)arg1 ;
-(id)retain;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)retainCount;
-(unsigned)hash;
-(id)entity;
-(char)isTemporaryID;
-(id)URIRepresentation;
-(oneway void)release;
-(void)finalize;
@end

