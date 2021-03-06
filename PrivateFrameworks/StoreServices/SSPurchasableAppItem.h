/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSPurchasableItem.h>

@interface SSPurchasableAppItem : SSPurchasableItem
+(id)databaseTable;
+(id)allPropertyKeys;
+(id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(char)arg5 ;
+(id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(char)arg4 ;
+(id)sortByNameKey;
-(id)description;
-(id)category;
-(id)bundleID;
-(id)accountIdentifier;
-(id)iconURL;
-(id)companyName;
-(int)contentRatingFlags;
-(id)iconTitle;
-(char)isFamilyShareable;
-(char)isNewsstand;
-(id)longTitle;
-(unsigned)minimumOS;
-(char)supportsIPad;
-(char)supportsIPhone;
-(id)redownloadParams;
-(id)humanReadableVersion;
-(long long)iTunesVersion;
@end

