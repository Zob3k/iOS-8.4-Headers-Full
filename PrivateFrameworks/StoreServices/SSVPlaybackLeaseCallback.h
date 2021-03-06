/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSVPlaybackLeaseResponse, NSError;

@interface SSVPlaybackLeaseCallback : NSObject {

	/*^block*/id _block;
	SSVPlaybackLeaseResponse* _response;
	NSError* _error;

}

@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) SSVPlaybackLeaseResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
-(SSVPlaybackLeaseResponse *)response;
-(NSError *)error;
-(void)setResponse:(SSVPlaybackLeaseResponse *)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

