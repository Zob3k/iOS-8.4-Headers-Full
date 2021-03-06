/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMElement.h>

@class NSString, DOMHTMLCollection;

@interface DOMHTMLElement : DOMElement

@property (copy) NSString * idName; 
@property (copy) NSString * title; 
@property (copy) NSString * lang; 
@property (copy) NSString * dir; 
@property (assign) int tabIndex; 
@property (copy) NSString * accessKey; 
@property (copy) NSString * innerHTML; 
@property (copy) NSString * innerText; 
@property (copy) NSString * outerHTML; 
@property (copy) NSString * outerText; 
@property (readonly) DOMHTMLCollection * children; 
@property (copy) NSString * contentEditable; 
@property (readonly) char isContentEditable; 
@property (copy,readonly) NSString * titleDisplayString; 
-(void)setHidden:(char)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(int)scrollXOffset;
-(int)scrollYOffset;
-(void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 ;
-(void)setContentEditable:(NSString *)arg1 ;
-(void)setInnerHTML:(NSString *)arg1 ;
-(NSString *)innerHTML;
-(NSString *)innerText;
-(char)isContentEditable;
-(NSString *)idName;
-(int)structuralComplexityContribution;
-(void)setDraggable:(char)arg1 ;
-(char)hidden;
-(void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForIOSCaret:(char)arg3 ;
-(void)absolutePosition:(int*)arg1 :(int*)arg2 :(int*)arg3 :(int*)arg4 ;
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(void)click;
-(NSString *)dir;
-(void)setDir:(NSString *)arg1 ;
-(void)setIdName:(NSString *)arg1 ;
-(NSString *)lang;
-(void)setLang:(NSString *)arg1 ;
-(char)translate;
-(void)setTranslate:(char)arg1 ;
-(int)tabIndex;
-(void)setTabIndex:(int)arg1 ;
-(char)draggable;
-(id)webkitdropzone;
-(void)setWebkitdropzone:(id)arg1 ;
-(void)setInnerText:(NSString *)arg1 ;
-(NSString *)outerHTML;
-(void)setOuterHTML:(NSString *)arg1 ;
-(NSString *)outerText;
-(void)setOuterText:(NSString *)arg1 ;
-(DOMHTMLCollection *)children;
-(NSString *)contentEditable;
-(char)spellcheck;
-(void)setSpellcheck:(char)arg1 ;
-(NSString *)titleDisplayString;
-(id)insertAdjacentElement:(id)arg1 element:(id)arg2 ;
-(void)insertAdjacentHTML:(id)arg1 html:(id)arg2 ;
-(void)insertAdjacentText:(id)arg1 text:(id)arg2 ;
@end

