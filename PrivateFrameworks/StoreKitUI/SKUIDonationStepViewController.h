/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SKUIGiftCharity, SKUIDonationConfiguration, NSOperationQueue;

@interface SKUIDonationStepViewController : UIViewController {

	SKUIGiftCharity* _charity;
	SKUIDonationConfiguration* _configuration;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIGiftCharity * charity;                                      //@synthesize charity=_charity - In the implementation block
@property (nonatomic,readonly) SKUIDonationConfiguration * donationConfiguration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                //@synthesize operationQueue=_operationQueue - In the implementation block
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)initWithCharity:(id)arg1 configuration:(id)arg2 ;
-(SKUIGiftCharity *)charity;
-(SKUIDonationConfiguration *)donationConfiguration;
@end
