/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CoreRCInterfaceListener;

@interface CoreRCInterface : NSObject {

	CoreRCInterfaceListener* _listener;
	id _testProperty;

}

@property (assign,nonatomic) CoreRCInterfaceListener * listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,copy) id testProperty;                                   //@synthesize testProperty=_testProperty - In the implementation block
-(void)dealloc;
-(CoreRCInterfaceListener *)listener;
-(void)setListener:(CoreRCInterfaceListener *)arg1 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)propertyForKey:(id)arg1 error:(id*)arg2 ;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleFromDispatchQueue:(id)arg1 ;
-(char)doesNotImplement:(SEL)arg1 error:(id*)arg2 ;
-(void)setTestProperty:(id)arg1 ;
-(id)testProperty;
@end

