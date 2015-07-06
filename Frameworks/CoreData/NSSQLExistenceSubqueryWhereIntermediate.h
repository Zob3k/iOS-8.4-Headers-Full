/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLWhereIntermediate.h>

@class NSExpression, NSString, NSSQLProperty, NSSQLEntity;

@interface NSSQLExistenceSubqueryWhereIntermediate : NSSQLWhereIntermediate {

	NSExpression* _subqueryExpression;
	NSExpression* _variableExpression;
	NSString* _variableAlias;
	NSSQLProperty* _collectionProperty;
	NSSQLEntity* _governingEntityForVariable;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 inScope:(id)arg2 ;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(char)_isKeypathScopedToSubquery:(id)arg1 ;
-(char)isExistenceScoped;
@end
