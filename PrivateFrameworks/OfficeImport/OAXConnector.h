/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXConnector : NSObject
+(void)readConnectionFromParent:(xmlNode*)arg1 nodeName:(const char*)arg2 connection:(id)arg3 drawingState:(id)arg4 ;
+(void)readNonVisualConnectorProperties:(xmlNode*)arg1 inNamespace:(id)arg2 connectorProperties:(id)arg3 drawingState:(id)arg4 ;
+(id)readFromXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 drawingState:(id)arg3 ;
@end
