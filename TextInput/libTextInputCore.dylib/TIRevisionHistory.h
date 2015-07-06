/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TIRevisionHistoryDelegate;
#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
@class CPLRUDictionary, NSString, NSMutableArray;

@interface TIRevisionHistory : NSObject {

	id<TIRevisionHistoryDelegate> _delegate;
	CPLRUDictionary* _recentAutocorrections;
	NSString* _documentText;
	NSMutableArray* _tokenization;
	void* _tokenizer;
	NSRange _selectedRange;
	TIRevisionHistoryTokenIterator _currentTokenIterator;

}

@property (assign,nonatomic) id<TIRevisionHistoryDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CPLRUDictionary * recentAutocorrections;                          //@synthesize recentAutocorrections=_recentAutocorrections - In the implementation block
@property (nonatomic,copy) NSString * documentText;                                            //@synthesize documentText=_documentText - In the implementation block
@property (assign,nonatomic) NSRange selectedRange;                                            //@synthesize selectedRange=_selectedRange - In the implementation block
@property (nonatomic,readonly) NSMutableArray * tokenization;                                  //@synthesize tokenization=_tokenization - In the implementation block
@property (assign,nonatomic) TIRevisionHistoryTokenIterator currentTokenIterator;              //@synthesize currentTokenIterator=_currentTokenIterator - In the implementation block
@property (nonatomic,readonly) void* tokenizer;                                                //@synthesize tokenizer=_tokenizer - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<TIRevisionHistoryDelegate>)arg1 ;
-(id)init;
-(id<TIRevisionHistoryDelegate>)delegate;
-(NSRange)selectedRange;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void*)tokenizer;
-(NSString *)documentText;
-(id)initWithLocale:(id)arg1 ;
-(NSMutableArray *)tokenization;
-(unsigned)fillTokenBuffer:(unsigned*)arg1 withContextForTokenAtIndex:(unsigned)arg2 ;
-(void)acceptToken:(id)arg1 withContext:(const unsigned*)arg2 contextLength:(unsigned)arg3 ;
-(void)rejectToken:(id)arg1 withContext:(const unsigned*)arg2 contextLength:(unsigned)arg3 ;
-(NSRange)documentRangeOfTokenAtIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(TIRevisionHistoryTokenIterator)nextTokenIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(TIRevisionHistoryTokenIterator)currentTokenIterator;
-(TIRevisionHistoryTokenIterator)previousTokenIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(id)tokenAtIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(char)shouldValidateOriginalIterator:(TIRevisionHistoryTokenIterator)arg1 withRevisedDocumentRange:(NSRange)arg2 forRevision:(id)arg3 ;
-(char)originalIterator:(TIRevisionHistoryTokenIterator)arg1 matchesRevisedDocumentRange:(NSRange)arg2 andTokenID:(unsigned)arg3 ;
-(TIRevisionHistoryTokenIterator)resetTokenAtIterator:(TIRevisionHistoryTokenIterator)arg1 withRange:(NSRange)arg2 fromDocumentLocation:(unsigned)arg3 ;
-(char)validateTokenizationForRevisedDocumentRange:(NSRange)arg1 andTokenID:(unsigned)arg2 forRevision:(id)arg3 ;
-(void)addRevisedTokenString:(id)arg1 withTokenID:(unsigned)arg2 inDocumentRange:(NSRange)arg3 toRevision:(id)arg4 ;
-(void)handleRevisedTokenString:(id)arg1 withTokenID:(unsigned)arg2 forRevision:(id)arg3 ;
-(unsigned)tokenizeDocumentTextInRange:(NSRange)arg1 withTokenHandler:(/*^block*/id)arg2 ;
-(void)setCurrentTokenIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(void)setDocumentText:(NSString *)arg1 ;
-(TIRevisionHistoryTokenIterator)popSelectedTextFromTokenizer;
-(NSRange)selectedTokenRangeWithIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(void)adjustTokenOffsetAfterDeletedTokenRange:(NSRange)arg1 withDeletedCharacterCount:(unsigned)arg2 ;
-(void)pushSelectedTextToTokenizerForRevision:(id)arg1 ;
-(void)mergeTokenizationsForRevision:(id)arg1 ;
-(void)rejectTokensInRange:(NSRange)arg1 ;
-(id)nonEmptyTokensInRange:(NSRange)arg1 ;
-(void)acceptTokensInRange:(NSRange)arg1 ;
-(CPLRUDictionary *)recentAutocorrections;
-(void)annotateTokensCreatedFromDocumentState;
-(TIRevisionHistoryTokenIterator)iteratorUpperBoundForSelectionStart;
-(char)isSelectionContainedByToken:(TIRevisionHistoryTokenIterator)arg1 ;
-(char)isWordToken:(TIRevisionHistoryTokenIterator)arg1 ;
-(void)enumerateSentenceStemUsingIteratorBlock:(/*^block*/id)arg1 ;
-(void)replaceSelectionWithText:(id)arg1 selectedTokenReplacementHandler:(/*^block*/id)arg2 ;
-(NSRange)inputRangeForReplacement:(id)arg1 ;
-(void)migrateUserTypingFromDeletedTokens:(id)arg1 toInsertedTokens:(id)arg2 withUsageLearningMask:(unsigned)arg3 usageTrackingMask:(unsigned)arg4 ;
-(char)matchesContextBeforeSelection:(id)arg1 ;
-(char)matchesSelectedText:(id)arg1 ;
-(char)matchesContextAfterSelection:(id)arg1 ;
-(char)matchesDocumentState:(id)arg1 ;
-(void)acceptCurrentSentence;
-(void)resetToDocumentState:(id)arg1 ;
-(id)wordTokenContainingSelection;
-(void)acceptText:(id)arg1 isAutoshifted:(char)arg2 ;
-(void)syncToDocumentState:(id)arg1 ;
-(void)enumerateSentenceStemUsingBlock:(/*^block*/id)arg1 ;
-(id)currentWord;
-(id)currentUserTyping;
-(void)setRecentAutocorrections:(CPLRUDictionary *)arg1 ;
@end
