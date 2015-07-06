/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/ATMessageLinkListener.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface ATLockdownListener : ATMessageLinkListener {

	NSObject*<OS_xpc_object> _connection;
	NSString* _serviceName;

}

@property (nonatomic,copy) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
-(void)stop;
-(char)start;
-(id)initWithServiceName:(id)arg1 ;
-(void)_handleNewConnection:(id)arg1 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
@end
