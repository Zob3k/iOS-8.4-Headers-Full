/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVLeafDataPayload.h>
#import <CalDAV/CalDAVCalendarItemProtocol.h>

@class NSString, CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem;

@interface CalDAVCalendarItemData : CoreDAVLeafDataPayload <CalDAVCalendarItemProtocol> {

	NSString* _scheduleTag;
	CalDAVCalendarServerScheduleChangesItem* _scheduleChanges;
	CalDAVUpdateOwnerItem* _createdBy;
	CalDAVUpdateOwnerItem* _updatedBy;

}

@property (nonatomic,retain) NSString * scheduleTag;                                                 //@synthesize scheduleTag=_scheduleTag - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerScheduleChangesItem * scheduleChanges;              //@synthesize scheduleChanges=_scheduleChanges - In the implementation block
@property (nonatomic,retain) CalDAVUpdateOwnerItem * createdBy;                                      //@synthesize createdBy=_createdBy - In the implementation block
@property (nonatomic,retain) CalDAVUpdateOwnerItem * updatedBy;                                      //@synthesize updatedBy=_updatedBy - In the implementation block
-(void)dealloc;
-(void)setCreatedBy:(CalDAVUpdateOwnerItem *)arg1 ;
-(CalDAVUpdateOwnerItem *)createdBy;
-(NSString *)scheduleTag;
-(void)setScheduleTag:(NSString *)arg1 ;
-(void)setScheduleChanges:(CalDAVCalendarServerScheduleChangesItem *)arg1 ;
-(CalDAVCalendarServerScheduleChangesItem *)scheduleChanges;
-(CalDAVUpdateOwnerItem *)updatedBy;
-(void)setUpdatedBy:(CalDAVUpdateOwnerItem *)arg1 ;
@end
