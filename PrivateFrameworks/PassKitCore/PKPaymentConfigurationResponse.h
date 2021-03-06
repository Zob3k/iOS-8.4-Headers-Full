/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData, NSString, NSDictionary;

@interface PKPaymentConfigurationResponse : PKPaymentWebServiceResponse {

	NSData* _data;
	NSData* _signature;
	NSString* _version;
	NSDictionary* _configuration;

}

@property (nonatomic,readonly) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSData * signature;                        //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSString * version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(void)dealloc;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(NSString *)version;
-(NSDictionary *)configuration;
-(NSData *)signature;
@end

