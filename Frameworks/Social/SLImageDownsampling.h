/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Social/Social-Structs.h>
@interface SLImageDownsampling : NSObject
+(void)generateThumbnailFromImageData:(id)arg1 adjustSmallestSideToSize:(unsigned)arg2 resultsHandler:(/*^block*/id)arg3 ;
+(id)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned)arg2 ;
+(SCD_Struct_SL12)imageSizeWithData:(id)arg1 ;
+(id)createThumbnailWithData:(id)arg1 adjustSmallestSideToSize:(unsigned)arg2 ;
+(void)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned)arg2 resultsHandler:(/*^block*/id)arg3 ;
@end

