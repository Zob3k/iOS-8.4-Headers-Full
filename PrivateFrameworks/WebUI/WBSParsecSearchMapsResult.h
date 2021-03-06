/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WBSParsecSearchResult.h>
#import <WebUI/WBSParsecSearchResultPresentedInCard.h>
#import <WebUI/WBSParsecMapsResultFeedbackDelegate.h>

@class WBSParsecSearchSession, MKMapItem, NSString, NSData, NSArray, NSURL, WBSParsecSearchMapsResultExtraCompletionItem, WBSParsecSearchResult;

@interface WBSParsecSearchMapsResult : WBSParsecSearchResult <WBSParsecSearchResultPresentedInCard, WBSParsecMapsResultFeedbackDelegate> {

	MKMapItem* _mapItem;
	NSString* _mapsDataType;
	NSData* _mapsData;
	NSArray* _additionalMapItems;
	NSString* _mapsResultType;
	NSURL* _moreURL;
	WBSParsecSearchMapsResultExtraCompletionItem* _extraCompletionItem;
	WBSParsecSearchSession* _parsecSearchSession;
	WBSParsecSearchResult* _hiddenParsecResult;

}

@property (nonatomic,readonly) NSData * mapsData;                                                               //@synthesize mapsData=_mapsData - In the implementation block
@property (nonatomic,readonly) MKMapItem * mapItem;                                                             //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) NSArray * additionalMapItems;                                                    //@synthesize additionalMapItems=_additionalMapItems - In the implementation block
@property (nonatomic,readonly) NSString * mapsResultType;                                                       //@synthesize mapsResultType=_mapsResultType - In the implementation block
@property (nonatomic,readonly) NSURL * moreURL;                                                                 //@synthesize moreURL=_moreURL - In the implementation block
@property (nonatomic,readonly) WBSParsecSearchMapsResultExtraCompletionItem * extraCompletionItem;              //@synthesize extraCompletionItem=_extraCompletionItem - In the implementation block
@property (nonatomic,retain) WBSParsecSearchSession * parsecSearchSession;                                      //@synthesize parsecSearchSession=_parsecSearchSession - In the implementation block
@property (nonatomic,retain) WBSParsecSearchResult * hiddenParsecResult;                                        //@synthesize hiddenParsecResult=_hiddenParsecResult - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MKMapItem *)mapItem;
-(id)initWithDictionary:(id)arg1 ;
-(WBSParsecSearchSession *)parsecSearchSession;
-(void)setParsecSearchSession:(WBSParsecSearchSession *)arg1 ;
-(void)placeViewControllerShouldLogFeedbackForDismissal:(id)arg1 ;
-(void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2 ;
-(id)supportedStyleOverrides;
-(NSData *)mapsData;
-(NSArray *)additionalMapItems;
-(NSString *)mapsResultType;
-(NSURL *)moreURL;
-(WBSParsecSearchMapsResultExtraCompletionItem *)extraCompletionItem;
-(WBSParsecSearchResult *)hiddenParsecResult;
-(void)setHiddenParsecResult:(WBSParsecSearchResult *)arg1 ;
@end

