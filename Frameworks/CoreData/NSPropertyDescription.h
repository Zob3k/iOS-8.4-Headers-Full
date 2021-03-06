/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCoding.h>
#import <CoreData/NSCopying.h>

@class NSString, NSData, NSEntityDescription, NSArray, NSMutableDictionary, NSDictionary;

@interface NSPropertyDescription : NSObject <NSCoding, NSCopying> {

	NSString* _versionHashModifier;
	id _underlyingProperty;
	NSData* _versionHash;
	NSEntityDescription* _entity;
	NSString* _name;
	NSArray* _validationPredicates;
	NSArray* _validationWarnings;
	struct {
		unsigned _isReadOnly : 1;
		unsigned _isTransient : 1;
		unsigned _isOptional : 1;
		unsigned _isIndexed : 1;
		unsigned _skipValidation : 1;
		unsigned _isIndexedBySpotlight : 1;
		unsigned _isStoredInExternalRecord : 1;
		unsigned _extraIvarsAreInDataBlob : 1;
		unsigned _isOrdered : 1;
		unsigned _reservedPropertyDescription : 23;
	}  _propertyDescriptionFlags;
	void* _extraIvars;
	NSMutableDictionary* _userInfo;
	long _entitysReferenceIDForProperty;
	char _indexedBySpotlight;
	char _storedInExternalRecord;

}

@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,copy) NSString * name; 
@property (getter=isOptional) char optional; 
@property (getter=isTransient) char transient; 
@property (readonly) NSArray * validationPredicates; 
@property (readonly) NSArray * validationWarnings; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (getter=isIndexed) char indexed; 
@property (copy,readonly) NSData * versionHash; 
@property (copy) NSString * versionHashModifier; 
@property (getter=isIndexedBySpotlight) char indexedBySpotlight;                      //@synthesize indexedBySpotlight=_indexedBySpotlight - In the implementation block
@property (getter=isStoredInExternalRecord) char storedInExternalRecord;              //@synthesize storedInExternalRecord=_storedInExternalRecord - In the implementation block
@property (copy) NSString * renamingIdentifier; 
+(void)initialize;
-(char)_isRelationship;
-(long)_entitysReferenceID;
-(NSString *)renamingIdentifier;
-(unsigned)_propertyType;
-(NSData *)versionHash;
-(char)isOptional;
-(char)isIndexed;
-(void)setIndexed:(char)arg1 ;
-(NSExtraPropertyIVars*)_extraIVars;
-(void)_throwIfNotEditable;
-(NSArray *)validationPredicates;
-(NSArray *)validationWarnings;
-(id)_initWithName:(id)arg1 ;
-(id)_rawValidationPredicates;
-(id)_rawValidationWarnings;
-(char)_comparePredicatesAndWarnings:(id)arg1 ;
-(void)_createCachesAndOptimizeState;
-(void)_replaceValidationPredicates:(id)arg1 andWarnings:(id)arg2 ;
-(char)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4 ;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned)arg2 ;
-(void)_appendPropertyFieldsToData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 ;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(NSString *)versionHashModifier;
-(void)setRenamingIdentifier:(NSString *)arg1 ;
-(void)_setEntity:(id)arg1 ;
-(void)setVersionHashModifier:(NSString *)arg1 ;
-(void)setElementID:(id)arg1 ;
-(id)elementID;
-(char)_isEditable;
-(char)isIndexedBySpotlight;
-(char)isIndexedBySpotlight;
-(char)isStoredInExternalRecord;
-(char)isStoredInExternalRecord;
-(void)_setEntitysReferenceID:(long)arg1 ;
-(void)_stripForMigration;
-(void)_restoreValidation;
-(char)_skipValidation;
-(char)_isToManyRelationship;
-(char)_isOrdered;
-(void)_initializeExtraIVars;
-(void)setOptional:(char)arg1 ;
-(void)setTransient:(char)arg1 ;
-(void)setValidationPredicates:(id)arg1 withValidationWarnings:(id)arg2 ;
-(void)setIndexedBySpotlight:(char)arg1 ;
-(void)setIndexedBySpotlight:(char)arg1 ;
-(void)setStoredInExternalRecord:(char)arg1 ;
-(void)setStoredInExternalRecord:(char)arg1 ;
-(void)_setOrdered:(char)arg1 ;
-(char)isSpotlightIndexed;
-(void)setSpotlightIndexed:(char)arg1 ;
-(char)isStoredInTruthFile;
-(void)setStoredInTruthFile:(char)arg1 ;
-(char)isStoredInTruth;
-(void)setStoredInTruth:(char)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(char)isTransient;
-(void)setReadOnly:(char)arg1 ;
-(char)isReadOnly;
-(NSEntityDescription *)entity;
@end

