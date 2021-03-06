/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DADataclassLockWatcher;
@interface DAWaiterWrapper : NSObject {

	id<DADataclassLockWatcher> _waiter;
	int _dataclasses;
	/*^block*/id _completionHandler;
	int _waiterNum;

}

@property (nonatomic,retain) id<DADataclassLockWatcher> waiter;              //@synthesize waiter=_waiter - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) int dataclasses;                                //@synthesize dataclasses=_dataclasses - In the implementation block
@property (nonatomic,readonly) int waiterNum;                                //@synthesize waiterNum=_waiterNum - In the implementation block
-(id)init;
-(id)description;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id<DADataclassLockWatcher>)waiter;
-(void)setWaiter:(id<DADataclassLockWatcher>)arg1 ;
-(int)waiterNum;
-(int)dataclasses;
-(void)setDataclasses:(int)arg1 ;
@end

