/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>

@class NSString;

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleScriptWorld> _world;

}

@property (readonly) InjectedBundleScriptWorld* _scriptWorld; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)normalWorld;
+(id)world;
-(void)dealloc;
-(Object*)_apiObject;
-(InjectedBundleScriptWorld*)_scriptWorld;
-(void)clearWrappers;
@end
