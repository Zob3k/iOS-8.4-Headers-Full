/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/NSSecureCoding.h>

@class TRAdvertisingInfo, NSString;

@interface TRService : NSObject <NSSecureCoding> {

	TRAdvertisingInfo* _advertisingInfo;
	NSString* _name;
	int _uniqueID;

}

@property (nonatomic,readonly) TRAdvertisingInfo * advertisingInfo;              //@synthesize advertisingInfo=_advertisingInfo - In the implementation block
@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int uniqueID;                                     //@synthesize uniqueID=_uniqueID - In the implementation block
+(char)supportsSecureCoding;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)name;
-(id)_initWithName:(id)arg1 uniqueID:(int)arg2 advertisingInfo:(id)arg3 ;
-(TRAdvertisingInfo *)advertisingInfo;
-(int)uniqueID;
@end

