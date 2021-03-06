/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@class PLImageTableSegment, NSData, NSString;

@interface PLMappedImageData : NSMutableData {

	PLImageTableSegment* _segment;
	void* _bytes;
	unsigned long _length;
	char _freeBytes;
	NSData* _pl_data;

}

@property (assign,nonatomic) unsigned imageWidth; 
@property (assign,nonatomic) unsigned imageHeight; 
@property (nonatomic,copy) NSString * photoUUID; 
-(void)dealloc;
-(unsigned)length;
-(const void*)bytes;
-(void*)mutableBytes;
-(id)initWithImageTableSegment:(id)arg1 bytes:(void*)arg2 length:(unsigned long)arg3 ;
-(unsigned)lengthIncludingFooter;
-(void)setPhotoUUID:(NSString *)arg1 ;
-(NSString *)photoUUID;
-(void)setImageWidth:(unsigned)arg1 ;
-(void)setImageHeight:(unsigned)arg1 ;
-(unsigned)imageWidth;
-(unsigned)imageHeight;
-(char)uuidIsEqual:(id)arg1 ;
-(id)initWithThumbnailPath:(id)arg1 ;
-(id)initWithEntryLength:(unsigned)arg1 ;
-(id)brokencopy;
-(PLImageTableEntryFooter_s*)_footer;
-(unsigned)pl_advisoryLength;
-(char)pl_writeToPath:(id)arg1 ;
@end

