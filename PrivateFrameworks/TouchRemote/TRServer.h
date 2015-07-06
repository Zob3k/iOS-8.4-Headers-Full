/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/NSNetServiceDelegate.h>

@protocol OS_tcp_listener, OS_dispatch_queue, TRServerDelegate;
@class TRAdvertisingInfo, NSObject, NSNetService, NSString;

@interface TRServer : NSObject <NSNetServiceDelegate> {

	TRAdvertisingInfo* _advertisingInfo;
	NSObject*<OS_tcp_listener> _listener;
	NSObject*<OS_dispatch_queue> _listenerQueue;
	NSNetService* _netService;
	unsigned short _port;
	id<TRServerDelegate> _delegate;
	NSString* _name;

}

@property (nonatomic,copy) TRAdvertisingInfo * advertisingInfo;                 //@synthesize advertisingInfo=_advertisingInfo - In the implementation block
@property (assign,nonatomic,__weak) id<TRServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned short port;                             //@synthesize port=_port - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newServerWithName:(id)arg1 port:(unsigned short)arg2 ;
+(id)newServerWithName:(id)arg1 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<TRServerDelegate>)arg1 ;
-(id<TRServerDelegate>)delegate;
-(NSString *)name;
-(void)stop;
-(void)start;
-(unsigned short)port;
-(TRAdvertisingInfo *)advertisingInfo;
-(id)_initWithName:(id)arg1 port:(unsigned short)arg2 ;
-(void)setAdvertisingInfo:(TRAdvertisingInfo *)arg1 ;
@end
