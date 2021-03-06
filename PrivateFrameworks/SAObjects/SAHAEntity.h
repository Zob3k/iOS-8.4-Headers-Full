/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAHAEntity : SADomainObject

@property (nonatomic,copy) NSString * entityType; 
@property (nonatomic,copy) NSString * home; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * room; 
@property (nonatomic,copy) NSString * serviceType; 
@property (nonatomic,copy) NSString * zone; 
+(id)entity;
+(id)entityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)entityType;
-(NSString *)zone;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(NSString *)home;
-(void)setHome:(NSString *)arg1 ;
-(NSString *)room;
-(void)setRoom:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(void)setZone:(NSString *)arg1 ;
-(void)setEntityType:(NSString *)arg1 ;
@end

