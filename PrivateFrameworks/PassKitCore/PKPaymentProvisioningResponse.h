/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSURL;

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse {

	NSURL* _passURL;

}

@property (nonatomic,retain) NSURL * passURL;              //@synthesize passURL=_passURL - In the implementation block
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)setPassURL:(NSURL *)arg1 ;
-(NSURL *)passURL;
@end

