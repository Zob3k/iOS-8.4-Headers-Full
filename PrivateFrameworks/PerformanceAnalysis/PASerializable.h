/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PASerializable <NSObject>
@required
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;
-(void)addSelfToSerializationDictionary:(NSMutableDictionary*)arg1;
-(unsigned long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(NSMutableDictionary*)arg2;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(NSMutableDictionary*)arg2 andDataBufferDictionary:(NSMutableDictionary*)arg3;

@end

