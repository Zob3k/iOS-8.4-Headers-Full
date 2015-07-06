/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSURL, NSString;

@interface IKAssetElement : IKViewElement {

	char _infiniteDuration;

}

@property (nonatomic,retain,readonly) NSURL * url; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) int keyDelivery; 
@property (getter=isInfiniteDuration,nonatomic,readonly) char infiniteDuration;              //@synthesize infiniteDuration=_infiniteDuration - In the implementation block
@property (nonatomic,retain,readonly) NSString * actionParams; 
@property (nonatomic,retain,readonly) NSString * adamID; 
@property (nonatomic,retain,readonly) NSString * bookmarkID; 
@property (nonatomic,retain,readonly) NSString * contentID; 
@property (nonatomic,retain,readonly) NSString * serviceID; 
+(char)shouldParseChildDOMElements;
-(NSURL *)url;
-(int)type;
-(int)keyDelivery;
-(char)infiniteDuration;
-(NSString *)actionParams;
-(NSString *)bookmarkID;
-(NSString *)serviceID;
-(char)isInfiniteDuration;
-(NSString *)contentID;
-(NSString *)adamID;
@end
