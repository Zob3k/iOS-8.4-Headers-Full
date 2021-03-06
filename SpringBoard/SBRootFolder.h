/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:49 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBFolder.h>

@class SBIconListModel;

@interface SBRootFolder : SBFolder

@property (nonatomic,readonly) char supportsDock; 
@property (nonatomic,retain) SBIconListModel * dock; 
+(char)isRootFolderClass;
-(id)nodeIdentifier;
-(char)supportsDock;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(void)placeIconsOnFirstPage:(id)arg1 ;
-(id)_listsForCompaction;
-(char)canRemoveIcons;
-(char)canEditDisplayName;
-(void)_setDock:(id)arg1 ;
-(SBIconListModel *)dock;
-(char)isRootFolder;
@end

