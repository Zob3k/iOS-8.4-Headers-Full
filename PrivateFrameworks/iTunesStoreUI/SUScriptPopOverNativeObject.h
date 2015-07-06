/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptNativeObject.h>

@class UIBarButtonItem, SUDOMElement;

@interface SUScriptPopOverNativeObject : SUScriptNativeObject {

	char _redisplayAfterRotation;
	UIBarButtonItem* _sourceButtonItem;
	SUDOMElement* _sourceDOMElement;

}

@property (nonatomic,retain) UIBarButtonItem * sourceButtonItem;              //@synthesize sourceButtonItem=_sourceButtonItem - In the implementation block
@property (nonatomic,retain) SUDOMElement * sourceDOMElement;                 //@synthesize sourceDOMElement=_sourceDOMElement - In the implementation block
-(void)dealloc;
-(void)setSourceButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setSourceDOMElement:(SUDOMElement *)arg1 ;
-(void)destroyNativeObject;
-(void)_windowDidRotateNotification:(id)arg1 ;
-(void)_windowWillRotateNotification:(id)arg1 ;
-(void)setupNativeObject;
-(SUDOMElement *)sourceDOMElement;
-(char)_isAffectedByWindowNotification:(id)arg1 ;
-(UIBarButtonItem *)sourceButtonItem;
@end
