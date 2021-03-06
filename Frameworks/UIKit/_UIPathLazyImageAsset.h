/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIImageAsset.h>

@class NSArray;

@interface _UIPathLazyImageAsset : UIImageAsset {

	char _imagesHaveBeenLoaded;
	char _haveCGCacheImages;
	NSArray* _imagePaths;

}

@property (nonatomic,copy) NSArray * imagePaths;                  //@synthesize imagePaths=_imagePaths - In the implementation block
@property (assign,nonatomic) char haveCGCacheImages;              //@synthesize haveCGCacheImages=_haveCGCacheImages - In the implementation block
-(void)dealloc;
-(id)imageWithTraitCollection:(id)arg1 ;
-(void)setImagePaths:(NSArray *)arg1 ;
-(void)setHaveCGCacheImages:(char)arg1 ;
-(void)_clearResolvedImageResources;
-(NSArray *)imagePaths;
-(char)haveCGCacheImages;
@end

