/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@class PASampleAggregator, NSMutableDictionary, PASampleTimeSeriesDataStore;

@interface PAAggregatedTask : NSObject {

	PASampleAggregator* _aggregator;
	NSMutableDictionary* _binaryImages;

}

@property (readonly) PASampleTimeSeriesDataStore * sampleStore; 
-(void)dealloc;
-(int)compare:(id)arg1 ;
-(PASampleTimeSeriesDataStore *)sampleStore;
-(void)printToStream:(_sFILE*)arg1 ;
-(void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned)arg2 ;
-(id)aggregator;
-(unsigned long long)displayedBaseAddressForBinaryImage:(id)arg1 ;
-(unsigned long long)displayedBaseAddressForBinaryImage:(id)arg1 andUpdateIfLower:(char)arg2 ;
-(id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned)arg3 ;
-(id)copyDescriptionForDisplayAddress:(unsigned long long)arg1 withSymbolicationAddress:(unsigned long long)arg2 inSymbolHandle:(id)arg3 displayFrameAddress:(char)arg4 ;
-(void)updateBinaryLocationIfLower:(id)arg1 ;
-(void)printBinaryImagesToStream:(_sFILE*)arg1 ;
@end
