/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, NSMutableArray, CUIPSDGradient, NSData, CUIShapeEffectPreset, NSDate;

@interface CSIGenerator : NSObject {

	CGSize _size;
	NSString* _name;
	NSString* _utiType;
	NSMutableArray* _slices;
	NSMutableArray* _bitmaps;
	NSMutableArray* _metrics;
	char _isFPOHint;
	char _isExcludedFromFilter;
	char _isVectorBased;
	int _templateRenderingMode;
	char _allowsMultiPassEncoding;
	short _colorSpaceID;
	short _layout;
	unsigned _scaleFactor;
	CUIPSDGradient* _gradient;
	NSData* _rawData;
	CUIShapeEffectPreset* _effectPreset;
	int _blendMode;
	float _opacity;
	NSDate* _modtime;
	unsigned _pixelFormat;
	int _exifOrientation;
	unsigned long _rowbytes;

}

@property (nonatomic,copy) NSString * name;                                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * utiType;                                                                 //@synthesize utiType=_utiType - In the implementation block
@property (assign,nonatomic) char isRenditionFPO;                                                              //@synthesize isFPOHint=_isFPOHint - In the implementation block
@property (assign,nonatomic) char isVectorBased;                                                               //@synthesize isVectorBased=_isVectorBased - In the implementation block
@property (assign,nonatomic) int templateRenderingMode;                                                        //@synthesize templateRenderingMode=_templateRenderingMode - In the implementation block
@property (assign,getter=isExcludedFromContrastFilter,nonatomic) char excludedFromContrastFilter;              //@synthesize isExcludedFromFilter=_isExcludedFromFilter - In the implementation block
@property (assign,nonatomic) short colorSpaceID;                                                               //@synthesize colorSpaceID=_colorSpaceID - In the implementation block
@property (assign,nonatomic) unsigned scaleFactor;                                                             //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) unsigned pixelFormat;                                                             //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) char allowsMultiPassEncoding;                                                     //@synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding - In the implementation block
@property (assign,nonatomic) int exifOrientation;                                                              //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (nonatomic,retain) CUIPSDGradient * gradient;                                                        //@synthesize gradient=_gradient - In the implementation block
@property (nonatomic,retain) CUIShapeEffectPreset * effectPreset;                                              //@synthesize effectPreset=_effectPreset - In the implementation block
@property (assign,nonatomic) int blendMode;                                                                    //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) float opacity;                                                                    //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,copy) NSDate * modtime;                                                                   //@synthesize modtime=_modtime - In the implementation block
+(void)initialize;
+(void)setFileCompression:(int)arg1 ;
+(int)fileCompression;
-(void)setScaleFactor:(unsigned)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)exifOrientation;
-(int)templateRenderingMode;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(unsigned)scaleFactor;
-(void)setGradient:(CUIPSDGradient *)arg1 ;
-(CUIPSDGradient *)gradient;
-(void)setTemplateRenderingMode:(int)arg1 ;
-(void)setExifOrientation:(int)arg1 ;
-(unsigned)pixelFormat;
-(void)setPixelFormat:(unsigned)arg1 ;
-(void)setEffectPreset:(CUIShapeEffectPreset *)arg1 ;
-(NSDate *)modtime;
-(char)allowsMultiPassEncoding;
-(void)_addNodes:(id)arg1 toNodeList:(csigradientdatanode*)arg2 ;
-(void)formatCSIHeader:(csiheader*)arg1 ;
-(void)writeHeader:(csiheader*)arg1 toData:(id)arg2 ;
-(unsigned long)writeResourcesToData:(id)arg1 ;
-(unsigned long)writeGradientToData:(id)arg1 ;
-(unsigned long)writeRawDataToData:(id)arg1 ;
-(unsigned long)writeBitmap:(id)arg1 toData:(id)arg2 compress:(char)arg3 ;
-(id)initWithCanvasSize:(CGSize)arg1 sliceCount:(unsigned)arg2 layout:(short)arg3 ;
-(id)initWithShapeEffectPreset:(id)arg1 forScaleFactor:(unsigned)arg2 ;
-(id)initWithRawData:(id)arg1 pixelFormat:(unsigned)arg2 layout:(short)arg3 ;
-(void)addBitmap:(id)arg1 ;
-(void)addSliceRect:(CGRect)arg1 ;
-(id)CSIRepresentationWithCompression:(char)arg1 ;
-(NSString *)utiType;
-(void)setUtiType:(NSString *)arg1 ;
-(char)isRenditionFPO;
-(void)setIsRenditionFPO:(char)arg1 ;
-(char)isVectorBased;
-(void)setIsVectorBased:(char)arg1 ;
-(char)isExcludedFromContrastFilter;
-(void)setExcludedFromContrastFilter:(char)arg1 ;
-(short)colorSpaceID;
-(void)setColorSpaceID:(short)arg1 ;
-(CUIShapeEffectPreset *)effectPreset;
-(void)setModtime:(NSDate *)arg1 ;
-(void)setAllowsMultiPassEncoding:(char)arg1 ;
-(void)addMetrics:(SCD_Struct_CS4)arg1 ;
@end
