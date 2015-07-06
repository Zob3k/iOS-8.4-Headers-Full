/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassBackFaceImageSet : PKPassImageSet {

	PKImage* _faceImage;

}

@property (nonatomic,retain) PKImage * faceImage;              //@synthesize faceImage=_faceImage - In the implementation block
+(char)supportsSecureCoding;
+(int)currentVersion;
+(int)imageSetType;
+(id)archiveName;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)preheatImages;
-(PKImage *)faceImage;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(float)arg3 suffix:(id)arg4 ;
-(void)setFaceImage:(PKImage *)arg1 ;
@end
