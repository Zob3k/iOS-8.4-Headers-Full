/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutine/NSSecureCoding.h>

@class NSDictionary;

@interface RTAction : NSObject <NSSecureCoding> {

	int _type;
	NSDictionary* _options;

}

@property (nonatomic,readonly) int type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
+(char)supportsSecureCoding;
+(id)actionTypeToString:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)type;
-(NSDictionary *)options;
-(id)initWithType:(int)arg1 andOptions:(id)arg2 ;
@end
