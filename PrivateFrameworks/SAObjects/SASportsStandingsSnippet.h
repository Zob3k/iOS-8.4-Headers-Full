/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASportsSnippet.h>

@class NSArray;

@interface SASportsStandingsSnippet : SASportsSnippet

@property (nonatomic,copy) NSArray * columns; 
@property (nonatomic,copy) NSArray * entities; 
@property (nonatomic,copy) NSArray * selectedEntities; 
@property (assign,nonatomic) char showCardinalPositions; 
+(id)standingsSnippet;
+(id)standingsSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setEntities:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
-(NSArray *)entities;
-(id)encodedClassName;
-(NSArray *)selectedEntities;
-(void)setSelectedEntities:(NSArray *)arg1 ;
-(char)showCardinalPositions;
-(void)setShowCardinalPositions:(char)arg1 ;
@end
