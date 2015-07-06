/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class GEOPlace, GEOPDPlace, GEOMapItemClientAttributes, NSData, NSArray, GEOPDFlyover, NSString, NSURL, GEOMapItemPlaceAttribution, GEOMapItemPhotosAttribution, GEOMapItemReviewsAttribution, GEOFeatureStyleAttributes, GEOPDBusinessClaim;


@protocol GEOMapItemPrivate <GEOMapItem>
@property (getter=_place,nonatomic,readonly) GEOPlace * place; 
@property (getter=_placeData,nonatomic,readonly) GEOPDPlace * placeData; 
@property (getter=_clientAttributes,nonatomic,readonly) GEOMapItemClientAttributes * clientAttributes; 
@property (getter=_placeAsData,nonatomic,readonly) NSData * placeAsData; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) char hasResolvablePartialInformation; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_roadAccessPoints,nonatomic,readonly) NSArray * roadAccessPoints; 
@property (getter=_hasResultProviderID,nonatomic,readonly) char hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_hasFlyover,nonatomic,readonly) char hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_hasFlyoverAnnouncementMessage,nonatomic,readonly) char hasFlyoverAnnouncement; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncement; 
@property (getter=_hasMUID,nonatomic,readonly) char hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_hasAreaInMeters,nonatomic,readonly) char hasAreaInMeters; 
@property (getter=_areaInMeters,nonatomic,readonly) double areaInMeters; 
@property (getter=_businessURL,nonatomic,readonly) NSString * businessURL; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) char hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceRange,nonatomic,readonly) char hasPriceRange; 
@property (getter=_priceRange,nonatomic,readonly) unsigned priceRange; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) char hasAnyAmenities; 
@property (getter=_hasDeliveryAmenity,nonatomic,readonly) char hasDeliveryAmenity; 
@property (getter=_hasDelivery,nonatomic,readonly) char hasDelivery; 
@property (getter=_hasGoodForKidsAmenity,nonatomic,readonly) char hasGoodForKidsAmenity; 
@property (getter=_goodForKids,nonatomic,readonly) char goodForKids; 
@property (getter=_hasTakesReservationsAmenity,nonatomic,readonly) char hasTakesReservationsAmenity; 
@property (getter=_takesReservations,nonatomic,readonly) char takesReservations; 
@property (getter=_hasOperatingHours,nonatomic,readonly) char hasOperatingHours; 
@property (getter=_hasCurrentOperatingHours,nonatomic,readonly) char hasCurrentOperatingHours; 
@property (getter=_operatingHours,nonatomic,readonly) NSArray * operatingHours; 
@property (getter=_hasTelephone,nonatomic,readonly) char hasTelephone; 
@property (getter=_telephone,nonatomic,readonly) NSString * telephone; 
@property (getter=_disambiguationName,nonatomic,readonly) NSString * disambiguationName; 
@property (getter=_openingHoursOptions,nonatomic,readonly) unsigned openingHoursOptions; 
@property (getter=_needsAttribution,nonatomic,readonly) char needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_attribution,nonatomic,readonly) GEOMapItemPlaceAttribution * attribution; 
@property (getter=_photosAttribution,nonatomic,readonly) GEOMapItemPhotosAttribution * photosAttribution; 
@property (getter=_reviewsAttribution,nonatomic,readonly) GEOMapItemReviewsAttribution * reviewsAttribution; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_additionalPlaceInfos,nonatomic,readonly) NSArray * additionalPlaceInfos; 
@property (getter=_hasBusinessClaim,nonatomic,readonly) char hasBusinessClaim; 
@property (getter=_businessClaim,nonatomic,readonly) GEOPDBusinessClaim * businessClaim; 
@required
-(id)_roadAccessPoints;
-(id)_telephone;
-(char)_hasMUID;
-(unsigned long long)_muid;
-(char)_hasUserRatingScore;
-(unsigned)_sampleSizeForUserRatingScore;
-(float)_normalizedUserRatingScore;
-(char)_hasPriceRange;
-(unsigned)_priceRange;
-(id)_localizedCategoryNamesForType:(unsigned)arg1;
-(char)_hasLocalizedCategoryNamesForType:(unsigned)arg1;
-(char)_hasAnyAmenities;
-(char)_hasDeliveryAmenity;
-(char)_hasDelivery;
-(char)_hasGoodForKidsAmenity;
-(char)_goodForKids;
-(char)_hasTakesReservationsAmenity;
-(char)_takesReservations;
-(char)_hasOperatingHours;
-(id)_webURL;
-(id)_spokenAddressForLocale:(id)arg1;
-(int)_recommendedTransportType;
-(char)_hasTravelTimeForTransportType:(int)arg1;
-(unsigned)_travelTimeForTransportType:(int)arg1;
-(unsigned)_travelDistanceForTransportType:(int)arg1;
-(id)_arrivalMapRegionForTransportType:(int)arg1;
-(id)_asPlaceInfo;
-(id)_mapItemByStrippingOptionalData;
-(id)_placeData;
-(id)_clientAttributes;
-(id)_placeAsData;
-(id)_placeDataAsData;
-(char)_hasResolvablePartialInformation;
-(char)_hasResultProviderID;
-(int)_resultProviderID;
-(char)_hasFlyover;
-(char)_hasFlyoverAnnouncementMessage;
-(id)_flyoverAnnouncementMessage;
-(char)_hasAreaInMeters;
-(id)_businessURL;
-(char)_hasCurrentOperatingHours;
-(id)_operatingHours;
-(char)_hasTelephone;
-(id)_disambiguationName;
-(unsigned)_openingHoursOptions;
-(char)_needsAttribution;
-(id)_providerURL;
-(id)_vendorID;
-(id)_attribution;
-(id)_photosAttribution;
-(id)_reviewsAttribution;
-(id)_poiSurveyURLString;
-(unsigned long long)_customIconID;
-(char)_hasBusinessClaim;
-(id)_businessClaim;
-(int)_placeType;
-(id)_additionalPlaceInfos;
-(id)_place;
-(double)_areaInMeters;
-(id)_styleAttributes;
-(id)_flyover;

@end
