/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/PHCollectionList.h>

@class NSDate;

@interface PHMomentList : PHCollectionList {

	short _granularityLevel;
	short _generationType;
	NSDate* _representativeDate;
	int _sortIndex;

}

@property (nonatomic,readonly) short granularityLevel;                   //@synthesize granularityLevel=_granularityLevel - In the implementation block
@property (nonatomic,readonly) NSDate * representativeDate;              //@synthesize representativeDate=_representativeDate - In the implementation block
@property (nonatomic,readonly) int sortIndex;                            //@synthesize sortIndex=_sortIndex - In the implementation block
@property (nonatomic,readonly) short generationType;                     //@synthesize generationType=_generationType - In the implementation block
+(id)managedEntityName;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 ;
+(id)entityKeyForPropertyKey:(id)arg1 ;
+(id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)propertiesToFetchWithHint:(unsigned)arg1 ;
+(char)managedObjectSupportsTrashedState;
+(id)identifierCode;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(int)collectionListType;
-(char)collectionHasFixedOrder;
-(id)description;
-(short)generationType;
-(short)granularityLevel;
-(int)sortIndex;
-(NSDate *)representativeDate;
-(char)isMeaningful;
@end
