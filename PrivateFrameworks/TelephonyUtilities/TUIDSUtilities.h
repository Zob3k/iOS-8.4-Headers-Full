/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/IDSIDQueryControllerDelegate.h>

@class NSString;

@interface TUIDSUtilities : NSObject <IDSIDQueryControllerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)idsServiceForType:(unsigned)arg1 ;
+(char)_anyStatusInResultDictionary:(id)arg1 equalsIDStatus:(int)arg2 ;
+(id)_IDSFormattedDestinationsForPerson:(id)arg1 ;
+(char)_availabilityForDestinations:(id)arg1 serviceType:(unsigned)arg2 ;
+(char)_refreshAvailabilityForDestinations:(id)arg1 serviceType:(unsigned)arg2 userInfo:(id)arg3 ;
+(id)personForABRecordID:(int)arg1 ;
+(char)_availabilityForPerson:(id)arg1 serviceType:(unsigned)arg2 ;
+(char)_refreshAvailabilityForPerson:(id)arg1 serviceType:(unsigned)arg2 ;
+(char)isService:(unsigned)arg1 availableForDestinations:(id)arg2 ;
+(char)isService:(unsigned)arg1 availableForABRecordID:(int)arg2 ;
+(char)refreshAvailabilityForABRecordID:(int)arg1 serviceType:(unsigned)arg2 ;
@end
