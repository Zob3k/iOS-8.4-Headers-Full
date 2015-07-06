/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXBlipEffects : NSObject
+(id)readLuminanceEffect:(xmlNode*)arg1 ;
+(id)readGrayscaleEffect:(xmlNode*)arg1 ;
+(id)readBiLevelEffect:(xmlNode*)arg1 ;
+(id)readColorChangeEffect:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readAlphaModFixEffect:(xmlNode*)arg1 ;
+(id)readDuotoneEffect:(xmlNode*)arg1 ;
+(void)writeAlphaModFixEffect:(id)arg1 to:(id)arg2 ;
+(void)writeBiLevelEffect:(id)arg1 to:(id)arg2 ;
+(void)writeColorChangeEffect:(id)arg1 to:(id)arg2 ;
+(void)writeDuotoneEffect:(id)arg1 to:(id)arg2 ;
+(void)writeGrayscaleEffect:(id)arg1 to:(id)arg2 ;
+(void)writeLuminanceEffect:(id)arg1 to:(id)arg2 ;
+(void)readBlipEffectsFromBlipRef:(xmlNode*)arg1 toBlipRef:(id)arg2 drawingState:(id)arg3 ;
+(void)writeBlipEffects:(id)arg1 to:(id)arg2 ;
+(id)duotoneTransferModeEnumMap;
@end
