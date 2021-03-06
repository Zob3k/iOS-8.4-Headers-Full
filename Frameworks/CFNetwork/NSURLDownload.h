/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLAuthenticationChallengeSender.h>

@class NSURLDownloadInternal, NSString, NSURLRequest, NSData;

@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender> {

	NSURLDownloadInternal* _internal;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURLRequest * request; 
@property (copy,readonly) NSData * resumeData; 
@property (assign) char deletesFileUponFailure; 
+(char)canResumeDownloadDecodedWithEncodingMIMEType:(id)arg1 ;
+(id)_downloadWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
+(id)_downloadWithLoadingCFURLConnection:(CFURLConnectionRef)arg1 request:(CFURLRequestRef)arg2 response:(CFURLResponseRef)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
+(id)_downloadWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3 ;
+(char)_isEncodingMIMETypeResumable:(id)arg1 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
-(void)_setDelegateQueue:(id)arg1 ;
-(void)cleanupChallenges;
-(void)withDelegate:(/*^block*/id)arg1 ;
-(id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)arg1 request:(CFURLRequestRef)arg2 response:(CFURLResponseRef)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3 ;
-(id)_initWithResumeInformation:(id)arg1 delegate:(id)arg2 path:(id)arg3 ;
-(id)initWithResumeData:(id)arg1 delegate:(id)arg2 path:(id)arg3 ;
-(id)_resumeInformation;
-(NSData *)resumeData;
-(void)setDestination:(id)arg1 allowOverwrite:(char)arg2 ;
-(void)_setDeletesFileAfterFailure:(char)arg1 ;
-(char)_deletesFileAfterFailure;
-(void)setDeletesFileUponFailure:(char)arg1 ;
-(char)deletesFileUponFailure;
-(id)_directoryPath;
-(void)_setDirectoryPath:(id)arg1 ;
-(void)_setOriginatingURL:(id)arg1 ;
-(id)_originatingURL;
-(void)releaseDelegate;
-(char)_downloadActive;
-(void)sendDidStart:(CFURLDownloadRef)arg1 ;
-(CFURLRequestRef)sendWillSendRequest:(CFURLRequestRef)arg1 redirectResponse:(CFURLResponseRef)arg2 ;
-(unsigned char)sendDownloadShouldUseCredentialStorage;
-(void)sendDidReceiveChallenge:(CFURLAuthChallengeRef)arg1 ;
-(void)sendDidReceiveResponse:(CFURLResponseRef)arg1 ;
-(void)sendWillResumeWithResponse:(CFURLResponseRef)arg1 startingByte:(unsigned long long)arg2 ;
-(void)sendDidReceiveData:(long)arg1 ;
-(BOOL)sendShouldDecodeDataOfMIMEType:(CFStringRef)arg1 ;
-(void)sendDecideDestinationWithSuggestedObjectName:(CFStringRef)arg1 ;
-(void)sendDidCreateDestination:(CFURLRef)arg1 ;
-(void)sendDidFinish;
-(void)sendDidFail:(CFErrorRef)arg1 ;
-(char)sendCanAuthenticateAgainstProtectionSpace:(CFURLProtectionSpaceRef)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)_delegate;
-(id)url;
-(NSURLRequest *)request;
-(void)_setDelegate:(id)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
@end

