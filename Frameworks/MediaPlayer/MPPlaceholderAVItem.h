/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAVItem.h>

@class NSString;

@interface MPPlaceholderAVItem : MPAVItem {

	NSString* _album;
	NSString* _artist;
	double _durationFromExternalMetadata;
	char _explicitTrack;
	char _likeStateEnabled;
	NSString* _mainTitle;
	char _supportsLikedState;

}

@property (nonatomic,retain) NSString * album;                                               //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) NSString * artist;                                              //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) double durationFromExternalMetadata;                            //@synthesize durationFromExternalMetadata=_durationFromExternalMetadata - In the implementation block
@property (assign,getter=isExplicitTrack,nonatomic) char explicitTrack;                      //@synthesize explicitTrack=_explicitTrack - In the implementation block
@property (assign,getter=isLikedStateEnabled,nonatomic) char likedStateEnabled;              //@synthesize likeStateEnabled=_likeStateEnabled - In the implementation block
@property (nonatomic,retain) NSString * mainTitle;                                           //@synthesize mainTitle=_mainTitle - In the implementation block
@property (assign,nonatomic) char supportsLikedState;                                        //@synthesize supportsLikedState=_supportsLikedState - In the implementation block
-(char)mpuReporting_isValidReportingItem;
-(void)loadAssetAndPlayerItem;
-(double)durationFromExternalMetadata;
-(char)isValidPlayerSubstituteForItem:(id)arg1 ;
-(char)isExplicitTrack;
-(NSString *)mainTitle;
-(char)supportsSkip;
-(char)supportsSettingCurrentTime;
-(char)isLikedStateEnabled;
-(char)supportsLikedState;
-(void)setDurationFromExternalMetadata:(double)arg1 ;
-(void)setExplicitTrack:(char)arg1 ;
-(void)setLikedStateEnabled:(char)arg1 ;
-(void)setMainTitle:(NSString *)arg1 ;
-(void)setSupportsLikedState:(char)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)artist;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
@end
