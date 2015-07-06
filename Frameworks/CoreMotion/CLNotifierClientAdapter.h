/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CLNotifierServiceClientProtocol.h>

@interface CLNotifierClientAdapter : NSObject <CLNotifierServiceClientProtocol> {

	CLNotifierClientBase* _client;
	char _valid;

}

@property (assign,nonatomic) char valid;              //@synthesize valid=_valid - In the implementation block
-(void)onNotification:(int)arg1 withData:(id)arg2 ;
-(id)init;
-(id)debugDescription;
-(void)invalidate;
-(char)valid;
-(void)setValid:(char)arg1 ;
-(id)initWithClient:(CLNotifierClientBase*)arg1 ;
@end
