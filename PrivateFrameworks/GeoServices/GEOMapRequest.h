/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject {

	GEOMapRequestManager* _requestManager;
	/*^block*/id _completionHandler;
	char _isFinished;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) char isFinished;               //@synthesize isFinished=_isFinished - In the implementation block
-(void)cancel;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)complete;
-(char)isFinished;
-(id)initWithManager:(id)arg1 ;
@end

