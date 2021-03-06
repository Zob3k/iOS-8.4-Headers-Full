/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/NSSecureCoding.h>

@class NSDictionary, NSStream;

@interface ATMessage : NSObject <NSSecureCoding> {

	unsigned _messageID;
	unsigned _sessionID;
	NSDictionary* _parameters;
	NSStream* _dataStream;
	double _timestamp;

}

@property (assign,nonatomic) unsigned messageID;                     //@synthesize messageID=_messageID - In the implementation block
@property (assign,nonatomic) unsigned sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSStream * dataStream;                  //@synthesize dataStream=_dataStream - In the implementation block
@property (assign,nonatomic) unsigned options; 
+(char)supportsSecureCoding;
-(id)initWithATPMessage:(id)arg1 ;
-(id)ATPMessage;
-(id)ATPMessageWithPayloadData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
-(id)additionalDescription;
-(void)setDataStream:(NSStream *)arg1 ;
-(NSStream *)dataStream;
-(id)parameterForKey:(id)arg1 ;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(void)setMessageID:(unsigned)arg1 ;
-(unsigned)messageID;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
@end

