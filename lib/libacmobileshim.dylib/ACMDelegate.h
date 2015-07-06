/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libacmobileshim.dylib/ACMExternalAppleConnectDelegate.h>

@class NSString;

@interface ACMDelegate : NSObject <ACMExternalAppleConnectDelegate> {

	unsigned char _finished;
	/*^block*/id copyTicketCompletion;

}

@property (assign) unsigned char finished;                          //@synthesize finished=_finished - In the implementation block
@property (copy) id copyTicketCompletion; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setFinished:(unsigned char)arg1 ;
-(unsigned char)finished;
-(void)setCopyTicketCompletion:(id)arg1 ;
-(id)copyTicketCompletion;
-(void)appleConnect:(id)arg1 authenticationDidEndWithResponse:(id)arg2 ;
-(id)appleConnectParentViewController:(id)arg1 ;
@end
