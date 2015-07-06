/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSDictionary, NSArray;

@interface AFUserUtterance : NSObject {

	NSMutableArray* _phrases;
	NSMutableArray* _tokens;
	NSString* _text;
	NSDictionary* _correctionIdentifier;

}

@property (nonatomic,readonly) NSDictionary * correctionIdentifier;              //@synthesize correctionIdentifier=_correctionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * dictationResult; 
-(id)description;
-(id)bestTextInterpretation;
-(id)initWithPhrases:(id)arg1 correctionIdentifier:(id)arg2 ;
-(id)initWithTokens:(id)arg1 correctionIdentifier:(id)arg2 ;
-(id)initWithString:(id)arg1 correctionIdentifier:(id)arg2 ;
-(NSArray *)dictationResult;
-(id)streamingTokens;
-(NSDictionary *)correctionIdentifier;
@end
