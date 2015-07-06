/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSiriModelObject.h>

@class NSNumber;

@interface AFTimer : AFSiriModelObject {

	int _state;
	NSNumber* _value;

}

@property (assign,nonatomic) int state;                   //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSNumber * value;              //@synthesize value=_value - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
@end
