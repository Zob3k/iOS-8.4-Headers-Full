/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSURL, NSDate, NSString, NSNumber;

@interface PLCloudFeedEntry : PLManagedObject

@property (nonatomic,readonly) NSURL * URIRepresentation; 
@property (nonatomic,readonly) int entryType; 
@property (nonatomic,readonly) int entryPriority; 
@property (nonatomic,retain) NSDate * entryDate; 
@property (nonatomic,retain) NSString * entryAlbumGUID; 
@property (nonatomic,retain) NSString * entryInvitationRecordGUID; 
@property (nonatomic,retain) NSNumber * entryTypeNumber; 
@property (nonatomic,retain) NSNumber * entryPriorityNumber; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)allEntriesInManagedObjectContext:(id)arg1 ;
+(id)entriesSortDescriptorsAscending:(char)arg1 ;
+(id)allEntriesInLibrary:(id)arg1 ;
+(id)recentEntriesInLibrary:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 limit:(int)arg4 ;
+(id)recentAssetsEntriesInLibrary:(id)arg1 limit:(int)arg2 ;
+(id)firstEntryWithType:(int)arg1 albumGUID:(id)arg2 inLibrary:(id)arg3 ;
+(id)entryWithURIRepresentation:(id)arg1 inLibrary:(id)arg2 ;
-(NSURL *)URIRepresentation;
-(char)shouldBeRemovedFromPhotoLibrary:(id)arg1 ;
-(int)entryType;
-(int)entryPriority;
@end

