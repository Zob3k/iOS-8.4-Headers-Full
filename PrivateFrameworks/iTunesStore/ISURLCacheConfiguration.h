/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/NSCopying.h>

@class NSString;

@interface ISURLCacheConfiguration : NSObject <NSCopying> {

	unsigned _diskCapacity;
	unsigned _memoryCapacity;
	NSString* _persistentIdentifier;

}

@property (assign,nonatomic) unsigned diskCapacity;                      //@synthesize diskCapacity=_diskCapacity - In the implementation block
@property (assign,nonatomic) unsigned memoryCapacity;                    //@synthesize memoryCapacity=_memoryCapacity - In the implementation block
@property (nonatomic,copy) NSString * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
-(unsigned)memoryCapacity;
-(unsigned)diskCapacity;
-(void)setMemoryCapacity:(unsigned)arg1 ;
-(void)setDiskCapacity:(unsigned)arg1 ;
-(NSString *)persistentIdentifier;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
@end

