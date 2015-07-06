/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/NSCopying.h>
#import <CameraKit/NSMutableCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface CAMCaptureRequest : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* __parameterStorage;
	int _type;

}

@property (nonatomic,readonly) int type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * _customParameterStorage; 
@property (nonatomic,readonly) NSMutableDictionary * _parameterStorage;                  //@synthesize _parameterStorage=__parameterStorage - In the implementation block
-(id)init;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(int)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)_parameterStorage;
-(id)parameterForKey:(id)arg1 ;
-(NSDictionary *)_customParameterStorage;
@end
