/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAObjects-Structs.h>
#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SATextDecorationRegion : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * length; 
@property (nonatomic,copy) NSString * property; 
@property (nonatomic,copy) NSNumber * start; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textDecorationRegion;
+(id)textDecorationRegionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSRange)siriui_range;
-(id)groupIdentifier;
-(NSNumber *)length;
-(void)setLength:(NSNumber *)arg1 ;
-(NSNumber *)start;
-(void)setStart:(NSNumber *)arg1 ;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(id)encodedClassName;
@end
