/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAGKDomainObject.h>

@class NSArray, NSString;

@interface SAGKWebSearchDomainObject : SAGKDomainObject

@property (nonatomic,copy) NSArray * image; 
@property (nonatomic,copy) NSArray * linkedAnswerGroups; 
@property (nonatomic,copy) NSString * query; 
+(id)webSearchDomainObject;
+(id)webSearchDomainObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setImage:(NSArray *)arg1 ;
-(NSString *)query;
-(NSArray *)image;
-(void)setQuery:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSArray *)linkedAnswerGroups;
-(void)setLinkedAnswerGroups:(NSArray *)arg1 ;
@end
