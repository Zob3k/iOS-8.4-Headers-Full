/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetTask.h>

@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask {

	NSFileHandle* _destinationFile;

}

@property (nonatomic,retain) NSFileHandle * destinationFile;              //@synthesize destinationFile=_destinationFile - In the implementation block
-(void)dealloc;
-(char)shouldLogResponseBody;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(NSFileHandle *)destinationFile;
-(id)initWithURL:(id)arg1 destinationFile:(id)arg2 ;
-(void)setDestinationFile:(NSFileHandle *)arg1 ;
@end

