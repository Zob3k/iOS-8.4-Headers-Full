/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/AirTraffic-Structs.h>
#import <AirTraffic/NSSecureCoding.h>
#import <AirTraffic/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSError, ATSession;

@interface ATSessionTask : NSObject <NSSecureCoding, NSCopying> {

	char _finished;
	char _running;
	char _cancelled;
	NSString* _sessionTaskIdentifier;
	NSString* _sessionGroupingKey;
	NSString* _localizedDescription;
	unsigned _totalItemCount;
	unsigned _completedItemCount;
	NSArray* _currentItemDescriptions;
	NSArray* _currentItems;
	NSDictionary* _properties;
	NSError* _error;
	ATSession* _session;
	double _progress;

}

@property (copy) NSString * sessionTaskIdentifier;               //@synthesize sessionTaskIdentifier=_sessionTaskIdentifier - In the implementation block
@property (copy) NSString * sessionGroupingKey;                  //@synthesize sessionGroupingKey=_sessionGroupingKey - In the implementation block
@property (copy) NSString * localizedDescription;                //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign) double progress;                              //@synthesize progress=_progress - In the implementation block
@property (assign) unsigned totalItemCount;                      //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (assign) unsigned completedItemCount;                  //@synthesize completedItemCount=_completedItemCount - In the implementation block
@property (copy) NSArray * currentItemDescriptions;              //@synthesize currentItemDescriptions=_currentItemDescriptions - In the implementation block
@property (copy) NSArray * currentItems;                         //@synthesize currentItems=_currentItems - In the implementation block
@property (copy) NSDictionary * properties;                      //@synthesize properties=_properties - In the implementation block
@property (getter=isFinished) char finished;                     //@synthesize finished=_finished - In the implementation block
@property (getter=isRunning) char running;                       //@synthesize running=_running - In the implementation block
@property (getter=isCancelled) char cancelled;                   //@synthesize cancelled=_cancelled - In the implementation block
@property (copy) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (__weak) ATSession * session;                          //@synthesize session=_session - In the implementation block
+(char)supportsSecureCoding;
-(NSArray *)currentItems;
-(void)cancel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_start;
-(void)setProgress:(double)arg1 ;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(void)start;
-(NSString *)localizedDescription;
-(double)progress;
-(char)isRunning;
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)properties;
-(char)isFinished;
-(id)baseClassRepresentation;
-(NSString *)sessionTaskIdentifier;
-(void)setSessionTaskIdentifier:(NSString *)arg1 ;
-(void)setSessionGroupingKey:(NSString *)arg1 ;
-(NSArray *)currentItemDescriptions;
-(NSString *)sessionGroupingKey;
-(void)setCompletedItemCount:(unsigned)arg1 ;
-(void)setTotalItemCount:(unsigned)arg1 ;
-(unsigned)completedItemCount;
-(void)setCurrentItemDescriptions:(NSArray *)arg1 ;
-(void)setCurrentItems:(NSArray *)arg1 ;
-(void)setFinished:(char)arg1 ;
-(ATSession *)session;
-(NSError *)error;
-(void)setSession:(ATSession *)arg1 ;
-(unsigned)totalItemCount;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setRunning:(char)arg1 ;
@end
