/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDDataObserver <NSObject>
@optional
-(void)samplesJournaled:(id)arg1 type:(id)arg2;
-(void)samplesOfTypeWereRemoved:(id)arg1;

@required
-(void)samplesAdded:(id)arg1 anchor:(id)arg2;

@end

