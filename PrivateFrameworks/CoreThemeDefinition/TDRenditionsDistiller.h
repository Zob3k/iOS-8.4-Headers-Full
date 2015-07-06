/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CoreThemeDocument, NSMutableArray, NSConditionLock, TDLogger;

@interface TDRenditionsDistiller : NSObject {

	CoreThemeDocument* document;
	NSMutableArray* renditionInQueue;
	NSMutableArray* psiDataInfoOutQueue;
	NSConditionLock* inQueueLock;
	NSConditionLock* outQueueLock;
	char shouldCompressCSIDataFlag;
	char noMoreCSIDataInfo;
	char noMoreRenditions;
	TDLogger* _logger;

}

@property (retain) TDLogger * logger;              //@synthesize logger=_logger - In the implementation block
-(void)dealloc;
-(id)initWithDocument:(id)arg1 shouldCompressCSIDataFlag:(char)arg2 ;
-(void)detachDistillationThread;
-(void)enqueueAbortFlag;
-(void)enqueueRenditionSpec:(id)arg1 ;
-(void)enqueueLastRenditionFlag;
-(id)nextCSIDataInfoFromQueue;
-(void)_distill:(id)arg1 ;
-(void)_enqueueOnQueue:(id)arg1 withQueueLock:(id)arg2 object:(id)arg3 ;
-(void)_enqueueOnOutQueueTheObject:(id)arg1 ;
-(id)_nextObjectFromInQueue;
-(void)_enqueueDistillingAbortedInfo;
-(void)_enqueueCSIDataInfo:(id)arg1 ;
-(void)_enqueueLastCSIDataInfoFlag;
-(void)_enqueueOnInQueueTheObject:(id)arg1 ;
-(TDLogger *)logger;
-(void)setLogger:(TDLogger *)arg1 ;
@end
