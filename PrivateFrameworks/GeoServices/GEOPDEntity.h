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

@class NSMutableArray, NSString;

@interface GEOPDEntity : PBCodable <NSCopying> {

	NSMutableArray* _altFaxs;
	NSMutableArray* _altTelephones;
	NSMutableArray* _altUrls;
	NSString* _fax;
	NSMutableArray* _localizedCategorys;
	NSMutableArray* _names;
	NSMutableArray* _spokenNames;
	NSString* _telephone;
	int _type;
	NSString* _url;
	char _isDisputed;
	char _isPermanentlyClosed;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasTelephone; 
@property (nonatomic,retain) NSString * telephone;                             //@synthesize telephone=_telephone - In the implementation block
@property (nonatomic,retain) NSMutableArray * altTelephones;                   //@synthesize altTelephones=_altTelephones - In the implementation block
@property (nonatomic,readonly) char hasFax; 
@property (nonatomic,retain) NSString * fax;                                   //@synthesize fax=_fax - In the implementation block
@property (nonatomic,retain) NSMutableArray * altFaxs;                         //@synthesize altFaxs=_altFaxs - In the implementation block
@property (nonatomic,readonly) char hasUrl; 
@property (nonatomic,retain) NSString * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSMutableArray * altUrls;                         //@synthesize altUrls=_altUrls - In the implementation block
@property (assign,nonatomic) char hasIsPermanentlyClosed; 
@property (assign,nonatomic) char isPermanentlyClosed;                         //@synthesize isPermanentlyClosed=_isPermanentlyClosed - In the implementation block
@property (assign,nonatomic) char hasIsDisputed; 
@property (assign,nonatomic) char isDisputed;                                  //@synthesize isDisputed=_isDisputed - In the implementation block
@property (nonatomic,retain) NSMutableArray * names;                           //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenNames;                     //@synthesize spokenNames=_spokenNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedCategorys;              //@synthesize localizedCategorys=_localizedCategorys - In the implementation block
+(id)entityForPlaceData:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)url;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTelephone:(NSString *)arg1 ;
-(char)hasTelephone;
-(NSString *)telephone;
-(char)isDisputed;
-(void)setIsDisputed:(char)arg1 ;
-(void)setHasIsDisputed:(char)arg1 ;
-(char)hasIsDisputed;
-(char)hasUrl;
-(char)hasIsPermanentlyClosed;
-(char)isPermanentlyClosed;
-(NSMutableArray *)localizedCategorys;
-(unsigned)namesCount;
-(id)bestLocalizedName;
-(unsigned)spokenNamesCount;
-(id)spokenNameAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)altTelephones;
-(NSMutableArray *)spokenNames;
-(NSMutableArray *)names;
-(void)setAltTelephones:(NSMutableArray *)arg1 ;
-(void)setFax:(NSString *)arg1 ;
-(void)setAltFaxs:(NSMutableArray *)arg1 ;
-(void)setAltUrls:(NSMutableArray *)arg1 ;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)setSpokenNames:(NSMutableArray *)arg1 ;
-(void)setLocalizedCategorys:(NSMutableArray *)arg1 ;
-(void)addAltTelephone:(id)arg1 ;
-(void)addAltFax:(id)arg1 ;
-(void)addAltUrl:(id)arg1 ;
-(void)addName:(id)arg1 ;
-(void)addSpokenName:(id)arg1 ;
-(void)addLocalizedCategory:(id)arg1 ;
-(unsigned)altTelephonesCount;
-(void)clearAltTelephones;
-(id)altTelephoneAtIndex:(unsigned)arg1 ;
-(unsigned)altFaxsCount;
-(void)clearAltFaxs;
-(id)altFaxAtIndex:(unsigned)arg1 ;
-(unsigned)altUrlsCount;
-(void)clearAltUrls;
-(id)altUrlAtIndex:(unsigned)arg1 ;
-(void)clearNames;
-(id)nameAtIndex:(unsigned)arg1 ;
-(void)clearSpokenNames;
-(unsigned)localizedCategorysCount;
-(void)clearLocalizedCategorys;
-(id)localizedCategoryAtIndex:(unsigned)arg1 ;
-(char)hasFax;
-(void)setIsPermanentlyClosed:(char)arg1 ;
-(void)setHasIsPermanentlyClosed:(char)arg1 ;
-(NSString *)fax;
-(NSMutableArray *)altFaxs;
-(NSMutableArray *)altUrls;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
