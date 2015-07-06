/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSString;

@interface SCRCMathSimpleExpression : SCRCMathExpression {

	NSString* _content;

}

@property (nonatomic,copy) NSString * content;              //@synthesize content=_content - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(int)integerValue;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(char)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned)arg1 treePosition:(id)arg2 ;
-(id)latexMathModeDescription;
-(char)canBeUsedWithBase;
-(char)isInteger;
-(char)isFunctionName;
-(char)isWordOrAbbreviation;
-(id)_functionNames;
@end
