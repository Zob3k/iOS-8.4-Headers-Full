/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityValueProviding.h>

@class NSMutableDictionary, UIImage, MusicProductDescription, NSString;

@interface MusicPlaylistEditingEntityValueProvider : NSObject <MusicEntityValueProviding> {

	NSMutableDictionary* _properties;
	UIImage* _artworkImage;

}

@property (nonatomic,retain) UIImage * artworkImage;                                  //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,copy) MusicProductDescription * productDescription; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setProductDescription:(MusicProductDescription *)arg1 ;
-(MusicProductDescription *)productDescription;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(float)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valuesForEntityProperties:(id)arg1 ;
@end

