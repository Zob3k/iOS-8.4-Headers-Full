/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/NSCoding.h>
#import <GameCenterFoundation/NSSecureCoding.h>

@class GKChallengeInternal, NSString, GKPlayer, NSDate, NSOrderedSet, GKGame;

@interface GKChallenge : NSObject <NSCoding, NSSecureCoding> {

	GKChallengeInternal* _internal;

}

@property (nonatomic,copy,readonly) NSString * issuingPlayerID; 
@property (nonatomic,copy,readonly) NSString * receivingPlayerID; 
@property (nonatomic,copy,readonly) GKPlayer * issuingPlayer; 
@property (nonatomic,copy,readonly) GKPlayer * receivingPlayer; 
@property (nonatomic,readonly) int state; 
@property (nonatomic,retain,readonly) NSDate * issueDate; 
@property (nonatomic,retain,readonly) NSDate * completionDate; 
@property (nonatomic,copy,readonly) NSString * message; 
@property (retain) GKChallengeInternal * internal;                                   //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy,readonly) NSString * challengeID; 
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,copy,readonly) NSOrderedSet * compatibleBundleIDs; 
@property (nonatomic,readonly) GKGame * game; 
@property (nonatomic,readonly) char detailsLoaded; 
+(char)supportsSecureCoding;
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(id)stringForState:(int)arg1 ;
+(id)challengeForInternalRepresentation:(id)arg1 ;
+(void)loadChallengesForGame:(id)arg1 receivingPlayer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withScore:(id)arg3 ;
+(id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withAchievement:(id)arg3 ;
+(void)getCountOfChallenges:(/*^block*/id)arg1 ;
+(void)loadChallengesForReceivingPlayer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadReceivedChallengesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)composeGoalText;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)alertGoalText;
-(void)loadBannerImageWithHandler:(/*^block*/id)arg1 ;
-(id)iconSource;
-(id)smallIconURLString;
-(void)loadImageWithSource:(id)arg1 URLString:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)iconURLString;
-(id)listTitleText;
-(id)listGoalText;
-(id)detailGoalText;
-(id)detailFromText;
-(GKChallengeInternal *)internal;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKChallengeInternal *)arg1 ;
-(GKPlayer *)receivingPlayer;
-(void)declineWithCompletionHandler:(/*^block*/id)arg1 ;
-(GKPlayer *)issuingPlayer;
-(void)decline;
-(NSString *)issuingPlayerID;
-(NSString *)receivingPlayerID;
-(char)hasLoadedUIDetails;
-(void)loadUIDetailsWithHandler:(/*^block*/id)arg1 ;
-(id)infoTextForIssuingPlayer:(id)arg1 ;
-(GKGame *)game;
-(char)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)issueToPlayers:(id)arg1 message:(id)arg2 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end
