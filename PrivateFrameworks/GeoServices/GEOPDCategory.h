/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOPDCategory : PBCodable <NSCopying> {

	NSString* _categoryId;
	int _level;
	NSMutableArray* _localizedNames;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasLevel; 
@property (assign,nonatomic) int level;                                    //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedNames;              //@synthesize localizedNames=_localizedNames - In the implementation block
@property (nonatomic,readonly) char hasCategoryId; 
@property (nonatomic,retain) NSString * categoryId;                        //@synthesize categoryId=_categoryId - In the implementation block
+(id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(id)categoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(char)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(id)dictionaryRepresentation;
-(char)hasLevel;
-(NSMutableArray *)localizedNames;
-(unsigned)localizedNamesCount;
-(void)setLocalizedNames:(NSMutableArray *)arg1 ;
-(void)clearLocalizedNames;
-(void)setCategoryId:(NSString *)arg1 ;
-(void)addLocalizedName:(id)arg1 ;
-(id)localizedNameAtIndex:(unsigned)arg1 ;
-(void)setHasLevel:(char)arg1 ;
-(char)hasCategoryId;
-(NSString *)categoryId;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
