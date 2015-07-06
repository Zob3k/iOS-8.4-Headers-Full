/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMProperty.h>
#import <OfficeImport/NSCopying.h>

@class EDBorders, OITSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {

	EDBorders* edValue;
	OITSUColor* mBorderColor;
	OITSUColor* mBorderTopColor;
	OITSUColor* mBorderLeftColor;
	OITSUColor* mBorderBottomColor;
	OITSUColor* mBorderRightColor;
	int mBorderStyle[5];
	int mBorderWidth[5];

}
-(id)colorString;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)styleString;
-(id)borderColor;
-(id)cssStringForName:(id)arg1 ;
-(id)initWithOADStroke:(id)arg1 ;
-(id)cssString;
-(id)widthString;
-(id)stringFromStyleEnum:(int)arg1 ;
-(id)stringFromWidthEnum:(int)arg1 ;
-(id)stringFromColor:(id)arg1 ;
-(char)isNoneAtLocation:(int)arg1 ;
-(void)setNoneAtLocation:(int)arg1 ;
-(char)hasSameColorsAs:(id)arg1 ;
-(char)hasSameStylesAs:(id)arg1 ;
-(char)hasSameWidthsAs:(id)arg1 ;
-(void)setBorderStyleAndWidth:(int)arg1 location:(unsigned)arg2 ;
-(id)initWithEDBorders:(id)arg1 ;
-(int*)borderStyles;
-(id)styleHashNumber;
-(id)widthHashNumber;
-(int*)borderWidths;
@end
