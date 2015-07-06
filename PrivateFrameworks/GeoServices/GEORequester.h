/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequester.h>

@class NSThread, NSString;

@interface GEORequester : PBRequester {

	char _disableReplay;
	NSThread* _thread;
	char _usePersistentConnection;
	char _useBackgroundConnection;
	NSString* _debugRequestName;

}

@property (assign) char disableReplay;                                 //@synthesize disableReplay=_disableReplay - In the implementation block
@property (nonatomic,retain) NSString * debugRequestName;              //@synthesize debugRequestName=_debugRequestName - In the implementation block
+(id)_logRequestResponseDirectory;
+(void)setLogRequestResponseDirectory:(id)arg1 ;
+(void)enablePersistentConnection;
+(void)stopAllRequests;
+(void)replayRequests;
+(void)setAppID:(id)arg1 ;
+(void)setOSVersion:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(id)initWithURL:(id)arg1 andDelegate:(id)arg2 useBackgroundConnection:(char)arg3 ;
-(void)setDebugRequestName:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 andDelegate:(id)arg2 ;
-(void)_applicationDidStopAllRequests:(id)arg1 ;
-(void)_applicationWantsToReplayRequests:(id)arg1 ;
-(void)_handleSuspendOnThread;
-(char)disableReplay;
-(void)_handleResumeOnThread;
-(void)startWithConnectionProperties:(id)arg1 ;
-(NSString *)debugRequestName;
-(id)logRequestToFile;
-(id)logResponseToFile;
-(id)requestPreamble;
-(CFURLRequestRef)newCFMutableURLRequestWithURL:(id)arg1 ;
-(id)persistentConnectionSession;
-(id)newConnectionWithCFURLRequest:(CFURLRequestRef)arg1 delegate:(id)arg2 ;
-(void)_logRequestsIfNecessary:(id)arg1 ;
-(void)_logResponsesIfNecessary:(id)arg1 ;
-(void)_logErrorIfNecessary:(id)arg1 ;
-(void)setDisableReplay:(char)arg1 ;
@end
