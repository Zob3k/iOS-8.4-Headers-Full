/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HMDCharacteristic;

@interface HMDCharacteristicRequest : NSObject {

	HMDCharacteristic* _characteristic;

}

@property (nonatomic,readonly) HMDCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
+(id)requestWithCharacteristic:(id)arg1 ;
-(HMDCharacteristic *)characteristic;
-(id)initWithCharacteristic:(id)arg1 ;
@end
