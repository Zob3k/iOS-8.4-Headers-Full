/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKMapServiceTicket;
@class MKLocalSearchRequest;

@interface MKLocalSearch : NSObject {

	MKLocalSearchRequest* _request;
	id<MKMapServiceTicket> _ticket;

}

@property (getter=isSearching,nonatomic,readonly) char searching; 
-(char)isSearching;
-(void)_handleMapItems:(id)arg1 boundingRegion:(id)arg2 error:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)_startWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_phoneOnlyStartWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)cancel;
-(id)init;
-(id)initWithRequest:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
@end

