/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSCharacterSet, _HKCFGNonTerminal;

@interface _HKContextFreeGrammar : NSObject {

	NSMutableSet* _nonTerminals;
	NSMutableSet* _terminals;
	NSCharacterSet* _terminalCharacters;
	_HKCFGNonTerminal* _rootNonTerminal;
	/*^block*/id _emptyStringEvaluator;

}

@property (nonatomic,readonly) _HKCFGNonTerminal * rootNonTerminal;              //@synthesize rootNonTerminal=_rootNonTerminal - In the implementation block
@property (nonatomic,readonly) id emptyStringEvaluator;                          //@synthesize emptyStringEvaluator=_emptyStringEvaluator - In the implementation block
+(id)grammarWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(/*^block*/id)arg2 ;
+(id)grammarWithRootNonTerminal:(id)arg1 ;
-(id)initWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(/*^block*/id)arg2 ;
-(void)_gatherExpressions;
-(void)_gatherExpressionsStartingAt:(id)arg1 ;
-(id)parseTreeForString:(id)arg1 ;
-(_HKCFGNonTerminal *)rootNonTerminal;
-(id)emptyStringEvaluator;
-(void)invalidate;
@end
