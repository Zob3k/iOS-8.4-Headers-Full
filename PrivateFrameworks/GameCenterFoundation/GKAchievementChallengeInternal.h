/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal {

	GKAchievementInternal* _achievement;

}

@property (nonatomic,copy) GKAchievementInternal * achievement;              //@synthesize achievement=_achievement - In the implementation block
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(unsigned)type;
-(void)setAchievement:(GKAchievementInternal *)arg1 ;
-(id)serverRepresentationForReceivingPlayer:(id)arg1 ;
-(GKAchievementInternal *)achievement;
@end

