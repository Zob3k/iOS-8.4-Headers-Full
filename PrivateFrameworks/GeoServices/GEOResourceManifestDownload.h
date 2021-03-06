/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEODownloadMetadata, GEOResources;

@interface GEOResourceManifestDownload : PBCodable <NSCopying> {

	GEODownloadMetadata* _metadata;
	GEOResources* _resources;

}

@property (nonatomic,readonly) char hasResources; 
@property (nonatomic,retain) GEOResources * resources;                    //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) GEODownloadMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithResourceManifestData:(id)arg1 ;
-(char)hasResources;
-(void)setMetadata:(GEODownloadMetadata *)arg1 ;
-(GEODownloadMetadata *)metadata;
-(void)setResources:(GEOResources *)arg1 ;
-(GEOResources *)resources;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

