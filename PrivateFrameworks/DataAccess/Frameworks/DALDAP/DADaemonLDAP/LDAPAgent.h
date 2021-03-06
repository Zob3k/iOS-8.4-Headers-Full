/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DADaemonLDAP.bundle/DADaemonLDAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DAAgent.h>
#import <DADaemonLDAP/DAValidityCheckConsumer.h>

@class NSString;

@interface LDAPAgent : DAAgent <DAValidityCheckConsumer>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startMonitoring;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)account:(id)arg1 isValid:(char)arg2 validationError:(id)arg3 ;
-(void)_invokeCompletionBlock:(/*^block*/id)arg1 ;
@end

