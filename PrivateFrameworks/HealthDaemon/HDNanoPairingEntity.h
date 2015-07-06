/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDNanoPairingEntity : HDHealthEntity
+(id)createTableSQL;
+(int)protectionClass;
+(char)resetNanoPairingRecordWithPersistentPairingUUID:(id)arg1 newHealthPairingUUID:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(id)nanoPairingRecordWithPersistentPairingUUID:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)nanoPairingRecordWithPersistentPairingUUID:(id)arg1 healthPairingUUID:(id)arg2 didReplaceExisting:(char*)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(id)_nanoPairingRecordWithPersistentPairingUUID:(id)arg1 database:(id)arg2 ;
+(char)_insertNanoPairingRecord:(id)arg1 replaceExisting:(char)arg2 database:(id)arg3 error:(id*)arg4 ;
+(id)_predicateWithPersistentPairingUUID:(id)arg1 ;
+(id)_nanoPairingRecordPropertySetters;
+(id)databaseTable;
@end
