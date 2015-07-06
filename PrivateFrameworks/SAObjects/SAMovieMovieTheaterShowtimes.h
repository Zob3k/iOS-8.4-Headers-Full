/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, SALocalSearchBusiness2, NSString;

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * movieShowtimes; 
@property (nonatomic,copy) NSArray * showtimes; 
@property (nonatomic,retain) SALocalSearchBusiness2 * theater; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)movieTheaterShowtimes;
+(id)movieTheaterShowtimesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)movieShowtimes;
-(void)setMovieShowtimes:(NSArray *)arg1 ;
-(NSArray *)showtimes;
-(void)setShowtimes:(NSArray *)arg1 ;
-(SALocalSearchBusiness2 *)theater;
-(void)setTheater:(SALocalSearchBusiness2 *)arg1 ;
@end
