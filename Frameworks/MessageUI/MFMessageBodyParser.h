/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFMessageBodyParserObject.h>

@class NSMutableArray, NSError;

@interface MFMessageBodyParser : MFMessageBodyParserObject {

	NSMutableArray* _subparsers;
	NSMutableArray* _elementPool;
	NSMutableArray* _paragraphNodes;
	/*^block*/id _foundMessageBodyElementBlock;
	NSError* _parserError;
	CFArrayRef _nodesStackCache;
	CFDictionaryRef _nodesLevelCache;
	CFDictionaryRef _nodesQuoteLevelCache;
	unsigned _options;

}

@property (assign,nonatomic) unsigned options;              //@synthesize options=_options - In the implementation block
+(char)isLinebreakImpliedBeforeTagName:(id)arg1 ;
+(char)isLinebreakImpliedAfterTagName:(id)arg1 ;
-(void)addSubparser:(id)arg1 ;
-(void)copyBlocks;
-(char)shouldProceedParsing;
-(Class)messageBodyStringAccumulatorClass;
-(int)messageBodyStringAccumulatorDefaultOptions;
-(Class)messageBodyElementClass;
-(void)flushParagraphNodes;
-(id)getAvailableMessageBodyElement;
-(void)didFindBodyElement:(id)arg1 ;
-(void)getLevel:(int*)arg1 quoteLevel:(int*)arg2 forBodyNode:(id)arg3 ;
-(id)newStringAccumulatorWithOptions:(int)arg1 lengthLimit:(unsigned)arg2 ;
-(void)setFoundMessageBodyElementBlock:(/*^block*/id)arg1 ;
-(void)removeSubparser:(id)arg1 ;
-(char)isLandmarkTagName:(id)arg1 ;
-(char)shouldIgnoreTagWithTagName:(id)arg1 ;
-(void)enqueueParagraphNode:(id)arg1 withTagName:(id)arg2 ;
-(void)willBeginParsing;
-(void)didFinishParsing;
-(void)didFindError:(id)arg1 ;
-(unsigned)quoteLevelForBodyNode:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
-(id)parserError;
-(char)parse;
@end

