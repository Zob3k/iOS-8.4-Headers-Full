/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFAccount.h>

@interface DeliveryAccount : MFAccount
+(Class)accountValidatorClass;
+(char)validateValue:(id)arg1 forPSSpecifier:(id)arg2 ;
+(id)accountWithIdentifier:(id)arg1 ;
+(id)accountTypeIdentifier;
+(id)existingAccountForUniqueID:(id)arg1 ;
+(id)accountWithUniqueId:(id)arg1 ;
+(id)existingAccountWithIdentifier:(id)arg1 ;
+(void)_postDeliveryAccountsHaveChanged;
+(id)deliveryAccounts;
+(id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(char)arg3 ;
+(id)existingAccountWithHostname:(id)arg1 username:(id)arg2 ;
+(void)addDeliveryAccount:(id)arg1 ;
+(void)reloadDeliveryAccounts;
+(void)removeDeliveryAccount:(id)arg1 ;
+(id)accountWithHostname:(id)arg1 username:(id)arg2 ;
+(id)carrierDeliveryAccount;
+(id)newDefaultInstance;
-(void)setPortNumberString:(id)arg1 ;
-(id)portNumberString;
-(id)identifier;
-(void)setUsername:(id)arg1 ;
-(void)_setAccountProperties:(id)arg1 ;
-(char)hasEnoughInformationForEasySetup;
-(id)newDeliveryWithMessage:(id)arg1 ;
-(id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(char)arg3 ;
-(id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
-(void)_updateAccountDescriptionWithUsername:(id)arg1 hostname:(id)arg2 ;
-(Class)deliveryClass;
-(void)setShouldUseAuthentication:(char)arg1 ;
-(unsigned long long)maximumMessageBytes;
-(char)shouldUseAuthentication;
-(void)setMaximumMessageBytes:(unsigned long long)arg1 ;
-(id)mailAccountIfAvailable;
-(char)hasNoReferences;
-(id)displayHostname;
-(char)canBeFallbackAccount;
-(char)supportsSoftBankCodePoints;
-(char)supportsOutboxCopy;
-(char)shouldUseSaveSentForAccount:(id)arg1 ;
@end

