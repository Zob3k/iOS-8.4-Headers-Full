/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString, MFWeakReferenceHolder, MFSQLiteConnectionPool;

@interface MFSQLiteConnection : NSObject {

	NSString* _path;
	sqlite3Ref _db;
	MFWeakReferenceHolder* _poolHolder;
	NSString* _databaseName;
	CFDictionaryRef _statementCache;
	void* _ICUSearchContext;
	void* _CPSearchContext;
	int _transactionType;
	unsigned _transactionCount;

}

@property (assign,nonatomic,__weak) MFSQLiteConnectionPool * pool; 
@property (nonatomic,readonly) sqlite3Ref db;                                   //@synthesize db=_db - In the implementation block
-(int)rollbackTransaction;
-(void)dealloc;
-(void)flush;
-(int)commitTransaction;
-(void)close;
-(sqlite3Ref)db;
-(int)open;
-(int)beginTransaction;
-(int)beginTransactionWithType:(int)arg1 ;
-(MFSQLiteConnectionPool *)pool;
-(sqlite3_stmtRef)preparedStatementForPattern:(id)arg1 ;
-(const char*)_vfsModuleName;
-(id)initWithPath:(id)arg1 databaseName:(id)arg2 ;
-(char)isOpen;
-(void)setPool:(MFSQLiteConnectionPool *)arg1 ;
@end
