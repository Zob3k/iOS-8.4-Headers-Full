/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKitDaemon/NSSecureCoding.h>

@class NSString, NSUUID, NSData, HMDHome;

@interface HMDUser : NSObject <NSSecureCoding> {

	char _remoteGateway;
	NSString* _userID;
	NSUUID* _uuid;
	NSString* _pairingUsername;
	NSData* _publicKey;
	unsigned _privilege;
	HMDHome* _home;

}

@property (nonatomic,copy,readonly) NSString * userID;                                 //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSString * pairingUsername;                        //@synthesize pairingUsername=_pairingUsername - In the implementation block
@property (nonatomic,copy,readonly) NSData * publicKey;                                //@synthesize publicKey=_publicKey - In the implementation block
@property (getter=isRemoteGateway,nonatomic,readonly) char remoteGateway;              //@synthesize remoteGateway=_remoteGateway - In the implementation block
@property (nonatomic,readonly) unsigned privilege;                                     //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,readonly) HMDHome * home;                                         //@synthesize home=_home - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(NSData *)publicKey;
-(HMDHome *)home;
-(NSString *)pairingUsername;
-(NSString *)userID;
-(unsigned)privilege;
-(id)initWithName:(id)arg1 pairingUsername:(id)arg2 publicKey:(id)arg3 privilege:(unsigned)arg4 remoteGateway:(char)arg5 home:(id)arg6 ;
-(id)lookupDisplayName;
-(char)isRemoteGateway;
@end

