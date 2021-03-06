/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/SpringBoardPlugins/StoreServicesPlugin.servicebundle/StoreServicesPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol OS_xpc_object, SSVSBCFUserNotificationDelegate;
@class UIAlertView, NSObject, NSString;

@interface SSVSBCFUserNotification : NSObject <UIAlertViewDelegate> {

	UIAlertView* _alertView;
	NSObject*<OS_xpc_object> _connection;
	id<SSVSBCFUserNotificationDelegate> _delegate;
	NSObject*<OS_xpc_object> _message;

}

@property (assign,nonatomic,__weak) id<SSVSBCFUserNotificationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)show;
-(void)dealloc;
-(void)setDelegate:(id<SSVSBCFUserNotificationDelegate>)arg1 ;
-(id<SSVSBCFUserNotificationDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)_configureAlertView:(id)arg1 withNotificationDictionary:(id)arg2 optionFlags:(unsigned long)arg3 ;
-(id)initWithMessage:(id)arg1 connection:(id)arg2 ;
@end

