/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSMutableDictionary, NSDictionary;

@interface NSFileAttributes : NSDictionary {

	NSMutableDictionary* dict;
	stat statInfo;
	SCD_Struct_NS27 catInfo;
	NSDictionary* extendedAttrs;
	int fileProtectionClass;

}
+(id)_attributesAtPath:(id)arg1 partialReturn:(char)arg2 filterResourceFork:(char)arg3 error:(id*)arg4 ;
+(id)attributesWithStat:(stat*)arg1 ;
+(id)attributesAtPath:(id)arg1 traverseLink:(char)arg2 ;
+(id)_attributesAtURL:(id)arg1 partialReturn:(char)arg2 filterResourceFork:(char)arg3 error:(id*)arg4 ;
-(unsigned)fileOwnerAccountNumber;
-(id)fileGroupOwnerAccountName;
-(unsigned)fileGroupOwnerAccountNumber;
-(int)fileSystemNumber;
-(unsigned)fileSystemFileNumber;
-(void)dealloc;
-(unsigned)count;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)keyEnumerator;
-(id)fileType;
-(id)fileModificationDate;
-(char)isDirectory;
-(id)fileOwnerAccountName;
-(unsigned)filePosixPermissions;
-(unsigned long long)fileSize;
-(id)objectForKey:(id)arg1 ;
@end

