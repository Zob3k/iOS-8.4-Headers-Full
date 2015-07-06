/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <AssistantUI/NSFastEnumeration.h>

@protocol AFUIQueueDelegate;
@class NSMutableArray;

@interface AFUIQueue : NSObject <NSFastEnumeration> {

	id<AFUIQueueDelegate> _delegate;
	NSMutableArray* _objects;

}

@property (nonatomic,readonly) id frontObject; 
@property (nonatomic,readonly) int count; 
@property (assign,nonatomic,__weak) id<AFUIQueueDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=_objects,nonatomic,readonly) NSMutableArray * objects;              //@synthesize objects=_objects - In the implementation block
-(unsigned)countByEnumeratingWithState:(SCD_Struct_AF0*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)setDelegate:(id<AFUIQueueDelegate>)arg1 ;
-(int)count;
-(id)objectAtIndex:(int)arg1 ;
-(id)init;
-(id)description;
-(id<AFUIQueueDelegate>)delegate;
-(id)_objects;
-(id)frontObject;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObject;
-(id)dequeueAllObjects;
-(void)enqueueObjects:(id)arg1 ;
@end
