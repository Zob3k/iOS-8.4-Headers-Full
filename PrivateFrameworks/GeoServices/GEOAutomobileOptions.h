/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOAutomobileOptions : PBCodable <NSCopying> {

	char _includeHistoricTravelTime;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) char includeHistoricTravelTime;                 //@synthesize includeHistoricTravelTime=_includeHistoricTravelTime - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIncludeHistoricTravelTime:(char)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(char)arg1 ;
-(char)hasIncludeHistoricTravelTime;
-(char)includeHistoricTravelTime;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
