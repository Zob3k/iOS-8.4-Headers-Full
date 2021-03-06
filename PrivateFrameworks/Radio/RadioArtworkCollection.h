/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/NSCopying.h>

@class NSArray;

@interface RadioArtworkCollection : NSObject <NSCopying> {

	NSArray* _artworks;

}

@property (nonatomic,readonly) NSArray * artworks;              //@synthesize artworks=_artworks - In the implementation block
-(id)artworkCatalog;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bestArtworkForPointSize:(CGSize)arg1 ;
-(id)_artworksBySortingArtworks:(id)arg1 ;
-(id)initWithArtworkVariants:(id)arg1 ;
-(id)initWithArtworks:(id)arg1 ;
-(NSArray *)artworks;
-(id)bestArtworkForPixelSize:(CGSize)arg1 ;
@end

