/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABMembersDataSourceDelegate <NSObject>
@optional
-(void)abScrollViewDidBeginDragging:(id)arg1;

@required
-(char)abDataSource:(id)arg1 selectedPerson:(void*)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(char)arg5;
-(char)abDataSourceAllowsShowingPersonsCards:(id)arg1;
-(char)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;

@end
