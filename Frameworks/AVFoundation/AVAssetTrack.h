/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetTrackInternal* _track;

}

@property (nonatomic,readonly) AVAsset * asset; 
@property (nonatomic,readonly) int trackID; 
+(id)mediaTypesForMediaCharacteristics;
+(id)keyPathsForValuesAffectingTimeRange;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(int)statusOfValueForKey:(id)arg1 ;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long)arg2 ;
-(char)hasMediaCharacteristics:(id)arg1 ;
-(SCD_Struct_CM4)minFrameDuration;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3 ;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(long)playabilityValidationResult;
-(char)isSelfContained;
-(id)mediaCharacteristics;
-(SCD_Struct_CM5)mediaPresentationTimeRange;
-(SCD_Struct_CM5)mediaDecodeTimeRange;
-(char)requiresFrameReordering;
-(float)estimatedDataRate;
-(id)loudnessInfo;
-(id)segmentForTrackTime:(SCD_Struct_CM4)arg1 ;
-(SCD_Struct_CM4)samplePresentationTimeForTrackTime:(SCD_Struct_CM4)arg1 ;
-(int)alternateGroupID;
-(char)isExcludedFromAutoselectionInTrackGroup;
-(id)associatedTracksOfType:(id)arg1 ;
-(id)_firstAssociatedTrackWithAssociationType:(id)arg1 ;
-(id)_trackReferences;
-(id)_assetTrackInspector;
-(char)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)arg1 flagsMask:(unsigned)arg2 ;
-(id)_fallbackTrack;
-(id)_followingTrackAmongTracks:(id)arg1 ;
-(id)_pairedForcedOnlySubtitlesTrack;
-(id)availableTrackAssociationTypes;
-(char)_hasMultipleDistinctFormatDescriptions;
-(char)_hasScaledEdits;
-(char)_hasEmptyEdits;
-(char)_hasMultipleEdits;
-(char)_firstFormatDescriptionIsLPCM;
-(void)dealloc;
-(int)layer;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)locale;
-(AVAsset *)asset;
-(CGSize)dimensions;
-(id)languageCode;
-(CGSize)naturalSize;
-(id)formatDescriptions;
-(SCD_Struct_CM5)timeRange;
-(char)hasProtectedContent;
-(int)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)metadata;
-(CGAffineTransform)preferredTransform;
-(float)nominalFrameRate;
-(id)commonMetadata;
-(char)isPlayable;
-(id)mediaType;
-(id)segments;
-(char)hasMediaCharacteristic:(id)arg1 ;
-(int)trackID;
-(id)extendedLanguageTag;
-(void)finalize;
-(long long)totalSampleDataLength;
@end

