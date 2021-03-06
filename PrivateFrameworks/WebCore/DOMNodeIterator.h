/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class DOMNode;

@interface DOMNodeIterator : DOMObject

@property (readonly) DOMNode * root; 
@property (readonly) unsigned whatToShow; 
@property (readonly) id<DOMNodeFilter> filter; 
@property (readonly) char expandEntityReferences; 
@property (readonly) DOMNode * referenceNode; 
@property (readonly) char pointerBeforeReferenceNode; 
-(void)dealloc;
-(void)detach;
-(id)nextNode;
-(DOMNode *)root;
-(id<DOMNodeFilter>)filter;
-(void)finalize;
-(unsigned)whatToShow;
-(char)expandEntityReferences;
-(DOMNode *)referenceNode;
-(char)pointerBeforeReferenceNode;
-(id)previousNode;
@end

