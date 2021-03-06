/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLManagedAsset;

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification {

	NSDictionary* _userInfo;

}

@property (nonatomic,retain,readonly) PLManagedAsset * asset; 
+(id)notificationWithAsset:(id)arg1 snapshot:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)userInfo;
-(PLManagedAsset *)asset;
-(id)_contentRelationshipName;
@end

