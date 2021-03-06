/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableString;

@interface AppLaunchStatsLogFormater : NSObject {

	NSMutableString* fetchCandidatesStr;
	NSMutableString* fetchForeground;
	NSMutableString* fetchBlackList;
	NSMutableString* fetchRecentLaunch;
	NSMutableString* filteredCandidates;
	NSMutableString* trendingCandidates;
	NSMutableString* prewarmCandidate;
	NSMutableString* foregroundCandidate;
	NSMutableString* blacklistCandidate;
	NSMutableString* resourceRestrictCandidates;
	NSMutableString* filteredCandidatesTrend;

}
-(id)init;
-(void)resetStringIdentifierWhatToLaunch;
-(void)resetStringIdentifierTrending;
-(void)concat:(id)arg1 withSlot:(int)arg2 ;
-(void)dumpTrending;
-(void)dumpWhatToLaunch;
@end

