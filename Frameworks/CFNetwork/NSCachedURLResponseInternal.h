/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLResponse, NSData, NSDictionary;

@interface NSCachedURLResponseInternal : NSObject {

	NSURLResponse* response;
	NSData* data;
	NSDictionary* userInfo;
	unsigned storagePolicy;
	CFCachedURLResponse* _cachedURLResponse;

}
-(void)dealloc;
@end
