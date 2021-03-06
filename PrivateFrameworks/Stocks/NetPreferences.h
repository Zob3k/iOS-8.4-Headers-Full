/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NetPreferences : NSObject {

	NSString* _buildVersion;
	NSString* _productVersion;
	NSString* _UUID;
	char _serviceDebugging;
	char _isNetworkReachable;

}

@property (assign,getter=isNetworkReachable,nonatomic) char networkReachable; 
+(id)sharedPreferences;
+(void)clearSharedPreferences;
-(id)init;
-(id)UUID;
-(char)isNetworkReachable;
-(void)resetLocale;
-(id)stocksYQLBaseURL;
-(id)signedRequestForURL:(id)arg1 parameters:(id)arg2 ;
-(id)stocksCountryCode;
-(id)_stocksUserAgent;
-(id)_stocksAcceptLanguage;
-(void)setupLogging;
-(void)setNetworkReachable:(char)arg1 ;
-(id)stocksLanguageCode;
-(void)addStocksHeadersToPostRequest:(id)arg1 ;
-(id)financeRequestAttributes;
-(id)_urlStringWithHost:(id)arg1 ;
-(id)fullQuoteURLOverrideForStock:(id)arg1 ;
-(id)defaultBacksideLogoURL;
-(id)backsideLogoURL;
-(id)logoButtonImage;
-(id)logoBacksideImage;
-(id)serviceDebuggingPath;
-(id)_cacheDirectoryPath;
-(char)serviceDebugging;
@end

