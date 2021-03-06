/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OITSUProgressStage, NSDate;

@interface OITSUProgressContext : NSObject {

	OITSUProgressStage* m_currentStage;
	NSDate* m_lastReportTime;
	double m_lastProgressReport;
	double m_lastOverallProgress;

}
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)setProgress:(double)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 ;
-(id)currentStage;
-(void)advanceProgress:(double)arg1 ;
-(double)currentPosition;
-(id)addProgressObserverBlock:(/*^block*/id)arg1 ;
-(void)createStageWithSteps:(double)arg1 ;
-(void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1 ;
-(void)endStage;
-(void)setPercentageProgressFromTCProgressContext:(double)arg1 ;
-(void)reportProgress:(double)arg1 overallProgress:(double)arg2 ;
-(void)removeProgressObserver:(id)arg1 ;
-(double)overallProgress;
-(void)addProgressObserver:(id)arg1 selector:(SEL)arg2 ;
@end

