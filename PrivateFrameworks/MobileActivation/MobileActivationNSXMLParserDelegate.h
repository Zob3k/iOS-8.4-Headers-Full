/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileActivation/NSXMLParserDelegate.h>

@class NSMutableString, NSMutableDictionary, NSString;

@interface MobileActivationNSXMLParserDelegate : NSObject <NSXMLParserDelegate> {

	int _state;
	BOOL _renderHTML;
	NSMutableString* _currentPlist;
	NSMutableDictionary* _activationTicket;
	BOOL _recertifying;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)stringForState:(int)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(id)activationTicket:(id*)arg1 andRenderHTML:(BOOL*)arg2 ;
-(id)flattenedDictString:(id)arg1 ;
-(void)appendClosingTagForElementName:(id)arg1 ;
-(void)appendOpeningTagForElementName:(id)arg1 andAttributes:(id)arg2 ;
-(void)setRecertifying:(BOOL)arg1 ;
-(id)activationTicket:(id*)arg1 ;
@end

