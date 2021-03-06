/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMDaemonCore/IMDServiceSession.h>
#import <SMS/IDSServiceDelegate.h>
#import <SMS/IDSAccountRegistrationDelegate.h>
#import <SMS/SMSRelayPushHandlerListener.h>

@class NSMutableDictionary, IMMultiQueue, IDSService, NSArray, NSSet, SMSRelayPushHandler, NSMutableSet, NSString;

@interface SMSServiceSession : IMDServiceSession <IDSServiceDelegate, IDSAccountRegistrationDelegate, SMSRelayPushHandlerListener> {

	NSMutableDictionary* _outgoingRelayMessageTimerMap;
	NSMutableDictionary* _outgoingMessageMap;
	NSMutableDictionary* _outgoingMessageBlockMap;
	NSMutableDictionary* _outgoingMessageFailureMap;
	IMMultiQueue* _incomingMessageMultiQueue;
	char _isRegistered;
	char _hasClearedMesageQueue;
	IDSService* _relayService;
	IDSService* _smsRelayService;
	IDSService* _smsWatchService;
	NSArray* _currentRelayDevices;
	NSSet* _currentRelayAccounts;
	SMSRelayPushHandler* _smsRelayPushHandler;
	NSMutableSet* _originatedMessages;
	char _pendingOriginatedMessagesTimer;
	NSMutableSet* _pendingRelayApprovalRequests;
	NSMutableDictionary* _pendingCodesToDevicesForApproval;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_setUpRelay;
-(void)_updateRelayStatus;
-(void)_registerForAccountChanges;
-(void)_updatePhoneNumberCallerID;
-(void)_handleCapabilitiesChanged:(id)arg1 ;
-(void)_registerForCTNotifications;
-(void)_clearPendingIncomingMessageQueue;
-(void)updateMMSCapability;
-(void)_registerForIncomingMessages:(id)arg1 ;
-(void)_unregisterForCTNotifications;
-(void)_clearTimoutTimerForRelayMessageID:(id)arg1 ;
-(void)_messageTimedOut:(id)arg1 ;
-(void)_checkAndSetRelayService;
-(void)_addDeviceToAllowedSMSRelay:(id)arg1 ;
-(char)_hasRelayDevice;
-(char)_hasPhoneNumberAliasActive;
-(id)_callerIDAccountFromSettings;
-(char)_isAliasActiveForSMSRelay:(id)arg1 ;
-(id)_myCTPhoneNumber;
-(char)isSMSRelayEnabled;
-(char)sendDataToPeers:(id)arg1 forcedCallerID:(id)arg2 shouldFilterRecepients:(char)arg3 requestProxySend:(char)arg4 dontSendTo:(id)arg5 ;
-(id)localDevice;
-(char)isLocalDeviceProxyRegistered;
-(char)sendToLocalPeers:(id)arg1 ;
-(char)_hasPeerDevices;
-(id)_allowedDevicesforSMSRelay;
-(char)accountHasAlias:(id)arg1 aliastoCheck:(id)arg2 ;
-(id)_dominentPhoneNumberAlias;
-(id)_callerIDForRelay;
-(char)_localDeviceSupportsSMS;
-(id)_deviceForCallerID:(id)arg1 ;
-(id)_destinationForDevice:(id)arg1 forcedIdentity:(id)arg2 ;
-(id)_allowedIDSDevicesforSMSRelay;
-(void)_setClearMessageSendTimer;
-(void)_clearInactivityTimer;
-(void)_approveSelfForSMSRelay;
-(void)_processReceivedDictionary:(id)arg1 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 ;
-(id)idsDeviceFromPushToken:(id)arg1 ;
-(void)_forwardMessageToPeers:(id)arg1 messageType:(id)arg2 guid:(id)arg3 originalSender:(id)arg4 ;
-(id)_convertIMMessageItemDictionaryToIMMessageItem:(id)arg1 ;
-(void)sendCTMessageFromIMMessageItem:(id)arg1 forChat:(id)arg2 chat:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendUnApproveToDevice:(id)arg1 extraKeys:(id)arg2 ;
-(char)isIDInList:(id)arg1 ArrayToCheck:(id)arg2 ;
-(void)_removeOriginatedMessage:(id)arg1 ;
-(void)handler:(id)arg1 outgoingDownloadMessage:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 ;
-(void)handler:(id)arg1 outgoingPlainTextMessage:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 ;
-(void)handler:(id)arg1 messageIDSent:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 timeStamp:(id)arg5 ;
-(void)handler:(id)arg1 messageIDRead:(id)arg2 timeStamp:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 ;
-(id)_challengedDevicesforSMSRelay;
-(void)_addDeviceToChallengedSMSRelay:(id)arg1 ;
-(void)_sendPinCodeToDeviceAndPromptForResponse:(id)arg1 ;
-(unsigned)_generateMessageIDForMessageGUID:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(/*^block*/id)_failureBlockForMessageGUID:(id)arg1 ;
-(void)_clearMapForMessageGUID:(id)arg1 ;
-(id)idsDeviceFromUniqueID:(id)arg1 ;
-(void)_removeDeviceFromAllowedSMSRelay:(id)arg1 ;
-(void)sendApprovalEnrollMe;
-(char)sendApprovalDisplayPinToDevice:(id)arg1 ;
-(void)sendApprovalResponseToDevice:(id)arg1 enteredCorrectly:(char)arg2 wasCancelled:(char)arg3 ;
-(unsigned)randomSixDigitCode;
-(char)sendEnrollmentRelatedMessageOverIDS:(id)arg1 deviceToSendTo:(id)arg2 ;
-(char)isValidMMS:(id)arg1 ;
-(void)_addOriginatedMessage:(id)arg1 ;
-(char)_isOneOfMyActiveAlias:(id)arg1 ;
-(char)_localDeviceSupportsSMSAndDoesNotHaveAPhoneNumber;
-(void)_setTimeoutTimerForRelayMessageID:(id)arg1 timeout:(double)arg2 ;
-(id)_convertIMMessageItemToDictionary:(id)arg1 ;
-(char)isProxyRegistered;
-(unsigned char)_readMMSUserOverride;
-(char)_checkMMSEnablement;
-(id)_convertCTMessagePartToDictionary:(id)arg1 ;
-(char)_shouldUploadToMMCS:(id)arg1 ;
-(id)_messageGUIDForMessageID:(int)arg1 ;
-(/*^block*/id)_completionBlockForMessageGUID:(id)arg1 ;
-(id)_convertCTMessageToDictionary:(id)arg1 requiresUpload:(char*)arg2 ;
-(char)relayDictionaryToPeers:(id)arg1 requiresUpload:(char)arg2 ;
-(void)_addDefaultPairedDeviceToAllowedSMSRelayList;
-(void)handler:(id)arg1 incomingPlainTextMessage:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 timeStamp:(id)arg5 ;
-(void)handler:(id)arg1 incomingDownloadMessage:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 timeStamp:(id)arg5 ;
-(void)handler:(id)arg1 messageIDSendFailure:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 timeStamp:(id)arg5 ;
-(void)handler:(id)arg1 localIncommingMessage:(id)arg2 ;
-(void)handler:(id)arg1 localOutgoingMessage:(id)arg2 ;
-(void)handler:(id)arg1 localOutgoingDownloadMessage:(id)arg2 ;
-(void)handler:(id)arg1 localIncomingDownloadMessage:(id)arg2 ;
-(void)handler:(id)arg1 localMessageSent:(id)arg2 ;
-(void)handler:(id)arg1 localMessageRead:(id)arg2 ;
-(void)handler:(id)arg1 localMessageError:(id)arg2 ;
-(void)handler:(id)arg1 localFileRequest:(id)arg2 ;
-(void)handler:(id)arg1 localFileResponse:(id)arg2 ;
-(void)handler:(id)arg1 incomingDisplayPinCode:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 ;
-(void)handler:(id)arg1 incomingEnrollMeRequest:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 ;
-(void)handler:(id)arg1 incomingResponseForApproval:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 ;
-(char)_isUsingSMSWatchService;
-(char)_localDeviceSupportsSMSAndHasAPhoneNumber;
-(char)_localDeviceSupportsRelay;
-(id)_ignoredDevicesforSMSRelay;
-(id)_ignoredIDSDevicesforSMSRelay;
-(id)_challengedIDSDevicesforSMSRelay;
-(void)_addDeviceToIgnoredSMSRelay:(id)arg1 ;
-(void)_removeDeviceFromIgnoredSMSRelay:(id)arg1 ;
-(void)_removeDeviceFromChallengedSMSRelay:(id)arg1 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 joinProperties:(id)arg4 ;
-(void)_processMessageSent:(unsigned)arg1 ;
-(void)_processMessageSendFailure:(unsigned)arg1 ;
-(void)enrollSelfDeviceInSMSRelay;
-(id)accountForAlias:(id)arg1 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(unsigned long long)capabilities;
-(void)enrollDeviceInSMSRelay:(id)arg1 ;
-(void)unEnrollDeviceInSMSRelay:(id)arg1 ;
-(id)initWithAccount:(id)arg1 service:(id)arg2 ;
-(void)sessionDidBecomeActive;
-(void)sessionWillBecomeInactive;
-(void)logoutServiceSession;
-(void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendPlayedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)refreshServiceCapabilities;
-(void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 joinProperties:(id)arg5 ;
-(void)leaveChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)loginServiceSession;
-(void)account:(id)arg1 aliasesChanged:(id)arg2 ;
@end

