/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, UsageFeed, NSDateFormatter;

@interface AppLaunchStatsNetwork : NSObject {

	NSMutableDictionary* bundleDict;
	UsageFeed* symptomsfeed;
	NSDateFormatter* symptomsfmt;

}
-(id)init;
-(id)findOrCreate:(id)arg1 ;
-(void)bundleStart:(id)arg1 seqNum:(long long)arg2 ;
-(void)bundleEnd:(id)arg1 seqNum:(long long)arg2 endHandler:(/*^block*/id)arg3 ;
@end

