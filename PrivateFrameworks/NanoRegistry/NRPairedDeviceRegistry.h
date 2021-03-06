/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoRegistry/NRPairedDeviceRegistryXPCFrameworkDelegate.h>
#import <NanoRegistry/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSUUID, NRFrameworkDevice, NSObject, NSXPCConnection, NSString;

@interface NRPairedDeviceRegistry : NSObject <NRPairedDeviceRegistryXPCFrameworkDelegate, NSXPCConnectionDelegate> {

	char _xpcConnectionInterrupted;
	char _xpcConnectionInvalidated;
	char _hasSomeEntitlements;
	unsigned short _compatibilityState;
	unsigned _status;
	NSMutableArray* _devicesBlocks;
	NSMutableDictionary* _mutableDeviceDictionary;
	NSUUID* _pairingDeviceID;
	NRFrameworkDevice* _pairingDevice;
	NRFrameworkDevice* _pairedDevice;
	NSObject*<OS_dispatch_queue> _pdrQueue;
	NSObject*<OS_dispatch_queue> _deviceQueue;
	NSObject*<OS_dispatch_queue> _connectQueue;
	NSObject*<OS_dispatch_queue> _reconnectQueue;
	NSMutableArray* _finishedPairingSemaphores;
	NSXPCConnection* _xpcConnection;
	NSUUID* _clientUUID;
	int _pairingCompatibilityVersion;
	unsigned _lastUnpairReason;
	double _reconnectDelay;

}

@property (nonatomic,readonly) unsigned status;                                          //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * devicesBlocks;                             //@synthesize devicesBlocks=_devicesBlocks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableDeviceDictionary;              //@synthesize mutableDeviceDictionary=_mutableDeviceDictionary - In the implementation block
@property (nonatomic,retain) NSUUID * pairingDeviceID;                                   //@synthesize pairingDeviceID=_pairingDeviceID - In the implementation block
@property (nonatomic,retain) NRFrameworkDevice * pairingDevice;                          //@synthesize pairingDevice=_pairingDevice - In the implementation block
@property (nonatomic,retain) NRFrameworkDevice * pairedDevice;                           //@synthesize pairedDevice=_pairedDevice - In the implementation block
@property (assign,nonatomic) double reconnectDelay;                                      //@synthesize reconnectDelay=_reconnectDelay - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pdrQueue;                      //@synthesize pdrQueue=_pdrQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> deviceQueue;                   //@synthesize deviceQueue=_deviceQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectQueue;                  //@synthesize connectQueue=_connectQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reconnectQueue;                //@synthesize reconnectQueue=_reconnectQueue - In the implementation block
@property (assign,nonatomic) char xpcConnectionInterrupted;                              //@synthesize xpcConnectionInterrupted=_xpcConnectionInterrupted - In the implementation block
@property (assign,nonatomic) char xpcConnectionInvalidated;                              //@synthesize xpcConnectionInvalidated=_xpcConnectionInvalidated - In the implementation block
@property (nonatomic,retain) NSMutableArray * finishedPairingSemaphores;                 //@synthesize finishedPairingSemaphores=_finishedPairingSemaphores - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                            //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) char hasSomeEntitlements;                                   //@synthesize hasSomeEntitlements=_hasSomeEntitlements - In the implementation block
@property (nonatomic,retain) NSUUID * clientUUID;                                        //@synthesize clientUUID=_clientUUID - In the implementation block
@property (assign,nonatomic) unsigned short compatibilityState;                          //@synthesize compatibilityState=_compatibilityState - In the implementation block
@property (assign,nonatomic) int pairingCompatibilityVersion;                            //@synthesize pairingCompatibilityVersion=_pairingCompatibilityVersion - In the implementation block
@property (assign,nonatomic) unsigned lastUnpairReason;                                  //@synthesize lastUnpairReason=_lastUnpairReason - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(unsigned)status;
-(NRFrameworkDevice *)pairedDevice;
-(void)setPairedDevice:(NRFrameworkDevice *)arg1 ;
-(id)getActivePairedDevice;
-(char)isPaired;
-(id)getAllDevices;
-(void)pairingStorePathPairingID:(/*^block*/id)arg1 ;
-(id)pairingID;
-(id)pairingStorePath;
-(void)_xpcInitializeConnection;
-(char)_xpcEnsureFrameworkInitialized;
-(void)notifyStatus;
-(void)_pairingStorePathPairingID:(/*^block*/id)arg1 ;
-(void)_xpcInterruptionHandler;
-(void)_xpcInvalidationHandler;
-(void)xpcSetValue:(id)arg1 forProperty:(id)arg2 deviceID:(id)arg3 ;
-(void)xpcDeviceDidPair:(id)arg1 deviceID:(id)arg2 ;
-(void)xpcDeviceIDDidFailToPair:(id)arg1 error:(id)arg2 ;
-(void)xpcDeviceDidUnpair:(id)arg1 deviceID:(id)arg2 ;
-(void)xpcCreateDevice:(id)arg1 deviceID:(id)arg2 ;
-(void)xpcDidBeginPairing:(id)arg1 deviceID:(id)arg2 ;
-(void)xpcStatusDidChange:(unsigned)arg1 ;
-(void)xpcDevice:(id)arg1 deviceID:(id)arg2 needsPasscode:(id)arg3 ;
-(void)xpcDeviceNeedsActivation:(id)arg1 deviceID:(id)arg2 ;
-(void)xpcHasNewOOBKey:(id)arg1 ;
-(void)xpcRemoteUnpairingDidBegin;
-(void)xpcCompatibilityStateDidChange:(unsigned short)arg1 withDevice:(id)arg2 andDeviceID:(id)arg3 ;
-(void)xpcDidReceiveBTPairingRequest:(id)arg1 deviceID:(id)arg2 ;
-(void)xpcLastUnpairReasonDidChange:(unsigned)arg1 ;
-(void)xpcAssertInClient:(id)arg1 ;
-(void)_xpcFrameworkInitializationSuccessWithStatus:(unsigned)arg1 andDevices:(id)arg2 andPairingDeviceID:(id)arg3 andPairingDevice:(id)arg4 hasEntitlements:(char)arg5 andCompatibilityState:(unsigned short)arg6 andCompatibilityVersion:(int)arg7 andLastUnpairReason:(unsigned)arg8 ;
-(void)sendDevicesUpdatedNotification;
-(NSMutableDictionary *)mutableDeviceDictionary;
-(void)getDevicesWithBlock:(/*^block*/id)arg1 ;
-(void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)companionPasscodePairWithDevice:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(void)notifyActivationCompleted:(id)arg1 withSuccess:(char)arg2 ;
-(void)notifyPasscode:(id)arg1 forDevice:(id)arg2 ;
-(void)notifyPairingShouldContinue;
-(void)unpairWithDevice:(id)arg1 shouldObliterate:(char)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2 ;
-(unsigned short)compatibilityState;
-(void)waitForPairingStorePathPairingID:(/*^block*/id)arg1 ;
-(void)abortPairing;
-(void)abortPairingWithReason:(id)arg1 ;
-(void)suspendPairingClientCrashMonitoring;
-(void)resumePairingClientCrashMonitoring;
-(unsigned)lastUnpairReason;
-(void)retriggerUnpairInfoDialog;
-(id)_recoveryDescription;
-(void)_triggerRecovery;
-(void)_setObliterationEnabled:(char)arg1 ;
-(void)_addRemoveRecoveryStepDisableDaemons:(char)arg1 ;
-(void)_addRemoveRecoveryStepBackup:(char)arg1 withPairingDeviceID:(id)arg2 ;
-(void)_addRemoveRecoveryStepDeleteAccounts:(char)arg1 ;
-(void)_addRemoveRecoveryStepIDSUnpairStart:(char)arg1 ;
-(void)_addRemoveRecoveryStepRemoteUnpair:(char)arg1 withAdvertisedName:(id)arg2 andPairedDeviceID:(id)arg3 ;
-(void)_addRemoveRecoveryStepDeletePairingStore:(char)arg1 withPairingDeviceID:(id)arg2 ;
-(void)_addRemoveRecoveryStepUnpairBluetooth:(char)arg1 withPairingDeviceID:(id)arg2 ;
-(void)_addRemoveRecoveryStepIDSUnpair:(char)arg1 withPairingDeviceID:(id)arg2 ;
-(void)_addRemoveRecoveryStepStockholmReset:(char)arg1 ;
-(void)_addRemoveRecoveryStepICloudDeletePaymentCards:(char)arg1 ;
-(void)_addRemoveRecoveryStepResetNVRAM:(char)arg1 ;
-(void)_addRemoveRecoveryStepObliterate:(char)arg1 withStatePath:(id)arg2 ;
-(void)_addRemoveRecoveryStepIDSFinalize:(char)arg1 ;
-(NSMutableArray *)devicesBlocks;
-(void)setDevicesBlocks:(NSMutableArray *)arg1 ;
-(void)setMutableDeviceDictionary:(NSMutableDictionary *)arg1 ;
-(NSUUID *)pairingDeviceID;
-(void)setPairingDeviceID:(NSUUID *)arg1 ;
-(NRFrameworkDevice *)pairingDevice;
-(void)setPairingDevice:(NRFrameworkDevice *)arg1 ;
-(double)reconnectDelay;
-(void)setReconnectDelay:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)pdrQueue;
-(void)setPdrQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)deviceQueue;
-(void)setDeviceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectQueue;
-(void)setConnectQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)reconnectQueue;
-(void)setReconnectQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)xpcConnectionInterrupted;
-(void)setXpcConnectionInterrupted:(char)arg1 ;
-(char)xpcConnectionInvalidated;
-(void)setXpcConnectionInvalidated:(char)arg1 ;
-(NSMutableArray *)finishedPairingSemaphores;
-(void)setFinishedPairingSemaphores:(NSMutableArray *)arg1 ;
-(char)hasSomeEntitlements;
-(void)setHasSomeEntitlements:(char)arg1 ;
-(NSUUID *)clientUUID;
-(void)setClientUUID:(NSUUID *)arg1 ;
-(void)setCompatibilityState:(unsigned short)arg1 ;
-(void)setPairingCompatibilityVersion:(int)arg1 ;
-(void)setLastUnpairReason:(unsigned)arg1 ;
-(id)getDevices;
-(int)pairingCompatibilityVersion;
-(unsigned)majorVersion;
-(unsigned)minorVersion;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

