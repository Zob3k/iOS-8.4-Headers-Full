/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <CoreTelephony/NSCopying.h>
#import <CoreTelephony/CTMessageAddress.h>

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress> {

	NSString* _digits;
	NSString* _countryCode;
	char _isShortCode;

}

@property (readonly) NSString * digits;                   //@synthesize digits=_digits - In the implementation block
@property (readonly) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (assign) char isShortCode;                      //@synthesize isShortCode=_isShortCode - In the implementation block
+(BOOL)isValidPhoneNumber:(id)arg1 ;
+(BOOL)isValidPhoneNumberChar:(unsigned short)arg1 ;
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(id)initWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(id)encodedString;
-(char)isShortCode;
-(id)formatForCallingCountry:(id)arg1 ;
-(int)numberOfDigitsForShortCodeNumber;
-(void)setIsShortCode:(char)arg1 ;
-(NSString *)digits;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)canonicalFormat;
-(NSString *)countryCode;
@end
