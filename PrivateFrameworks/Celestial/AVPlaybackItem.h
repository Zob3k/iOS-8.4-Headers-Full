/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class AVItem, NSDictionary;

@interface AVPlaybackItem : NSObject {

	id _delegate;
	AVItem* _avItem;
	OpaqueFigPlaybackItemRef _fpItem;
	SCD_Struct_BW2 _currentDuration;
	CGSize _currentSize;
	char _currentSizeIsValid;
	char _isPreparingForInspectionInitialSamples;
	char _isPreparingForInspectionAccurateDuration;
	char _isInPlayQueue;
	double _bookmarkTime;
	NSDictionary* _streamStateNotificationInfo;
	NSDictionary* _lyricsNotificationInfo;
	NSDictionary* _inspectionNotificationInfo;
	NSDictionary* _playToEndNotificationInfo;

}

@property (retain) NSDictionary * inspectionNotificationInfo;                  //@synthesize inspectionNotificationInfo=_inspectionNotificationInfo - In the implementation block
@property (retain) NSDictionary * playToEndNotificationInfo;                   //@synthesize playToEndNotificationInfo=_playToEndNotificationInfo - In the implementation block
@property (retain) NSDictionary * streamStateNotificationInfo;                 //@synthesize streamStateNotificationInfo=_streamStateNotificationInfo - In the implementation block
@property (retain) NSDictionary * lyricsNotificationInfo;                      //@synthesize lyricsNotificationInfo=_lyricsNotificationInfo - In the implementation block
@property (assign) char isInPlayQueue;                                         //@synthesize isInPlayQueue=_isInPlayQueue - In the implementation block
@property (readonly) char isPreparingForInspection; 
@property (assign) char isPreparingForInspectionInitialSamples;                //@synthesize isPreparingForInspectionInitialSamples=_isPreparingForInspectionInitialSamples - In the implementation block
@property (assign) char isPreparingForInspectionAccurateDuration;              //@synthesize isPreparingForInspectionAccurateDuration=_isPreparingForInspectionAccurateDuration - In the implementation block
+(id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)arg1 stringURLToNSURLWithKey:(id)arg2 inArrayOfDictionaries:(id)arg3 ;
-(void)dealloc;
-(id)itemAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)setItemAttribute:(id)arg1 value:(id)arg2 forKey:(id)arg3 error:(id*)arg4 ;
-(id)formatDetailsForTracks;
-(id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(char)arg3 maxCount:(int)arg4 ;
-(id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(int)arg3 ;
-(id)avItem;
-(void)ensureFPItem;
-(OpaqueFigPlaybackItemRef)fpItem;
-(NSDictionary *)inspectionNotificationInfo;
-(void)makeReadyForInspection;
-(void)stealControlOfAVItem;
-(NSDictionary *)playToEndNotificationInfo;
-(NSDictionary *)lyricsNotificationInfo;
-(NSDictionary *)streamStateNotificationInfo;
-(void)removeFPListeners;
-(void)setStreamStateNotificationInfo:(NSDictionary *)arg1 ;
-(void)setLyricsNotificationInfo:(NSDictionary *)arg1 ;
-(void)setInspectionNotificationInfo:(NSDictionary *)arg1 ;
-(void)setPlayToEndNotificationInfo:(NSDictionary *)arg1 ;
-(char)isPreparingForInspectionInitialSamples;
-(char)isPreparingForInspectionAccurateDuration;
-(char)isPreparingForInspection;
-(char)isInPlayQueue;
-(void)cacheCurrentDuration;
-(void)cacheCurrentSize;
-(id)fpNotificationNames;
-(void)addFPListeners;
-(void)applyAttributesFromAVItemToFPItem:(id)arg1 ;
-(void)applyBookmarkTime;
-(void)fpItemNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)setIsPreparingForInspectionInitialSamples:(char)arg1 ;
-(void)setIsPreparingForInspectionAccurateDuration:(char)arg1 ;
-(id)propertiesNeededForInspection;
-(void)setIsInPlayQueue:(char)arg1 ;
-(void)fpItemNotificationInfo:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 item:(id)arg2 ;
-(char)addToPlayQueue:(OpaqueFigPlayerRef)arg1 afterItem:(OpaqueFigPlaybackItemRef)arg2 ;
-(void)removeFromPlayQueue:(OpaqueFigPlayerRef)arg1 ;
-(void)setBookmarkTime:(double)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)attributeForKey:(id)arg1 ;
@end

