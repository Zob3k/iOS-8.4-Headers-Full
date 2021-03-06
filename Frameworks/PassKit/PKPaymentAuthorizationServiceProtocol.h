/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPaymentAuthorizationServiceProtocol <NSObject>
@optional
-(void)handleHostApplicationDidCancel;
-(void)handleDismissWithCompletion:(/*^block*/id)arg1;

@required
-(void)handleHostApplicationWillResignActive:(char)arg1;
-(void)handleHostApplicationDidBecomeActive;
-(void)authorizationDidAuthorizePaymentCompleteWithStatus:(int)arg1;
-(void)authorizationDidSelectShippingMethodCompleteWithStatus:(int)arg1 paymentSummaryItems:(id)arg2;
-(void)authorizationDidSelectShippingAddressCompleteWithStatus:(int)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;

@end

