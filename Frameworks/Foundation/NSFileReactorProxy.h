/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSFileAccessNode;

@interface NSFileReactorProxy : NSObject {

	NSObject*<OS_xpc_object> _client;
	id _reactorID;
	/*^block*/id _messageSender;
	NSFileAccessNode* _itemLocation;

}
-(id)itemLocation;
-(void)setItemLocation:(id)arg1 ;
-(id)reactorID;
-(/*^block*/id)messageSender;
-(id)initWithClient:(id)arg1 reactorID:(id)arg2 messageSender:(/*^block*/id)arg3 ;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)client;
-(void)finalize;
@end
