/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSampleType.h>

@class NSString, HKUnit, _HKDimension;

@interface HKQuantityType : HKSampleType {

	int _aggregationStyle;
	NSString* _unitString;
	HKUnit* _canonicalUnit;
	long _canonicalUnitToken;

}

@property (readonly) int aggregationStyle; 
@property (nonatomic,readonly) HKUnit * canonicalUnit; 
@property (nonatomic,readonly) _HKDimension * dimension; 
+(void)_insertCode:(int)arg1 forIdentifier:(id)arg2 ;
+(id)_quantityTypeWithCode:(int)arg1 ;
-(char)isCompatibleWithUnit:(id)arg1 ;
-(id)_initWithDefinition:(SCD_Struct_HK3*)arg1 ;
-(void)validateUnit:(id)arg1 ;
-(int)aggregationStyle;
-(void)validateUnitFromString:(id)arg1 ;
-(_HKDimension *)dimension;
-(HKUnit *)canonicalUnit;
@end

