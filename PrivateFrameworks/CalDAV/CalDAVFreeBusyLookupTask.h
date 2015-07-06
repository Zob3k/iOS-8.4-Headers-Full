/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVScheduleTask.h>

@class NSString;

@interface CalDAVFreeBusyLookupTask : CalDAVScheduleTask {

	NSString* _maskedUID;

}

@property (nonatomic,retain) NSString * maskedUID;              //@synthesize maskedUID=_maskedUID - In the implementation block
+(id)_freeBusyDocumentWithOrganizer:(id)arg1 attendees:(id)arg2 start:(id)arg3 end:(id)arg4 maskedUID:(id)arg5 extendedFreeBusy:(char)arg6 prodID:(id)arg7 ;
+(id)_icsDate:(id)arg1 calendar:(id)arg2 ;
-(void)dealloc;
-(id)initWithOrganizer:(id)arg1 originator:(id)arg2 attendees:(id)arg3 start:(id)arg4 end:(id)arg5 outboxURL:(id)arg6 maskedUID:(id)arg7 extendedFreeBusy:(char)arg8 prodID:(id)arg9 ;
-(void)setMaskedUID:(NSString *)arg1 ;
-(id)initWithOrganizer:(id)arg1 originator:(id)arg2 attendees:(id)arg3 start:(id)arg4 end:(id)arg5 outboxURL:(id)arg6 maskedUID:(id)arg7 ;
-(NSString *)maskedUID;
@end
