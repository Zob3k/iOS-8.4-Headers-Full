/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GenerationalStorage/GenerationalStorage-Structs.h>
#import <Foundation/NSProxy.h>
#import <GenerationalStorage/GSProtocol.h>

@protocol GSProtocol, OS_dispatch_group;
@class NSObject, NSError;

@interface GSDaemonProxySync : NSProxy <GSProtocol> {

	NSObject*<GSProtocol> _proxy;
	NSObject*<OS_dispatch_group> _group;
	NSError* _error;
	id _result;
	int _recursive;

}

@property (nonatomic,retain) id result;                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)proxy;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)result;
-(NSError *)error;
-(id)initWithXPCObject:(id)arg1 ;
-(void)setResult:(id)arg1 ;
-(void)handleObjResult:(id)arg1 error:(id)arg2 ;
-(void)handleBoolResult:(char)arg1 error:(id)arg2 ;
-(id)waitForResultWithError:(id*)arg1 ;
-(id)waitForResultWithCFError:(_CFError*)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)finalize;
@end

