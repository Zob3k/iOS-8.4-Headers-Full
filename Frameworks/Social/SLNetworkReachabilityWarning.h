/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SLNetworkReachabilityWarning : NSObject {

	/*^block*/id _completionHandler;
	NSString* _serviceType;

}
-(id)initWithServiceType:(id)arg1 ;
-(void)showIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)showIfNecessary;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
@end

