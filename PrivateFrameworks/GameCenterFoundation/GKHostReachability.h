/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKReachability.h>

@class NSString, NSError;

@interface GKHostReachability : GKReachability {

	NSString* _hostName;
	NSError* _error;

}

@property (nonatomic,retain) NSString * hostName;              //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,retain) NSError * error;                  //@synthesize error=_error - In the implementation block
+(id)_gkReachabilityWithHostName:(id)arg1 ;
-(void)dealloc;
-(NSError *)error;
-(NSString *)hostName;
-(void)setHostName:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

