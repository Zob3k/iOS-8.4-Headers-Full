/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MIME/MIME-Structs.h>
@class NSLock;

@interface MFMessageStoreObjectCache : NSObject {

	NSLock* _lock;
	long _capacity;
	CFDictionaryRef _cache;
	/*^block*/id _keyGenerator;
	/*^block*/id _comparator;

}

@property (nonatomic,copy) id keyGenerator;              //@synthesize keyGenerator=_keyGenerator - In the implementation block
@property (nonatomic,copy) id comparator;                //@synthesize comparator=_comparator - In the implementation block
-(id)comparator;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)flush;
-(id)initWithCapacity:(unsigned)arg1 ;
-(void)_nts_evictObject;
-(void)_nts_setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forMessage:(id)arg2 kind:(int)arg3 ;
-(id)addObject:(id)arg1 forMessage:(id)arg2 kind:(int)arg3 ;
-(id)objectForMessage:(id)arg1 kind:(int)arg2 ;
-(id)keyGenerator;
-(void)setKeyGenerator:(id)arg1 ;
-(void)setComparator:(id)arg1 ;
@end

