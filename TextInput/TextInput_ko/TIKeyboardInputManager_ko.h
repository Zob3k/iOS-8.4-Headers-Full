/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/TextInput_ko.bundle/TextInput_ko
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_ko/TextInput_ko-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_ko : TIKeyboardInputManagerZephyr {

	Hangul2SetAutomata* _batchConverter;
	BOOL _deleteSyllable;

}
-(void)setInput:(id)arg1 ;
-(void)dealloc;
-(void)clearInput;
-(void)textAccepted:(id)arg1 ;
-(char)shouldExtendPriorWord;
-(char)canHandleKeyHitTest;
-(char)needsKeyHitTestResults;
-(id)composeJamo:(id)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(char)doesComposeText;
-(id)initWithConfig:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(char)dictionaryUsesExternalEncoding;
-(void)setInputIndex:(unsigned)arg1 ;
-(void)acceptInput;
-(char)acceptsCharacter:(unsigned long)arg1 ;
-(id)deleteFromInput:(unsigned*)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)syncToLayoutState:(id)arg1 ;
@end

