/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeRangeAsValue : NSValue {

	SCD_Struct_CM5 _timeRange;

}
+(id)valueWithCMTimeRange:(SCD_Struct_CM5)arg1 ;
-(id)description;
-(void)getValue:(void*)arg1 ;
-(const char*)objCType;
-(SCD_Struct_CM5)CMTimeRangeValue;
@end
