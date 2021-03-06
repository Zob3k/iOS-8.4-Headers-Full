/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SADistance, SADuration, NSString;

@interface SALocalSearchAceNavigationEta : AceObject <SAAceSerializable>

@property (nonatomic,retain) SADistance * distanceEta; 
@property (nonatomic,retain) SADuration * timeEta; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceNavigationEta;
+(id)aceNavigationEtaWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SADistance *)distanceEta;
-(void)setDistanceEta:(SADistance *)arg1 ;
-(SADuration *)timeEta;
-(void)setTimeEta:(SADuration *)arg1 ;
@end

