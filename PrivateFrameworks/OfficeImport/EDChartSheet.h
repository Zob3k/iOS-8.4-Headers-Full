/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDSheet.h>

@class CHDChart;

@interface EDChartSheet : EDSheet {

	CHDChart* mMainChart;
	BOOL mIsBoundsSet;
	CGRect mBounds;

}
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)areBoundsSet;
-(id)mainChart;
-(void)teardown;
-(void)addDrawable:(id)arg1 ;
-(void)setMainChart:(id)arg1 ;
@end
