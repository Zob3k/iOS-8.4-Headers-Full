/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface FMFSessionDataManager : NSObject {

	NSSet* _followers;
	NSSet* _following;
	NSSet* _locations;

}

@property (nonatomic,retain) NSSet * followers;              //@synthesize followers=_followers - In the implementation block
@property (nonatomic,retain) NSSet * following;              //@synthesize following=_following - In the implementation block
@property (nonatomic,retain) NSSet * locations;              //@synthesize locations=_locations - In the implementation block
+(id)sharedInstance;
-(void)setLocations:(NSSet *)arg1 ;
-(id)locationForHandle:(id)arg1 ;
-(void*)_loadAddressBook;
-(void)abChanged:(id)arg1 ;
-(NSSet *)followers;
-(void)_registerABCallbacks;
-(void)setFollowers:(NSSet *)arg1 ;
-(id)followerForHandle:(id)arg1 ;
-(id)followingForHandle:(id)arg1 ;
-(id)offerExpirationForHandle:(id)arg1 groupId:(id)arg2 ;
-(void)setFollowing:(NSSet *)arg1 ;
-(NSSet *)following;
-(NSSet *)locations;
@end

