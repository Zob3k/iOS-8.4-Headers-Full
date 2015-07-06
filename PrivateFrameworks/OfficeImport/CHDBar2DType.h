/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CHDChartTypeWithGrouping.h>

@interface CHDBar2DType : CHDChartTypeWithGrouping {

	int mGapWidth;
	BOOL mColumn;
	int mOverlap;

}
-(BOOL)isColumn;
-(BOOL)isHorizontal;
-(id)initWithChart:(id)arg1 ;
-(void)setOverlap:(int)arg1 ;
-(void)setGapWidth:(int)arg1 ;
-(void)setColumn:(BOOL)arg1 ;
-(int)gapWidth;
-(int)overlap;
-(int)defaultLabelPosition;
@end
