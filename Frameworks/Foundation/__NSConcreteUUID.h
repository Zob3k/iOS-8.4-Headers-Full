/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSUUID.h>

@interface __NSConcreteUUID : NSUUID {

	unsigned char _uuidBytes[16];

}
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(SCD_Struct_NS78)_cfUUIDBytes;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)UUIDString;
-(id)initWithUUIDString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)getUUIDBytes:(unsigned char)arg1 ;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
@end

