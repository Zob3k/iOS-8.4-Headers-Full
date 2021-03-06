/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSMutableArray, NSObject, NSString, NSURL, NSError;

@interface PQLConnection : NSObject {

	sqlite3Ref _db;
	int _suspendCaching;
	int _savePointLevel;
	int _skipBatchStop;
	int _vacuumTracker;
	NSMutableArray* _flushNotifications;
	NSObject*<OS_dispatch_source> _batchingTimer;
	double _batchingPeriod;
	int _batchingChangesLimit;
	int _batchingChangesCount;
	int _cacheSize;
	char _useBatching;
	char _batchStarted;
	char _useQueue;
	cache_sRef _preparedStatements;
	NSObject*<OS_dispatch_source> _stmtCacheSource;
	NSMutableArray* _stmtCacheCleanupQueue;
	char _traced;
	char _crashIfUsedAfterClose;
	NSString* _label;
	NSURL* _url;
	/*^block*/id _lockedHandler;
	/*^block*/id _autoRollbackHandler;
	/*^block*/id _sqliteErrorHandler;
	/*^block*/id _preFlushHook;
	/*^block*/id _postFlushHook;
	/*^block*/id _profilingHook;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSError* _lastError;

}

@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,getter=isTraced,nonatomic) char traced;                             //@synthesize traced=_traced - In the implementation block
@property (assign,nonatomic) char crashIfUsedAfterClose;                              //@synthesize crashIfUsedAfterClose=_crashIfUsedAfterClose - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) sqlite3Ref dbHandle;                                   //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) char isInBatch; 
@property (nonatomic,readonly) char isInTransaction; 
@property (nonatomic,retain) NSError * lastError;                                     //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,readonly) long long lastInsertedRowID; 
@property (nonatomic,readonly) long long changes; 
@property (assign,nonatomic) unsigned long statementCacheMaxCount; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,copy) id lockedHandler;                                          //@synthesize lockedHandler=_lockedHandler - In the implementation block
@property (nonatomic,copy) id autoRollbackHandler;                                    //@synthesize autoRollbackHandler=_autoRollbackHandler - In the implementation block
@property (nonatomic,copy) id sqliteErrorHandler;                                     //@synthesize sqliteErrorHandler=_sqliteErrorHandler - In the implementation block
@property (nonatomic,copy) id preFlushHook;                                           //@synthesize preFlushHook=_preFlushHook - In the implementation block
@property (nonatomic,copy) id postFlushHook;                                          //@synthesize postFlushHook=_postFlushHook - In the implementation block
@property (nonatomic,copy) id profilingHook;                                          //@synthesize profilingHook=_profilingHook - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSURL *)url;
-(void)flush;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(char)groupInTransaction:(/*^block*/id)arg1 ;
-(void)setSqliteErrorHandler:(id)arg1 ;
-(void)setTraced:(char)arg1 ;
-(void)setCrashIfUsedAfterClose:(char)arg1 ;
-(void)setStatementCacheMaxCount:(unsigned long)arg1 ;
-(void)useSerialQueue;
-(long long)changes;
-(void)setProfilingHook:(id)arg1 ;
-(char)executeRaw:(id)arg1 ;
-(NSError *)lastError;
-(char)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id*)arg3 ;
-(char)execute:(id)arg1 ;
-(char)setupPragmas;
-(char)close:(id*)arg1 ;
-(char)registerFunction:(id)arg1 nArgs:(int)arg2 handler:(/*^block*/id)arg3 ;
-(id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2 ;
-(long long)lastInsertedRowID;
-(id)fetch:(id)arg1 ;
-(id)fetchObject:(/*^block*/id)arg1 sql:(id)arg2 ;
-(id)userVersion;
-(void)setPreFlushHook:(id)arg1 ;
-(void)setPostFlushHook:(id)arg1 ;
-(void)useBatchingWithDelay:(double)arg1 changeCount:(int)arg2 ;
-(char)performWithFlags:(unsigned)arg1 action:(/*^block*/id)arg2 ;
-(sqlite3Ref)dbHandle;
-(char)setUserVersion:(int)arg1 ;
-(char)backupToURL:(id)arg1 progress:(/*^block*/id)arg2 ;
-(void)groupInBatch:(/*^block*/id)arg1 ;
-(char)performWithFlags:(unsigned)arg1 action:(/*^block*/id)arg2 whenFlushed:(/*^block*/id)arg3 ;
-(void)setLastError:(NSError *)arg1 ;
-(void)forceBatchStart;
-(void)setLockedHandler:(id)arg1 ;
-(void)setAutoRollbackHandler:(id)arg1 ;
-(id)_description:(char)arg1 ;
-(void)_clearStatementCache;
-(void)_resetState;
-(void)_createCacheIfNeeded;
-(char)_execute:(id)arg1 mustSucceed:(char)arg2 bindings:(void*)arg3 ;
-(int)_vacuumMode;
-(void)_vacuumIfNeeded;
-(char)_performWithFlags:(unsigned)arg1 action:(/*^block*/id)arg2 whenFlushed:(/*^block*/id)arg3 ;
-(char)openAtURL:(id)arg1 sharedCache:(char)arg2 error:(id*)arg3 ;
-(char)destroyDatabaseWithError:(id*)arg1 ;
-(id)_newStatementForFormat:(id)arg1 arguments:(void*)arg2 ;
-(id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3 args:(void*)arg4 ;
-(unsigned long)statementCacheMaxCount;
-(void)_batchStartIfNeeded;
-(void)_batchStopIfNeeded;
-(void)_fireFlushNotifications;
-(char)isInBatch;
-(char)isInTransaction;
-(char)execute:(id)arg1 args:(void*)arg2 ;
-(id)fetch:(id)arg1 args:(void*)arg2 ;
-(id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3 ;
-(id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2 args:(void*)arg3 ;
-(id)fetchObject:(/*^block*/id)arg1 sql:(id)arg2 args:(void*)arg3 ;
-(id)lockedHandler;
-(id)autoRollbackHandler;
-(id)sqliteErrorHandler;
-(id)preFlushHook;
-(id)postFlushHook;
-(id)profilingHook;
-(char)isTraced;
-(char)crashIfUsedAfterClose;
@end

