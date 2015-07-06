/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libGestureServer.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIGestureRecognizerServerInterface <NSObject>
@required
-(void)ipc_setGestureRecognizerState:(int)arg1 forGestureRecognizersInContextId:(unsigned)arg2 withInitialTouchTimestamp:(double)arg3 lastTouchTimestamp:(double)arg4;
-(void)ipc_setGestureRecognizerState:(int)arg1 forGestureRecognizersInContextId:(unsigned)arg2 affectingContextId:(unsigned)arg3 withInitialTouchTimestamp:(double)arg4 lastTouchTimestamp:(double)arg5;
-(void)ipc_removeGestureRecognizerStateForContextId:(unsigned)arg1 withInitialTouchTimestamp:(double)arg2;
-(void)ipc_requestGestureRecognizerInstructionForContextID:(unsigned)arg1 withInitialTouchTimestamp:(double)arg2 reply:(/*^block*/id)arg3;

@end
