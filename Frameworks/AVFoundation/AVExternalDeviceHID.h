/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVExternalDeviceHIDInternal, NSString;

@interface AVExternalDeviceHID : NSObject {

	AVExternalDeviceHIDInternal* _externalDeviceHID;

}

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * screenID; 
@property (assign,nonatomic) int inputMode; 
-(NSString *)screenID;
-(id)_externalDevice;
-(id)_figEndpointHIDInputMode;
-(id)initWithExternalDeviceAndHIDDictionary:(id)arg1 hidDictionary:(id)arg2 ;
-(void)dealloc;
-(NSString *)UUID;
-(void)setInputMode:(int)arg1 ;
-(int)inputMode;
-(void)finalize;
@end
