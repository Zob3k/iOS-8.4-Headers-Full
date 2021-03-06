/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface IKPlayerStateChangeInfo : NSObject {

	NSDictionary* _jsonValue;
	int _state;
	int _oldState;

}

@property (nonatomic,copy) NSDictionary * jsonValue;              //@synthesize jsonValue=_jsonValue - In the implementation block
@property (nonatomic,readonly) int state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) int oldState;                      //@synthesize oldState=_oldState - In the implementation block
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double elapsedTime; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(int)state;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)elapsedTime;
-(id)initWithState:(int)arg1 ;
-(id)_stateNameForState:(int)arg1 ;
-(NSDictionary *)jsonValue;
-(void)setJsonValue:(NSDictionary *)arg1 ;
-(id)initWithState:(int)arg1 oldState:(int)arg2 ;
-(int)oldState;
-(void)setElapsedTime:(double)arg1 ;
@end

