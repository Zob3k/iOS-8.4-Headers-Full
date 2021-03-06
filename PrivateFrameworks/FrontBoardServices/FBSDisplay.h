/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/BSXPCCoding.h>
#import <FrontBoardServices/NSCopying.h>
#import <FrontBoardServices/NSSecureCoding.h>

@class CADisplay, NSString;

@interface FBSDisplay : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {

	CADisplay* _caDisplay;
	float _scale;
	unsigned _type;
	int _tags;
	unsigned _seed;
	CGRect _referenceBounds;

}

@property (nonatomic,retain,readonly) CADisplay * caDisplay;              //@synthesize caDisplay=_caDisplay - In the implementation block
@property (assign,nonatomic) float scale;                                 //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) float orientation; 
@property (assign,nonatomic) CGRect referenceBounds;                      //@synthesize referenceBounds=_referenceBounds - In the implementation block
@property (nonatomic,readonly) unsigned type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int tags;                                  //@synthesize tags=_tags - In the implementation block
@property (assign,nonatomic) unsigned seed;                               //@synthesize seed=_seed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)_CADisplayForId:(unsigned)arg1 ;
-(id)_screen;
-(void)setSeed:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)initWithCADisplay:(id)arg1 isMainDisplay:(char)arg2 ;
-(char)isMainDisplay;
-(float)orientation;
-(float)scale;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isCarDisplay;
-(CADisplay *)caDisplay;
-(void)setScale:(float)arg1 ;
-(int)tags;
-(char)isWatchOnlyDisplay;
-(unsigned)seed;
-(char)isExternal;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)_nameForDisplayType;
-(char)isHiddenDisplay;
-(char)isAirPlayDisplay;
-(id)initWithCADisplay:(id)arg1 isMainDisplay:(char)arg2 seed:(unsigned)arg3 tags:(int)arg4 scale:(float)arg5 ;
-(unsigned)_typeFromTags:(unsigned)arg1 ;
-(char)isiPodOnlyDisplay;
-(char)isMusicOnlyDisplay;
-(id)initWithCADisplay:(id)arg1 ;
-(CGRect)referenceBounds;
-(void)setReferenceBounds:(CGRect)arg1 ;
-(char)isConnected;
-(void)setConnected:(char)arg1 ;
@end

