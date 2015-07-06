/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

@interface SKUIStarRatingViewElement : SKUIViewElement {

	float _ratingValue;
	SKUIViewElementText* _text;
	int _starType;
	BOOL _enabled;

}

@property (nonatomic,readonly) int starType;                            //@synthesize starType=_starType - In the implementation block
@property (nonatomic,readonly) float ratingValue;                       //@synthesize ratingValue=_ratingValue - In the implementation block
@property (nonatomic,readonly) SKUIViewElementText * text;              //@synthesize text=_text - In the implementation block
-(char)isEnabled;
-(SKUIViewElementText *)text;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(float)ratingValue;
-(int)starType;
@end
