/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXShape3D : NSObject
+(id)readShape3DFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 drawingState:(id)arg3 ;
+(char)isEmpty:(id)arg1 ;
+(id)bevelTypeEnumMap;
+(id)readBevelFromXmlNode:(xmlNode*)arg1 ;
+(id)materialEnumMap;
+(void)writeBevel:(id)arg1 to:(id)arg2 ;
+(void)writeShape3D:(id)arg1 to:(id)arg2 ;
@end
