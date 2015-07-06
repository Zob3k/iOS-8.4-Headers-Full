/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUICacheCoding.h>

@class NSDictionary, NSMutableArray, NSArray, NSURL, NSString, NSMutableDictionary;

@interface SKUIReviewList : NSObject <SKUICacheCoding> {

	NSDictionary* _dictionary;
	NSMutableArray* _reviews;

}

@property (nonatomic,readonly) NSArray * reviews;                                      //@synthesize reviews=_reviews - In the implementation block
@property (nonatomic,readonly) int numberOfPages; 
@property (nonatomic,readonly) int ratingCount; 
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) int fiveStarRatingCount; 
@property (nonatomic,readonly) int fourStarRatingCount; 
@property (nonatomic,readonly) int oneStarRatingCount; 
@property (nonatomic,readonly) int threeStarRatingCount; 
@property (nonatomic,readonly) int twoStarRatingCount; 
@property (nonatomic,readonly) NSURL * writeReviewURL; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(int)numberOfPages;
-(NSArray *)reviews;
-(float)userRating;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(NSURL *)writeReviewURL;
-(id)initWithReviewListDictionary:(id)arg1 ;
-(void)addReviews:(id)arg1 ;
-(int)fiveStarRatingCount;
-(int)fourStarRatingCount;
-(int)oneStarRatingCount;
-(int)ratingCount;
-(int)threeStarRatingCount;
-(int)twoStarRatingCount;
@end
