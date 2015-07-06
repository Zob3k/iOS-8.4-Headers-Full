/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/DataClassMigrators/DAAccount.migrator/DAAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface DAAccountMigrator : DataClassMigrator
-(void)_moveExchangeCredentialsToAppleAccessGroup;
-(void)_updateFacebookAccountAuthenticationTypes;
-(void)_upgradeDAAccounts;
-(void)_writeDeviceSpecificID;
-(void)_ensureHolidaySubCalAccount;
-(id)dataClassName;
-(float)estimatedDuration;
-(float)migrationProgress;
-(char)performMigration;
@end
