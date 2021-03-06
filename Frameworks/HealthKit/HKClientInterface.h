/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HKClientInterface <NSObject>
@required
-(void)deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned)arg2 finished:(char)arg3 withError:(id)arg4;
-(void)deliverSessionHealthServiceStatus:(int)arg1 toClient:(unsigned)arg2 finished:(char)arg3 withError:(id)arg4;
-(void)presentAuthorizationWithSessionIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deliverBluetoothStatus:(int)arg1 withError:(id)arg2;
-(void)deliverSessionTransitoryData:(id)arg1 toClient:(unsigned)arg2 withError:(id)arg3;
-(void)deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned)arg3 withError:(id)arg4;
-(void)unitPreferencesDidUpdate;

@end

