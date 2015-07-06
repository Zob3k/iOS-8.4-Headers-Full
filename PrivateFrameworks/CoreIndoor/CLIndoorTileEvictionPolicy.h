/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface CLIndoorTileEvictionPolicy : NSObject <NSSecureCoding> {

	char _forceClean;
	NSObject*<OS_xpc_object> _activity;
	double _maxModifiedAge;

}

@property (assign,nonatomic) double maxModifiedAge;                          //@synthesize maxModifiedAge=_maxModifiedAge - In the implementation block
@property (assign,nonatomic) char forceClean;                                //@synthesize forceClean=_forceClean - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(char)tileLastModified:(double)arg1 needsEvictionAt:(double)arg2 ;
-(double)maxModifiedAge;
-(void)setMaxModifiedAge:(double)arg1 ;
-(char)forceClean;
-(void)setForceClean:(char)arg1 ;
@end
