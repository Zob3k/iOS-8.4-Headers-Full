/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MPUsageStatistics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _domain;
	NSString* _lastAggregateStatisticsDisplayCountKey;
	double _lastAggregateStatisticsDisplayCountTime;

}
+(id)sharedStatistics;
-(void)incrementViewDisplayCountForViewController:(id)arg1 ;
-(void)incrementViewDisplayCountForKey:(id)arg1 ;
-(void)setAggregateStatisticsDomain:(id)arg1 ;
-(id)init;
-(id)domain;
@end

