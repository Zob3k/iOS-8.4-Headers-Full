/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/YQLRequest.h>

@protocol ChartUpdaterDelegate;
@class Stock, StockChartData;

@interface ChartUpdater : YQLRequest {

	Stock* _stock;
	int _interval;
	StockChartData* _currentChartData;
	id<ChartUpdaterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ChartUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_rangeStringForInterval:(int)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<ChartUpdaterDelegate>)arg1 ;
-(id<ChartUpdaterDelegate>)delegate;
-(void)parseData:(id)arg1 ;
-(void)didParseData;
-(char)updateChartForStock:(id)arg1 interval:(int)arg2 ;
-(id)aggregateDictionaryDomain;
@end

