/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSMutableOrderedSet;


@protocol PLUserEditableAlbumProtocol <PLAlbumProtocol>
@property (nonatomic,retain,readonly) NSMutableOrderedSet * userEditableAssets; 
@required
-(void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
-(NSMutableOrderedSet *)userEditableAssets;

@end

