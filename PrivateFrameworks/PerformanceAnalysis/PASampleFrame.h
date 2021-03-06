/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PASerializable.h>

@class NSMutableSet, NSString, NSSet;

@interface PASampleFrame : NSObject <PASerializable> {

	PASampleFrame* _parentFrame;
	NSMutableSet* _childFrames;
	unsigned long long _address;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long address;                             //@synthesize address=_address - In the implementation block
@property (readonly) unsigned long long symbolicationAddress; 
@property (readonly) char isKernel; 
@property (readonly) char isRootFrame; 
@property (readonly) PASampleFrame * parentFrame;                          //@synthesize parentFrame=_parentFrame - In the implementation block
@property (readonly) NSSet * childFrames;                                  //@synthesize childFrames=_childFrames - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(id)_newSampleFrameFromSerializedSampleFrame:(const SCD_Struct_PA10*)arg1 ;
+(id)addStack:(id)arg1 toSetOfRootFrames:(id)arg2 ;
+(id)newSampleFrameWithStackFrame:(pa_stack_frame*)arg1 andParent:(id)arg2 ;
-(unsigned long long)address;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSSet *)childFrames;
-(void)setAddress:(unsigned long long)arg1 ;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(NSMutableDictionary*)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(NSMutableDictionary*)arg2 andDataBufferDictionary:(NSMutableDictionary*)arg3 ;
-(char)isKernel;
-(id)_initWithSerializedSampleFrame:(const SCD_Struct_PA10*)arg1 ;
-(unsigned long long)symbolicationAddress;
-(id)initWithStackFrame:(pa_stack_frame*)arg1 andParent:(id)arg2 ;
-(id)initWithSampleFrame:(id)arg1 andParent:(id)arg2 ;
-(id)copyWithNewParent:(id)arg1 ;
-(void)_addChildFrame:(id)arg1 ;
-(void)querySymbolInformationForSelfAndChildrenUsingTask:(id)arg1 andKernelTask:(id)arg2 andSampleTimeSeriesDataStore:(id)arg3 ;
-(char)isRootFrame;
-(char)correspondsToStackshotFrame:(pa_stack_frame*)arg1 ;
-(PASampleFrame *)parentFrame;
@end

