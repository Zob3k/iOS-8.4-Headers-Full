/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/NSCopying.h>

@class NSArray;

@interface SSItemImageCollection : NSObject <NSCopying> {

	NSArray* _itemImages;

}

@property (nonatomic,readonly) NSArray * itemImages;              //@synthesize itemImages=_itemImages - In the implementation block
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bestImageForSize:(CGSize)arg1 ;
-(id)imagesForKind:(id)arg1 ;
-(id)initWithImageCollection:(id)arg1 ;
-(id)initWithItemImages:(id)arg1 ;
-(NSArray *)itemImages;
-(id)_newImagesForDictionary:(id)arg1 ;
-(id)imagesForSize:(CGSize)arg1 ;
-(id)_imagesForSize:(CGSize)arg1 scale:(float)arg2 ;
@end
