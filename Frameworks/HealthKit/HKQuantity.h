/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/NSSecureCoding.h>
#import <HealthKit/NSCopying.h>

@class HKUnit;

@interface HKQuantity : NSObject <NSSecureCoding, NSCopying> {

	double _value;
	HKUnit* _unit;

}

@property (getter=_unit,nonatomic,readonly) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
+(char)supportsSecureCoding;
+(id)quantityWithUnit:(id)arg1 doubleValue:(double)arg2 ;
-(id)_quantityByAddingQuantity:(id)arg1 ;
-(id)_initWithUnit:(id)arg1 doubleValue:(double)arg2 ;
-(id)_unit;
-(char)isCompatibleWithUnit:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)doubleValueForUnit:(id)arg1 ;
@end
