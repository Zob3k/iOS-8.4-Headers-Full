/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MRNowPlayingArtwork : NSObject

@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) char hasArtworkData; 
+(id)createNowPlayingArtworkFromXPCDictionary:(id)arg1 ;
-(unsigned)type;
-(char)hasArtworkData;
-(void)bindToXPCDictionary:(id)arg1 ;
-(id)copyImageData;
@end

