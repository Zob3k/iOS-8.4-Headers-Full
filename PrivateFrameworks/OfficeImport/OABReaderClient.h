/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OABReaderClient
@required
+(char)tablesAreAllowed;
+(void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+(void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+(void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+(char)escherIsFullySupported;

@end
