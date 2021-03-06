/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKit/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface HMHAPMetadataAssistantCharacteristic : NSObject <NSSecureCoding> {

	char _supportsLocalization;
	NSString* _name;
	NSString* _readHAPCharacteristicName;
	NSString* _writeHAPCharacteristicName;
	NSString* _format;
	NSDictionary* _values;
	NSString* _readHAPCharacteristicType;
	NSString* _writeHAPCharacteristicType;

}

@property (nonatomic,retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * readHAPCharacteristicName;               //@synthesize readHAPCharacteristicName=_readHAPCharacteristicName - In the implementation block
@property (nonatomic,retain) NSString * writeHAPCharacteristicName;              //@synthesize writeHAPCharacteristicName=_writeHAPCharacteristicName - In the implementation block
@property (nonatomic,retain) NSString * format;                                  //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) char supportsLocalization;                          //@synthesize supportsLocalization=_supportsLocalization - In the implementation block
@property (nonatomic,retain) NSDictionary * values;                              //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSString * readHAPCharacteristicType;               //@synthesize readHAPCharacteristicType=_readHAPCharacteristicType - In the implementation block
@property (nonatomic,retain) NSString * writeHAPCharacteristicType;              //@synthesize writeHAPCharacteristicType=_writeHAPCharacteristicType - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)readHAPCharacteristicType;
-(void)setReadHAPCharacteristicType:(NSString *)arg1 ;
-(NSString *)writeHAPCharacteristicType;
-(void)setWriteHAPCharacteristicType:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setValues:(NSDictionary *)arg1 ;
-(NSDictionary *)values;
-(NSString *)readHAPCharacteristicName;
-(NSString *)writeHAPCharacteristicName;
-(char)supportsLocalization;
-(void)setReadHAPCharacteristicName:(NSString *)arg1 ;
-(void)setWriteHAPCharacteristicName:(NSString *)arg1 ;
-(void)setSupportsLocalization:(char)arg1 ;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
@end

