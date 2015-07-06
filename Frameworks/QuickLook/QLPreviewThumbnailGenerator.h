/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLPreviewItem;
#import <QuickLook/QuickLook-Structs.h>
@class UIImage, NSString;

@interface QLPreviewThumbnailGenerator : NSObject {

	id<QLPreviewItem> _item;
	CGSize _size;
	float _scale;
	UIImage* _thumbnailImage;
	NSString* _contentType;
	int _status;

}

@property (readonly) UIImage * thumbnailImage;              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
+(char)canGenerateThumbnailForPreviewItem:(id)arg1 ;
+(id)generatorForPreviewItem:(id)arg1 size:(CGSize)arg2 ;
-(id)_thumbnailForImage;
-(id)_thumbnailForPDF;
-(id)_thumbnailForMovie;
-(CGSize)_pixelSize;
-(CGContextRef)_beginContext;
-(id)_endContextWithContentFrame:(CGRect)arg1 ;
-(void)generateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(UIImage *)thumbnailImage;
@end
