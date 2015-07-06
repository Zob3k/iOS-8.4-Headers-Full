/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MPUFoundation/MPUFoundation-Structs.h>
@class NSCache, NSStringDrawingContext, MPUTextDrawingCacheKey, NSHashTable, NSOperationQueue, NSDictionary;

@interface MPUTextDrawingCache : NSObject {

	NSCache* _cache;
	NSStringDrawingContext* _reusableStringDrawingContext;
	MPUTextDrawingCacheKey* _reusableTextDrawingCacheKey;
	NSHashTable* _invalidationObservers;
	unsigned _invalidationNotificationCoalescingRequestsCount;
	char _wasInvalidatedWithoutNotifyingObservers;
	NSOperationQueue* _preHeatingOperationQueue;
	char _opaque;
	char _usesImageCachingInsteadOfStringDrawingContextCaching;
	NSDictionary* _textAttributes;
	unsigned _maximumNumberOfLines;
	float _displayScale;
	/*^block*/id _attributedTextProvider;

}

@property (nonatomic,copy) NSDictionary * textAttributes;                                                                                                                                                                          //@synthesize textAttributes=_textAttributes - In the implementation block
@property (assign,nonatomic) unsigned maximumNumberOfLines;                                                                                                                                                                        //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) float displayScale;                                                                                                                                                                                   //@synthesize displayScale=_displayScale - In the implementation block
@property (nonatomic,copy) id attributedTextProvider;                                                                                                                                                                              //@synthesize attributedTextProvider=_attributedTextProvider - In the implementation block
@property (assign,setter=_setOpaque:,getter=_isOpaque,nonatomic) char opaque;                                                                                                                                                      //@synthesize opaque=_opaque - In the implementation block
@property (assign,setter=_setUsesImageCachingInsteadOfStringDrawingContextCaching:,getter=_usesImageCachingInsteadOfStringDrawingContextCaching,nonatomic) char usesImageCachingInsteadOfStringDrawingContextCaching;              //@synthesize usesImageCachingInsteadOfStringDrawingContextCaching=_usesImageCachingInsteadOfStringDrawingContextCaching - In the implementation block
+(void)_updateStringDrawingContext:(id)arg1 withMaximumNumberOfLines:(unsigned)arg2 ;
+(id)_drawingContextForText:(id)arg1 allowedSize:(CGSize)arg2 fromCache:(id)arg3 usingReusableStringDrawingContext:(id)arg4 reusableTextDrawingCacheKey:(id)arg5 textAttributes:(id)arg6 maximumNumberOfLines:(unsigned)arg7 opaque:(char)arg8 displayScale:(float)arg9 attributedTextProvider:(/*^block*/id)arg10 ;
+(CGSize)_validateAllowedSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setMaximumNumberOfLines:(unsigned)arg1 ;
-(float)displayScale;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(void)_invalidate;
-(unsigned)maximumNumberOfLines;
-(id)drawingContextForText:(id)arg1 allowedSize:(CGSize)arg2 ;
-(void)addInvalidationObserver:(id)arg1 ;
-(void)removeInvalidationObserver:(id)arg1 ;
-(id)attributedTextProvider;
-(void)setAttributedTextProvider:(id)arg1 ;
-(void)_notifyInvalidationObservers;
-(char)_isOpaque;
-(char)_usesImageCachingInsteadOfStringDrawingContextCaching;
-(void)beginCoalescingInvalidationNotifications;
-(void)endCoalescingInvalidationNotifications;
-(void)preHeatForStrings:(id)arg1 allowedSize:(CGSize)arg2 ;
-(void)_setOpaque:(char)arg1 ;
-(void)_setUsesImageCachingInsteadOfStringDrawingContextCaching:(char)arg1 ;
-(void)setDisplayScale:(float)arg1 ;
@end
