/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CBUUID;

@interface CBAttribute : NSObject {

	CBUUID* _UUID;

}

@property (nonatomic,retain) CBUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
-(void)dealloc;
-(CBUUID *)UUID;
-(id)initWithUUID:(id)arg1 ;
-(void)setUUID:(CBUUID *)arg1 ;
@end

