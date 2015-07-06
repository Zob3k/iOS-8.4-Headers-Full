/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PASerializable.h>

@class NSMutableDictionary, NSString, NSArray;

@interface PASample : NSObject <PASerializable> {

	NSMutableDictionary* _tasks;
	double _machTimestamp;
	double _wallTimestamp;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double machTimestamp;                          //@synthesize machTimestamp=_machTimestamp - In the implementation block
@property (readonly) double wallTimestamp;                          //@synthesize wallTimestamp=_wallTimestamp - In the implementation block
@property (readonly) NSArray * sampleTasks; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)dealloc;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(NSMutableDictionary*)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithStackshot:(id)arg1 ;
-(double)machTimestamp;
-(double)wallTimestamp;
-(id)_initWithSerializedData:(const SCD_Struct_PA11*)arg1 ;
-(NSArray *)sampleTasks;
-(id)sampleTaskForPid:(int)arg1 ;
-(void)addSampleTask:(id)arg1 ;
@end
