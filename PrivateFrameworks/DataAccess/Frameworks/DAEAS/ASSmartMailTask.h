/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASSendMailTask.h>

@class NSString;

@interface ASSmartMailTask : ASSendMailTask {

	int _messageType;
	NSString* _originalMessageId;
	NSString* _originalFolderId;
	NSString* _originalLongId;
	char _retryWithoutReferences;

}
-(id)command;
-(int)commandCode;
-(char)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(char)processContext:(id)arg1 ;
-(id)parameterData;
-(id)initWithMessage:(id)arg1 messageID:(id)arg2 messageType:(int)arg3 originalMessageID:(id)arg4 originalFolderID:(id)arg5 originalLongID:(id)arg6 ;
-(void)handleTopLevelErrorStatus:(id)arg1 ;
-(id)requestBodyStreamOutKnownSize:(int*)arg1 ;
-(id)contentType;
@end

