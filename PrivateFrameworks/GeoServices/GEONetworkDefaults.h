/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSDictionary, NSLock, NSString;

@interface GEONetworkDefaults : NSObject {

	NSMutableArray* _completionHandlers;
	char _isRegistering;
	NSDictionary* _networkDefaults;
	NSLock* _networkDefaultsLock;
	NSString* _cacheFilePath;
	int _configChangedToken;

}
+(id)sharedNetworkDefaults;
+(void)setRunningInDaemon:(char)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)refreshNetworkDefaults;
-(void)registerNetworkDefaults:(/*^block*/id)arg1 ;
-(void)_registrationComplete;
-(char)needsUpdate;
@end
