/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ML3ArtworkConfiguration;

@interface MPArtworkConfiguration : NSObject {

	ML3ArtworkConfiguration* _artworkConfiguration;

}

@property (nonatomic,retain) ML3ArtworkConfiguration * artworkConfiguration;              //@synthesize artworkConfiguration=_artworkConfiguration - In the implementation block
+(id)systemConfiguration;
-(void)setArtworkConfiguration:(ML3ArtworkConfiguration *)arg1 ;
-(ML3ArtworkConfiguration *)artworkConfiguration;
-(id)description;
-(id)sizesToAutogenerateForMediaType:(unsigned)arg1 artworkType:(int)arg2 ;
-(id)initWithConfigurationDictionaries:(id)arg1 ;
-(id)supportedSizesForMediaType:(unsigned)arg1 artworkType:(int)arg2 ;
@end
