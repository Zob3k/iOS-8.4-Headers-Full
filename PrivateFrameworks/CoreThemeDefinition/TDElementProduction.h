/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class TDRenditionKeySpec, TDRenditionType, TDThemeConstant, NSString, NSDate, NSNumber, NSSet, TDNamedElement, TDSchemaPartDefinition;

@interface TDElementProduction : NSManagedObject

@property (nonatomic,retain) TDRenditionKeySpec * baseKeySpec; 
@property (nonatomic,retain) TDRenditionType * renditionType; 
@property (nonatomic,retain) TDThemeConstant * renditionSubtype; 
@property (nonatomic,retain) TDThemeConstant * zeroCodeArtworkInfo; 
@property (nonatomic,retain) NSString * comment; 
@property (nonatomic,retain) NSDate * dateOfLastChange; 
@property (nonatomic,retain) NSNumber * isExcludedFromFilter; 
@property (nonatomic,retain) TDThemeConstant * artworkDraftType; 
@property (nonatomic,retain) NSSet * renditions; 
@property (nonatomic,retain) TDNamedElement * name; 
@property (nonatomic,retain) TDSchemaPartDefinition * partDefinition; 
-(id)associatedFileModificationDateWithDocument:(id)arg1 ;
-(id)associatedFileURLWithDocument:(id)arg1 ;
-(void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(char)arg2 ;
-(id)relativePath;
@end

