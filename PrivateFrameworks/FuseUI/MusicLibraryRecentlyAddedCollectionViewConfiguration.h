/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryAlbumsCollectionViewConfiguration.h>

@interface MusicLibraryRecentlyAddedCollectionViewConfiguration : MusicLibraryAlbumsCollectionViewConfiguration {

	unsigned _entityLimit;

}

@property (nonatomic,readonly) unsigned entityLimit;              //@synthesize entityLimit=_entityLimit - In the implementation block
+(unsigned)defaultEntityLimit;
-(id)init;
-(id)loadEntityViewDescriptor;
-(id)initWithEntityLimit:(unsigned)arg1 ;
-(id)initForMainAlbumsList:(char)arg1 includeCompilations:(char)arg2 ;
-(unsigned)entityLimit;
@end

