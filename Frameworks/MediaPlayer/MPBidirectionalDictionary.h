/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/NSCopying.h>
#import <MediaPlayer/NSMutableCopying.h>
#import <MediaPlayer/NSCoding.h>

@class NSMutableDictionary;

@interface MPBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying, NSCoding> {

	NSMutableDictionary* _keyToObjectDictionary;
	NSMutableDictionary* _objectToKeyDictionary;

}
+(id)bidirectionalDictionary;
-(id)keyForObject:(id)arg1 ;
-(id)allKeys;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectForKey:(id)arg1 ;
@end

