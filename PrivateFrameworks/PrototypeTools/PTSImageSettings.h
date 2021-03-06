/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>
#import <PrototypeTools/_UISettingsKeyObserver.h>

@class UIImage, NSData, NSString;

@interface PTSImageSettings : _UISettings <_UISettingsKeyObserver> {

	char _unarchiving;
	UIImage* _image;
	NSData* _pngData;
	int _imageOrientation;
	float _imageScale;

}

@property (retain) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (retain) NSData * pngData;                                //@synthesize pngData=_pngData - In the implementation block
@property (assign) int imageOrientation;                            //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (assign) float imageScale;                                //@synthesize imageScale=_imageScale - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageOrientation:(int)arg1 ;
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(int)imageOrientation;
-(UIImage *)image;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)archiveValueForKey:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateImageData;
-(void)setImageScale:(float)arg1 ;
-(NSData *)pngData;
-(void)_updateImageProperties;
-(void)setPngData:(NSData *)arg1 ;
-(float)imageScale;
@end

