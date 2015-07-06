/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountSettings/ASRuntimeFixProtocol.h>

@class NSSet, NSString;

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol> {

	char _shouldNotifyMobileMail;
	NSSet* _supportedMailClasses;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2 ;
-(void)accountsHaveBeenSaved:(char)arg1 ;
-(id)supportedAccountTypes;
-(char)_cleanupAccountClass:(id)arg1 ;
@end
