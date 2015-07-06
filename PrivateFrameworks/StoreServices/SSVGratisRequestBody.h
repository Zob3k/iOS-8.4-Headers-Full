/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/NSCopying.h>

@class NSNumber, NSMutableDictionary, NSArray, NSData;

@interface SSVGratisRequestBody : NSObject <NSCopying> {

	NSNumber* _accountID;
	NSMutableDictionary* _additionalParameters;
	NSArray* _applications;
	char _backgroundRequest;
	NSArray* _bundleIdentifiers;
	NSArray* _itemIdentifiers;
	int _style;

}

@property (nonatomic,readonly) int requestStyle;                                             //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;                                     //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSArray * applications;                                           //@synthesize applications=_applications - In the implementation block
@property (assign,getter=isBackgroundRequest,nonatomic) char backgroundRequest;              //@synthesize backgroundRequest=_backgroundRequest - In the implementation block
@property (nonatomic,copy) NSArray * bundleIdentifiers;                                      //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * itemIdentifiers;                                        //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * bodyDictionary; 
@property (nonatomic,readonly) NSData * JSONBodyData; 
@property (nonatomic,readonly) NSData * propertyListBodyData; 
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)bundleIdentifiers;
-(NSNumber *)accountIdentifier;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(NSArray *)itemIdentifiers;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(NSData *)JSONBodyData;
-(NSMutableDictionary *)bodyDictionary;
-(char)isBackgroundRequest;
-(void)setBackgroundRequest:(char)arg1 ;
-(id)initWithRequestStyle:(int)arg1 ;
-(NSData *)propertyListBodyData;
-(void)setValue:(id)arg1 forBodyParameter:(id)arg2 ;
-(NSArray *)applications;
-(void)setApplications:(NSArray *)arg1 ;
-(int)requestStyle;
@end
