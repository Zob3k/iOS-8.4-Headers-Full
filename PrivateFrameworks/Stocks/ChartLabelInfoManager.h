/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Stocks/Stocks-Structs.h>
@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject {

	ChartLabelInfo* _yAxisLabelInfo;
	NSMutableArray* _monthLabelInfoArrays;
	NSMutableArray* _integerLabelInfoArray;
	char _use24hrTime;

}
+(id)sharedLabelInfoManager;
+(CFStringRef)_CFDateFormatterPropertyForMonthLabelLength:(int)arg1 ;
+(void)clearSharedManager;
+(id)chartLabelFont;
-(void)dealloc;
-(id)init;
-(void)resetLocale;
-(id)labelInfoForYAxis;
-(id)monthLabelInfoArrayForLabelLength:(int)arg1 ;
-(id)labelInfoWithUnsignedInteger:(unsigned)arg1 ;
-(char)use24hrTime;
-(id)labelInfoWithString:(id)arg1 ;
@end
