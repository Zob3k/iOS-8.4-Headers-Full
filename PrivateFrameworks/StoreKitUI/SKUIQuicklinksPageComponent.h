/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>
#import <StoreKitUI/SSMetricsEventFieldProvider.h>

@class NSArray, NSString;

@interface SKUIQuicklinksPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {

	NSArray* _links;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * links;                     //@synthesize links=_links - In the implementation block
@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)title;
-(NSArray *)links;
-(id)initWithCustomPageContext:(id)arg1 ;
-(int)componentType;
-(id)valueForMetricsField:(id)arg1 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2 ;
-(id)metricsElementName;
-(void)_setLinksWithLinksArray:(id)arg1 context:(id)arg2 ;
@end
