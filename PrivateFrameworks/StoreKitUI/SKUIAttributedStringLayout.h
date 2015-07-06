/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICachedLayout.h>

@class NSAttributedString, NSStringDrawingContext, NSShadow, NSString;

@interface SKUIAttributedStringLayout : NSObject <SKUICachedLayout> {

	NSAttributedString* _attributedString;
	CGSize _boundingSize;
	NSStringDrawingContext* _context;
	float _topInset;
	char _usesTallCharacterSet;
	UIEdgeInsets _edgeInsetsForShadow;
	NSShadow* _shadow;

}

@property (nonatomic,readonly) NSAttributedString * attributedString;                      //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) float baselineOffset; 
@property (nonatomic,readonly) float firstBaselineOffset; 
@property (nonatomic,readonly) CGSize boundingSize;                                        //@synthesize boundingSize=_boundingSize - In the implementation block
@property (nonatomic,readonly) int numberOfLines; 
@property (nonatomic,readonly) NSStringDrawingContext * stringDrawingContext;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) float topInset;                                             //@synthesize topInset=_topInset - In the implementation block
@property (nonatomic,readonly) char usesTallCharacterSet;                                  //@synthesize usesTallCharacterSet=_usesTallCharacterSet - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsetsForShadow;                           //@synthesize edgeInsetsForShadow=_edgeInsetsForShadow - In the implementation block
@property (nonatomic,readonly) NSShadow * shadow;                                          //@synthesize shadow=_shadow - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSAttributedString *)attributedString;
-(float)baselineOffset;
-(float)firstBaselineOffset;
-(int)numberOfLines;
-(NSShadow *)shadow;
-(id)initWithLayoutRequest:(id)arg1 ;
-(CGSize)boundingSize;
-(UIEdgeInsets)edgeInsetsForShadow;
-(NSStringDrawingContext *)stringDrawingContext;
-(char)usesTallCharacterSet;
-(float)topInset;
@end
