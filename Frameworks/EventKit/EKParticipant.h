/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <EventKit/EKIdentityProtocol.h>
#import <EventKit/NSCopying.h>

@class EKCalendarItem, NSURL, NSString;

@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying> {

	EKCalendarItem* _owner;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int participantStatus; 
@property (nonatomic,readonly) int participantRole; 
@property (nonatomic,readonly) int participantType; 
@property (nonatomic,readonly) char isCurrentUser; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSURL * address; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,readonly) EKCalendarItem * owner;              //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void*)findABPersonByURL:(id)arg1 inAddressBook:(void*)arg2 ;
-(id)displayNameWithDecomposedFirstName:(id*)arg1 lastName:(id*)arg2 department:(id*)arg3 ;
-(id)displayName;
-(char)isCurrentUser;
-(id)_persistentItem;
-(int)participantRole;
-(char)isEqualToParticipant:(id)arg1 ;
-(void*)ABRecordWithAddressBook:(void*)arg1 ;
-(NSURL *)address;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(NSURL *)URL;
-(int)participantType;
-(int)participantStatus;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(EKCalendarItem *)owner;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setAddress:(NSURL *)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)comment;
@end

