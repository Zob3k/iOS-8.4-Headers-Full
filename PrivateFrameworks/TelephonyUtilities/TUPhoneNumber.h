/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/NSCoding.h>
#import <TelephonyUtilities/NSSecureCoding.h>

@class NSString;

@interface TUPhoneNumber : NSObject <NSCoding, NSSecureCoding> {

	CFPhoneNumberRef _phoneNumberRef;

}

@property (readonly) NSString * digits; 
@property (readonly) NSString * countryCode; 
@property (readonly) NSString * formattedRepresentation; 
@property (readonly) NSString * formattedInternationalRepresentation; 
@property (readonly) NSString * unformattedInternationalRepresentation; 
@property (assign) CFPhoneNumberRef phoneNumberRef;                                  //@synthesize phoneNumberRef=_phoneNumberRef - In the implementation block
+(char)supportsSecureCoding;
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
+(id)phoneNumberWithCFPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
-(id)initWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(NSString *)digits;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(CFPhoneNumberRef)phoneNumberRef;
-(id)initWithCFPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
-(NSString *)formattedRepresentation;
-(NSString *)formattedInternationalRepresentation;
-(NSString *)unformattedInternationalRepresentation;
-(void)setPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
-(NSString *)countryCode;
@end
