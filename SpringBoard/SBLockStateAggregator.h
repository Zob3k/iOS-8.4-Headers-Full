/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:54 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBLockStateAggregator : NSObject {

	unsigned _lockState;

}
+(id)sharedInstance;
-(unsigned)lockState;
-(id)_descriptionForLockState:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(char)hasAnyLockState;
-(void)_updateLockState;
@end
