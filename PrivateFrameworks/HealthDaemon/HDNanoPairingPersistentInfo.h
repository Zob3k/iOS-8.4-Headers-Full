/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDHealthDaemon;
@class NSUUID, NSString, NSDate;

@interface HDNanoPairingPersistentInfo : NSObject {

	char _activationFinished;
	NSUUID* _registryPairingUUID;
	NSUUID* _persistentPairingUUID;
	NSUUID* _healthPairingUUID;
	NSString* _pairedStoragePath;
	NSDate* _lastActivationAttempt;
	id<HDHealthDaemon> _healthDaemon;

}

@property (nonatomic,readonly) NSUUID * registryPairingUUID;                                     //@synthesize registryPairingUUID=_registryPairingUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * persistentPairingUUID;                                   //@synthesize persistentPairingUUID=_persistentPairingUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * healthPairingUUID;                                       //@synthesize healthPairingUUID=_healthPairingUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pairedStoragePath;                                //@synthesize pairedStoragePath=_pairedStoragePath - In the implementation block
@property (nonatomic,readonly) NSDate * lastActivationAttempt;                                   //@synthesize lastActivationAttempt=_lastActivationAttempt - In the implementation block
@property (getter=isActivationFinished,nonatomic,readonly) char activationFinished;              //@synthesize activationFinished=_activationFinished - In the implementation block
@property (assign,nonatomic,__weak) id<HDHealthDaemon> healthDaemon;                             //@synthesize healthDaemon=_healthDaemon - In the implementation block
+(id)nanoPairingPersistentInfoWithHealthDaemon:(id)arg1 ;
+(id)_activePairingValuesWithHealthDaemon:(id)arg1 error:(id*)arg2 ;
-(NSUUID *)registryPairingUUID;
-(NSUUID *)persistentPairingUUID;
-(NSUUID *)healthPairingUUID;
-(char)isActivationFinished;
-(void)resetWithRegistryPairingUUID:(id)arg1 persistentPairingUUID:(id)arg2 pairedStoragePath:(id)arg3 ;
-(void)setActivationFinished:(char)arg1 ;
-(void)setPersistentPairingUUID:(id)arg1 healthPairingUUID:(id)arg2 lastActivationAttempt:(id)arg3 ;
-(id<HDHealthDaemon>)healthDaemon;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(void)_persistValues;
-(NSString *)pairedStoragePath;
-(NSDate *)lastActivationAttempt;
@end
