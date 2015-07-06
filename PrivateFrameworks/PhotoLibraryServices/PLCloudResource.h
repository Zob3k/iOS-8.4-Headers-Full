/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, PLAdditionalAssetAttributes, PLCloudMaster, NSDate, PLManagedAsset;

@interface PLCloudResource : PLManagedObject

@property (nonatomic,retain) NSString * assetUuid; 
@property (nonatomic,retain) NSString * filePath; 
@property (assign,nonatomic) long long fileSize; 
@property (nonatomic,retain) NSString * fingerprint; 
@property (assign,nonatomic) int height; 
@property (assign,nonatomic) char isAvailable; 
@property (assign,nonatomic) char isFlattened; 
@property (assign,nonatomic) char isLocallyAvailable; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSString * uniformTypeIdentifier; 
@property (assign,nonatomic) int width; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
@property (nonatomic,retain) PLCloudMaster * cloudMaster; 
@property (nonatomic,retain) NSDate * prunedAt; 
@property (nonatomic,retain) NSDate * lastOnDemandDownloadDate; 
@property (nonatomic,retain,readonly) PLManagedAsset * asset; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(void)markResource:(id)arg1 asLocallyAvailable:(char)arg2 inPhotoLibrary:(id)arg3 ;
+(id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3 adjusted:(char)arg4 ;
+(id)duplicateCloudResource:(id)arg1 forAsset:(id)arg2 withFilePath:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(id)allCloudResourcesInManagedObjectContext:(id)arg1 ;
+(long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1 ;
+(void)countNonLocalOriginalResourcesInLibrary:(id)arg1 outCount:(unsigned*)arg2 photoCount:(unsigned*)arg3 videoCount:(unsigned*)arg4 ;
-(id)description;
-(PLManagedAsset *)asset;
-(void)applyPropertiesFromCloudResource:(id)arg1 ;
-(void)_duplicatePropertiesFromCloudResource:(id)arg1 withFilePath:(id)arg2 forAssetUuid:(id)arg3 ;
-(id)cplResourceWithItemIdentifier:(id)arg1 includeFile:(char)arg2 ;
@end
