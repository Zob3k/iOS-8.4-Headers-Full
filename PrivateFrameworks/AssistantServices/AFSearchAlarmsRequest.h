/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class AFAlarm;

@interface AFSearchAlarmsRequest : AFSiriRequest {

	int _options;
	AFAlarm* _criteria;

}

@property (assign,nonatomic) int options;                     //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) AFAlarm * criteria;              //@synthesize criteria=_criteria - In the implementation block
+(char)supportsSecureCoding;
-(AFAlarm *)criteria;
-(void)setCriteria:(AFAlarm *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOptions:(int)arg1 ;
-(int)options;
-(id)createResponse;
@end

