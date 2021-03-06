/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSError;

@interface CKDMMCSItemGroupSet : NSObject {

	NSMutableDictionary* _itemsByGroupTuple;

}

@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,retain) NSMutableDictionary * itemsByGroupTuple;              //@synthesize itemsByGroupTuple=_itemsByGroupTuple - In the implementation block
-(id)init;
-(id)description;
-(id)initWithItems:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(NSError *)error;
-(id)CKPropertiesDescription;
-(id)allItemGroups;
-(NSMutableDictionary *)itemsByGroupTuple;
-(void)setItemsByGroupTuple:(NSMutableDictionary *)arg1 ;
@end

