/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MSPowerAssertionManager : NSObject {

	char _isAssertingPowerAssertion;
	char _isBusy;
	int _busyCount;
	int _UIBusyCount;
	unsigned _assertionID;

}

@property (assign,nonatomic) int busyCount;                               //@synthesize busyCount=_busyCount - In the implementation block
@property (assign,nonatomic) int UIBusyCount;                             //@synthesize UIBusyCount=_UIBusyCount - In the implementation block
@property (assign,nonatomic) char isBusy;                                 //@synthesize isBusy=_isBusy - In the implementation block
@property (assign,nonatomic) char isAssertingPowerAssertion;              //@synthesize isAssertingPowerAssertion=_isAssertingPowerAssertion - In the implementation block
@property (assign,nonatomic) unsigned assertionID;                        //@synthesize assertionID=_assertionID - In the implementation block
+(id)sharedManager;
-(void)retainBusy;
-(void)releaseBusy;
-(int)busyCount;
-(void)setBusyCount:(int)arg1 ;
-(void)retainUIBusy;
-(void)releaseUIBusy;
-(int)UIBusyCount;
-(void)setUIBusyCount:(int)arg1 ;
-(void)_recomputePowerAssertion;
-(char)isAssertingPowerAssertion;
-(void)setIsAssertingPowerAssertion:(char)arg1 ;
-(void)_assertPowerAssertion;
-(void)_deassertPowerAssertion;
-(void)toggleAssertion;
-(unsigned)assertionID;
-(void)setAssertionID:(unsigned)arg1 ;
-(void)setIsBusy:(char)arg1 ;
-(char)isBusy;
@end

