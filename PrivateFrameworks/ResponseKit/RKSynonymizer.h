/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface RKSynonymizer : NSObject {

	NSString* _synonymLanguage;
	NSString* _keyboardLanguage;
	NSString* _context;
	NSDictionary* _synonymDictionary;
	NSDictionary* _wordIDDictionary;
	void* _model;

}
+(id)synonymLanguageForLanguage:(id)arg1 keyboardLanguage:(id)arg2 ;
+(id)synonymDictionaryForLanguage:(id)arg1 ;
+(id)wordIDDictionaryForLanguage:(id)arg1 ;
+(void*)createLanguageModelForLanguage:(id)arg1 context:(id)arg2 ;
+(id)synonymizerForLanguage:(id)arg1 keyboardLanguage:(id)arg2 context:(id)arg3 ;
-(void)dealloc;
-(id)initWithSynonymLanguage:(id)arg1 keyboardLanguage:(id)arg2 context:(id)arg3 synonymDictionary:(id)arg4 wordIDDictionary:(id)arg5 ;
-(char)scoreForString:(id)arg1 score:(double*)arg2 ;
-(id)synonymsForString:(id)arg1 ;
-(id)preferredSynonymFromSynonyms:(id)arg1 forString:(id)arg2 ;
-(id)synonymForString:(id)arg1 ;
@end

