/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CHDSeries.h>

@class CHDData;

@interface CHDBubbleSeries : CHDSeries {

	CHDData* mSizeData;
	BOOL mBubble3D;
	BOOL mInvertIfNegative;
	BOOL mShowBubbleSize;

}
-(void)dealloc;
-(BOOL)isShowBubbleSize;
-(void)setShowBubbleSize:(BOOL)arg1 ;
-(void)setCategoryData:(id)arg1 ;
-(void)setSizeData:(id)arg1 ;
-(void)setBubble3D:(BOOL)arg1 ;
-(void)setInvertIfNegative:(BOOL)arg1 ;
-(id)sizeData;
-(BOOL)isBubble3D;
-(BOOL)isInvertIfNegative;
@end

