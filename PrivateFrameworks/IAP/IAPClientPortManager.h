/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/IAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSMutableDictionary, NSObject;

@interface IAPClientPortManager : NSObject {

	NSMutableDictionary* _portList;
	NSObject*<OS_dispatch_queue> _portListQueue;
	char _iaptransportdIsRunning;
	NSObject*<OS_xpc_object> _iaptransportdXPCConnection;

}

@property (assign,nonatomic) char iaptransportdIsRunning; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)sendData:(id)arg1 data:(char*)arg2 length:(unsigned short)arg3 ;
-(int)unregisterSendDataHandler:(id)arg1 ;
-(char)iaptransportdIsRunning;
-(void)setIaptransportdIsRunning:(char)arg1 ;
-(int)registerSendDataHandler:(id)arg1 queue:(id)arg2 sendBlock:(/*^block*/id)arg3 ;
-(int)forwardAccessoryDataToIAP:(id)arg1 data:(const char*)arg2 length:(unsigned short)arg3 ;
-(void)reRegisterHandlers;
@end

