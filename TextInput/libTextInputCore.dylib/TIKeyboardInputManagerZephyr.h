/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManager.h>
#import <libTextInputCore.dylib/TIRevisionHistoryDelegate.h>

@class NSMutableString, TIKeyboardInputManagerConfig, CPLRUDictionary, TITextCheckerExemptions, NSCharacterSet, TIRevisionHistory, TIAutoshiftRegularExpressionLoader, NSString;

@interface TIKeyboardInputManagerZephyr : TIKeyboardInputManager <TIRevisionHistoryDelegate> {

	TIInputManagerZephyr* m_impl;
	NSMutableString* m_composedText;
	unsigned m_initialSelectedIndex;
	shared_ptr<KB::TypologyLogger>* m_typology_recorder;
	char _isEditingWordPrefix;
	char _wordLearningEnabled;
	TIKeyboardInputManagerConfig* _config;
	CPLRUDictionary* _autocorrectionHistory;
	CPLRUDictionary* _rejectedAutocorrections;
	CPLRUDictionary* _autocorrectionsSuggestedForCurrentInput;
	TITextCheckerExemptions* _textCheckerExemptions;
	USetRef _acceptableCharacterSet;
	NSCharacterSet* _allowPredictionCharacterSet;
	TIRevisionHistory* _revisionHistory;
	TIAutoshiftRegularExpressionLoader* _autoshiftRegexLoader;

}

@property (nonatomic,readonly) TIKeyboardInputManagerConfig * config;                                  //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) TIRevisionHistory * revisionHistory;                                    //@synthesize revisionHistory=_revisionHistory - In the implementation block
@property (nonatomic,readonly) CPLRUDictionary * autocorrectionHistory;                                //@synthesize autocorrectionHistory=_autocorrectionHistory - In the implementation block
@property (nonatomic,readonly) CPLRUDictionary * rejectedAutocorrections;                              //@synthesize rejectedAutocorrections=_rejectedAutocorrections - In the implementation block
@property (nonatomic,readonly) CPLRUDictionary * autocorrectionsSuggestedForCurrentInput;              //@synthesize autocorrectionsSuggestedForCurrentInput=_autocorrectionsSuggestedForCurrentInput - In the implementation block
@property (assign,getter=isWordLearningEnabled,nonatomic) char wordLearningEnabled;                    //@synthesize wordLearningEnabled=_wordLearningEnabled - In the implementation block
@property (assign,nonatomic) char isEditingWordPrefix;                                                 //@synthesize isEditingWordPrefix=_isEditingWordPrefix - In the implementation block
@property (nonatomic,retain) TIAutoshiftRegularExpressionLoader * autoshiftRegexLoader;                //@synthesize autoshiftRegexLoader=_autoshiftRegexLoader - In the implementation block
@property (nonatomic,readonly) TITextCheckerExemptions * textCheckerExemptions;                        //@synthesize textCheckerExemptions=_textCheckerExemptions - In the implementation block
@property (nonatomic,readonly) USetRef acceptableCharacterSet;                                         //@synthesize acceptableCharacterSet=_acceptableCharacterSet - In the implementation block
@property (nonatomic,readonly) NSCharacterSet * allowPredictionCharacterSet;                           //@synthesize allowPredictionCharacterSet=_allowPredictionCharacterSet - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInput:(id)arg1 ;
-(void)dealloc;
-(void)suspend;
-(char)usesCandidateSelection;
-(id)candidateResultSet;
-(unsigned)initialSelectedIndex;
-(id)autocorrection;
-(void)clearInput;
-(void)setWordLearningEnabled:(char)arg1 ;
-(unsigned)inputCount;
-(id)inputString;
-(void)textAccepted:(id)arg1 ;
-(unsigned)inputIndex;
-(void)resume;
-(char)nextInputWouldStartSentence;
-(id)shadowTyping;
-(void)setOriginalInput:(id)arg1 ;
-(id)defaultCandidate;
-(void)setInHardwareKeyboardMode:(char)arg1 ;
-(void)candidateRejected:(id)arg1 ;
-(id)autocorrectionRecordForWord:(id)arg1 ;
-(void)setKeyboardEventsLagging:(char)arg1 ;
-(char)canHandleKeyHitTest;
-(char)needsKeyHitTestResults;
-(int)keyHitTest:(id)arg1 ;
-(id)autocorrectionList;
-(TIKeyboardInputManagerConfig *)config;
-(id)initWithInputMode:(id)arg1 ;
-(id)humanReadableTrace;
-(void)clearHumanReadableTrace;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(void)incrementUnigramCount:(id)arg1 usageFlags:(unsigned)arg2 ;
-(void)incrementLanguageModelCount:(unsigned)arg1 context:(const unsigned*)arg2 contextLength:(unsigned long)arg3 ;
-(void)decrementUnigramCount:(id)arg1 usageFlags:(unsigned)arg2 ;
-(void)decrementLanguageModelCount:(unsigned)arg1 context:(const unsigned*)arg2 contextLength:(unsigned long)arg3 ;
-(unsigned)tokenIDForWord:(id)arg1 context:(const unsigned*)arg2 contextLength:(unsigned long)arg3 createIfNecessary:(char)arg4 ;
-(TIInputManagerZephyr*)initImplementation;
-(char)usesRetrocorrection;
-(void)loadDictionaries;
-(char)doesComposeText;
-(void)deltaPathsChanged:(id)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(TIRevisionHistory *)revisionHistory;
-(TITextCheckerExemptions *)textCheckerExemptions;
-(void)setCollatorLocale;
-(void)syncToKeyboardState:(id)arg1 afterContextChange:(char)arg2 ;
-(char)updateLanguageModelForKeyboardState;
-(void)loadFavoniusLanguageModel;
-(void)installTypologyTraceLogger;
-(void)refreshInputManagerState;
-(id)internalStringToExternal:(id)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(char)dictionaryUsesExternalEncoding;
-(id)pathToDeltaStaticDictionary;
-(void)updateComposedText;
-(void)setAutoshiftFromInputContext;
-(unsigned)simulateAutoshiftIfNecessaryForFlags:(unsigned)arg1 ;
-(void)dropInput;
-(void)dropInputPrefix:(unsigned)arg1 ;
-(char)hasLegacyInputStem;
-(char)canStartSentenceAfterString:(id)arg1 ;
-(char)acceptsRange:(NSRange)arg1 inString:(id)arg2 ;
-(NSRange)acceptableRangeFromRange:(NSRange)arg1 inText:(id)arg2 withSelectionLocation:(unsigned)arg3 ;
-(NSRange)legacyInputRangeForTokenRange:(NSRange)arg1 ;
-(NSRange)inputStringRangeFromRevisionHistory;
-(void)setInputIndex:(unsigned)arg1 ;
-(void)updateInputContext;
-(char)canComputeSentenceContextForInputStem:(id)arg1 ;
-(char)shouldAllowContextTokenID:(unsigned)arg1 ;
-(id)inputStem;
-(unsigned)externalIndexToInternal:(unsigned)arg1 ;
-(id)trimmedInputStem;
-(unsigned)internalIndexOfInputStemSuffix:(id)arg1 ;
-(char)canRetrocorrectInputAtIndex:(unsigned)arg1 ;
-(char)canTrimInputAtIndex:(unsigned)arg1 ;
-(char)shouldDropInputStem;
-(CPLRUDictionary *)autocorrectionsSuggestedForCurrentInput;
-(void)checkAutocorrectionDictionaries;
-(void)updateForRevisitedString:(id)arg1 ;
-(LanguageModelContext*)sentenceContextForInputStem:(id)arg1 ;
-(unsigned)internalIndexToExternal:(unsigned)arg1 ;
-(void)recordAcceptedAutocorrection:(id)arg1 ;
-(void)recordRejectedAutocorrectionForAcceptedText:(id)arg1 ;
-(char)shouldAllowCorrectionOfAcceptedCandidate:(id)arg1 ;
-(char)isWordLearningEnabled;
-(char)shouldSuppressLearning;
-(id)dictionaryStringForExternalString:(id)arg1 ;
-(void)acceptInput;
-(CPLRUDictionary *)autocorrectionHistory;
-(CPLRUDictionary *)rejectedAutocorrections;
-(id)nonstopPunctuationCharacters;
-(char)nextInputWouldStartSentenceAfterInput:(id)arg1 ;
-(TIAutoshiftRegularExpressionLoader *)autoshiftRegexLoader;
-(id)sentenceDelimitingCharacters;
-(id)sentenceTrailingCharacters;
-(id)sentencePrefixingCharacters;
-(void)setAutoshiftRegexLoader:(TIAutoshiftRegularExpressionLoader *)arg1 ;
-(id)inputContext;
-(unsigned)prefixLengthOfInput:(id)arg1 sharedWithCandidate:(const Candidate*)arg2 ;
-(char)isEditingExistingWord;
-(id)phraseCandidateCompletedByWord:(const String*)arg1 allowNoSuggest:(char)arg2 ;
-(id)autocorrectionCandidateForInput:(id)arg1 withCandidate:(const Candidate*)arg2 ;
-(void)recordSuggestedAutocorrection:(id)arg1 ;
-(id)autocorrectionCandidateForInput:(id)arg1 withCandidate:(const Candidate*)arg2 insertingSpace:(char)arg3 sharedPrefixLength:(unsigned)arg4 ;
-(char)shouldSkipShortcutConversionForDocumentState:(id)arg1 ;
-(NSRange)shortcutSearchRangeForString:(id)arg1 ;
-(void)enumerateWordSuffixesOfString:(id)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)shortcutConversionForString:(id)arg1 stringStartsInMiddleOfWord:(char)arg2 ;
-(id)cannedResponsesToString:(id)arg1 ;
-(char)suggestionBlacklistMatchesStrings:(id)arg1 ;
-(char)spaceAndNextInputWouldStartSentence;
-(id)terminatorsPrecedingAutospace;
-(char)shouldInsertSpaceBeforePredictions;
-(char)shouldAutocapitalizePredictionAfterSpace;
-(id)cannedResponseCandidatesForString:(id)arg1 ;
-(id)indexesOfDuplicatesInCandidates:(id)arg1 ;
-(id)predictionCandidates;
-(NSCharacterSet *)allowPredictionCharacterSet;
-(char)shouldGenerateSuggestionsForSelectedText;
-(id)autocorrectionListForSelectedText;
-(char)shouldGeneratePredictionsForCurrentContext;
-(id)autocorrectionListForEmptyInputWithDesiredCandidateCount:(unsigned)arg1 ;
-(id)completionCandidates;
-(id)topCandidate;
-(id)extendedAutocorrection:(id)arg1 spanningInputsForCandidates:(id)arg2 ;
-(USetRef)createAcceptableCharacterSet;
-(char)acceptsCharacter:(unsigned long)arg1 ;
-(void)setLearnsCorrection:(char)arg1 ;
-(char)inHardwareKeyboardMode;
-(void)clearDynamicDictionary;
-(void)releaseDynamicLanguageModel;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned*)arg4 fromVariantKey:(char)arg5 ;
-(char)hasLegacyInputString;
-(void)setInputStringFromDocumentState:(id)arg1 ;
-(void)trimInput;
-(id)deleteFromInput:(unsigned*)arg1 ;
-(id)internalInputContext;
-(unsigned)tokenIDForWordSeparator:(unsigned short)arg1 ;
-(char)shouldExpectSentenceBoundaryAfterContext:(const unsigned*)arg1 contextLength:(unsigned long)arg2 ;
-(char)shouldAddModifierSymbolsToWordCharacters;
-(id)wordCharacters;
-(unsigned)prefixLengthOfInput:(id)arg1 sharedWithCandidates:(const vector<KB::Candidate, std::__1::allocator<KB::Candidate> >*)arg2 ;
-(id)terminatorsPreventingAutocorrection;
-(id)terminatorsDeletingAutospace;
-(char)supportsShortcutConversion;
-(unsigned)maximumShortcutLengthAllowed;
-(id)shortcutCompletionsForDocumentState:(id)arg1 ;
-(id)shortcutConversionForDocumentState:(id)arg1 ;
-(id)shortcutConversionForInput:(id)arg1 andExistingString:(id)arg2 existingStringStartsInMiddleOfWord:(char)arg3 ;
-(id)candidatesForString:(id)arg1 ;
-(void)reconcileCandidates:(vector<KB::Candidate, std::__1::allocator<KB::Candidate> >*)arg1 forTypedString:(String*)arg2 withPhraseCandidate:(Candidate*)arg3 replacing:(const String*)arg4 ;
-(void)clearKeyAreas;
-(void)registerKeyArea:(CGRect)arg1 keyCode:(short)arg2 keyString:(const char*)arg3 ;
-(char)isEditingWordPrefix;
-(void)setIsEditingWordPrefix:(char)arg1 ;
-(USetRef)acceptableCharacterSet;
-(char)isTypologyEnabled;
-(void)logToTypologyRecorderWithString:(id)arg1 ;
-(id)configurationPropertyList;
@end

