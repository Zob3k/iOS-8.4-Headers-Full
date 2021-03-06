/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, SSPersistentCache, SSSQLiteDatabase;

@interface SSDatabaseCache : NSObject {

	unsigned _maximumInlineBlobSize;
	NSString* _identifier;
	NSString* _cacheName;
	NSString* _path;
	NSObject*<OS_dispatch_queue> _serialQueue;
	SSPersistentCache* _persistentCache;
	SSSQLiteDatabase* _database;
	Class _cacheEntryClass;

}

@property (assign,nonatomic) unsigned maximumInlineBlobSize;              //@synthesize maximumInlineBlobSize=_maximumInlineBlobSize - In the implementation block
-(void)dealloc;
-(id)description;
-(void)clear;
-(id)statistics;
-(id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 ;
-(char)_setupDatabase;
-(id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 database:(id)arg3 cacheEntryClass:(Class)arg4 ;
-(id)cacheEntryForLookupKey:(id)arg1 ;
-(unsigned)maximumInlineBlobSize;
-(void)clearCacheForLookupKey:(id)arg1 ;
-(int)clearRetiredData;
-(id)setData:(id)arg1 expiring:(double)arg2 retiring:(double)arg3 lookupKey:(id)arg4 userInfo:(id)arg5 ;
-(id)cacheEntryProperties:(id)arg1 forLookupKeys:(id)arg2 ;
-(void)setMaximumInlineBlobSize:(unsigned)arg1 ;
@end

