/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:44 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBBBItemInfo.h>

@class SBBulletinListSection, NSString;

@interface SBBBSectionInfo : SBBBItemInfo {

	int _sectionCategory;

}

@property (nonatomic,readonly) int sectionCategory; 
@property (getter=isWidgetSection,nonatomic,readonly) char widgetSection; 
@property (nonatomic,readonly) SBBulletinListSection * representedListSection; 
@property (nonatomic,readonly) NSString * listSectionIdentifier; 
-(SBBulletinListSection *)representedListSection;
-(NSString *)listSectionIdentifier;
-(char)isWidgetSection;
-(id)identifier;
-(int)sectionCategory;
@end

