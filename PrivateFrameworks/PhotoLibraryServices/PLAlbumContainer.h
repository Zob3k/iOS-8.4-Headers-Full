/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol PLAlbumContainer <PLAssetContainerList>
@property (nonatomic,readonly) unsigned albumsCount; 
@property (nonatomic,readonly) char isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@required
-(id)identifier;
-(id)albums;
-(char)isFolder;
-(unsigned)albumsCount;
-(NSString *)_prettyDescription;
-(int)filter;
-(short)albumListType;
-(NSString *)_typeDescription;
-(char)hasAtLeastOneAlbum;
-(char)canEditAlbums;
-(id)albumsSortingComparator;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
-(char)albumHasFixedOrder:(NSObject*)arg1;
-(void)setNeedsReordering;
-(char)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
-(unsigned)unreadAlbumsCount;

@end

