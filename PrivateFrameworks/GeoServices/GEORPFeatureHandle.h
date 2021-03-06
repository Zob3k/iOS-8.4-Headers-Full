/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEORPFeatureHandle : PBCodable <NSCopying> {

	SCD_Struct_GE76* _styleAttributes;
	unsigned _styleAttributesCount;
	unsigned _styleAttributesSpace;
	unsigned _featureIndex;
	unsigned _featureTileX;
	unsigned _featureTileY;
	unsigned _featureTileZ;
	unsigned _identifier;
	int _style;
	int _type;
	SCD_Struct_GE59 _has;

}

@property (assign,nonatomic) char hasFeatureIndex; 
@property (assign,nonatomic) unsigned featureIndex;                           //@synthesize featureIndex=_featureIndex - In the implementation block
@property (assign,nonatomic) char hasFeatureTileX; 
@property (assign,nonatomic) unsigned featureTileX;                           //@synthesize featureTileX=_featureTileX - In the implementation block
@property (assign,nonatomic) char hasFeatureTileY; 
@property (assign,nonatomic) unsigned featureTileY;                           //@synthesize featureTileY=_featureTileY - In the implementation block
@property (assign,nonatomic) char hasFeatureTileZ; 
@property (assign,nonatomic) unsigned featureTileZ;                           //@synthesize featureTileZ=_featureTileZ - In the implementation block
@property (assign,nonatomic) char hasStyle; 
@property (assign,nonatomic) int style;                                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) char hasIdentifier; 
@property (assign,nonatomic) unsigned identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned styleAttributesCount; 
@property (nonatomic,readonly) SCD_Struct_GE76* styleAttributes; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)setStyle:(int)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasIdentifier;
-(unsigned)styleAttributesCount;
-(void)clearStyleAttributes;
-(void)setFeatureIndex:(unsigned)arg1 ;
-(void)setHasIdentifier:(char)arg1 ;
-(SCD_Struct_GE76)styleAttributeAtIndex:(unsigned)arg1 ;
-(void)addStyleAttribute:(SCD_Struct_GE76)arg1 ;
-(void)setHasFeatureIndex:(char)arg1 ;
-(char)hasFeatureIndex;
-(void)setFeatureTileX:(unsigned)arg1 ;
-(void)setHasFeatureTileX:(char)arg1 ;
-(char)hasFeatureTileX;
-(void)setFeatureTileY:(unsigned)arg1 ;
-(void)setHasFeatureTileY:(char)arg1 ;
-(char)hasFeatureTileY;
-(void)setFeatureTileZ:(unsigned)arg1 ;
-(void)setHasFeatureTileZ:(char)arg1 ;
-(char)hasFeatureTileZ;
-(void)setStyleAttributes:(SCD_Struct_GE76*)arg1 count:(unsigned)arg2 ;
-(unsigned)featureTileX;
-(unsigned)featureTileY;
-(unsigned)featureTileZ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SCD_Struct_GE76*)styleAttributes;
-(unsigned)featureIndex;
-(void)setHasStyle:(char)arg1 ;
-(char)hasStyle;
@end

