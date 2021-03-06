/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
@class TIInputMode, NSDate, NSString;

@interface TILanguageModelOfflineLearningHandle : NSObject {

	char _valid;
	TIInputMode* _inputMode;
	NSDate* _lastAdaptationDate;
	NSString* _currentAppContext;
	shared_ptr<KB::StaticDictionary>* _dictionary;
	shared_ptr<KB::LanguageModel>* _currentModel;

}

@property (nonatomic,readonly) TIInputMode * inputMode;                                   //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,readonly) shared_ptr<KB::StaticDictionary>* dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (assign,getter=isValid,nonatomic) char valid;                                   //@synthesize valid=_valid - In the implementation block
@property (nonatomic,copy) NSDate * lastAdaptationDate;                                   //@synthesize lastAdaptationDate=_lastAdaptationDate - In the implementation block
@property (assign,nonatomic) shared_ptr<KB::LanguageModel>* currentModel;                 //@synthesize currentModel=_currentModel - In the implementation block
@property (nonatomic,copy) NSString * currentAppContext;                                  //@synthesize currentAppContext=_currentAppContext - In the implementation block
-(void)dealloc;
-(shared_ptr<KB::StaticDictionary>*)dictionary;
-(char)isValid;
-(TIInputMode *)inputMode;
-(void)setValid:(char)arg1 ;
-(id)initWithInputMode:(id)arg1 ;
-(NSDate *)lastAdaptationDate;
-(void)setLastAdaptationDate:(NSDate *)arg1 ;
-(shared_ptr<KB::LanguageModel>*)currentModel;
-(void)setCurrentModel:(shared_ptr<KB::LanguageModel>*)arg1 ;
-(NSString *)currentAppContext;
-(void)setCurrentAppContext:(NSString *)arg1 ;
@end

