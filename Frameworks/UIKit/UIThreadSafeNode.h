/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DOMNode;

@interface UIThreadSafeNode : NSObject {

	DOMNode* _node;

}
+(id)threadSafeNodeWithNode:(id)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(char)isKindOfClass:(Class)arg1 ;
-(char)isEqual:(id)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithNode:(id)arg1 ;
-(id)_realNode;
@end
