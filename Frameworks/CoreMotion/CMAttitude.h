/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/NSCopying.h>
#import <CoreMotion/NSSecureCoding.h>

@interface CMAttitude : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double roll; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) SCD_Struct_CM8 rotationMatrix; 
@property (nonatomic,readonly) SCD_Struct_CM7 quaternion; 
+(char)supportsSecureCoding;
-(_GLKQuaternion)GLKQuaternion;
-(id)initWithQuaternion:(SCD_Struct_CM7)arg1 ;
-(SCD_Struct_CM8)rotationMatrix;
-(void)multiplyByInverseOfAttitude:(id)arg1 ;
-(void)setQuaternion:(SCD_Struct_CM7)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CM7)quaternion;
-(double)pitch;
-(double)yaw;
-(double)roll;
@end

