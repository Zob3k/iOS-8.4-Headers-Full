/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MessageConsumer.h>
#import <Message/QueryProgressMonitor.h>

@class NSMutableArray, MFActivityMonitor;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor> {

	NSMutableArray* _messages;
	MFActivityMonitor* _monitor;
	/*^block*/id _transmogrifier;

}

@property (nonatomic,copy) id transmogrifier;              //@synthesize transmogrifier=_transmogrifier - In the implementation block
-(void)dealloc;
-(id)init;
-(char)shouldCancel;
-(void)newMessagesAvailable:(id)arg1 ;
-(id)messages;
-(id)copyMessages;
-(void)setTransmogrifier:(id)arg1 ;
-(id)transmogrifier;
@end

