/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABOle : NSObject
+(id)stringForCLSID:(SsrwOO_GUID)arg1 ;
+(char)isBiffCLSID:(id)arg1 ;
+(id)readCLSIDFromStream:(SsrwOOStream*)arg1 ;
+(id)readAnsiStringFromStream:(SsrwOOStream*)arg1 ;
+(id)read4ByteFromStream:(SsrwOOStream*)arg1 ;
+(id)readUnicodeStringFromStream:(SsrwOOStream*)arg1 ;
+(id)readFromData:(id)arg1 cancel:(id)arg2 ;
+(char)readSharedInfoFor:(id)arg1 fromStorage:(SsrwOOStorage*)arg2 ;
+(char)isChart:(id)arg1 ;
+(id)readFromParentStorage:(SsrwOOStorage*)arg1 storageName:(id)arg2 cancel:(id)arg3 ;
+(id)readCompressedFromStream:(SsrwOOStream*)arg1 compressedSize:(unsigned long)arg2 uncompressedSize:(unsigned long)arg3 cancel:(id)arg4 ;
+(id)readFromStream:(SsrwOOStream*)arg1 size:(unsigned long)arg2 cancel:(id)arg3 ;
@end
