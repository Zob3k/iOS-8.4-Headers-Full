/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWSynchronizerNode : BWNode {

	OpaqueCMClockRef _sourceClock;
	OpaqueCMClockRef _masterClock;
	SCD_Struct_BW65 _ptsSyncHistory[16];
	int _oldestPTSSyncHistoryElement;
	int _newestPTSSyncHistoryElement;

}
+(void)initialize;
-(OpaqueCMClockRef)masterClock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(void)dealloc;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)initWithMediaType:(unsigned long)arg1 ;
-(void)setSourceClock:(OpaqueCMClockRef)arg1 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)_updatePTSSyncHistoryWithSourceTime:(SCD_Struct_BW2)arg1 syncedTime:(SCD_Struct_BW2)arg2 ;
-(void)_synchronizeDetectedFaces:(id)arg1 metadata:(id)arg2 timescale:(int)arg3 ;
-(SCD_Struct_BW2)_getSyncedTimeForSourceTime:(SCD_Struct_BW2)arg1 ;
-(OpaqueCMClockRef)sourceClock;
@end

