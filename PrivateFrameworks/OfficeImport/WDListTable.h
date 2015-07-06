/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDDocument, NSMutableArray, NSMutableDictionary, WDList;

@interface WDListTable : NSObject {

	WDDocument* mDocument;
	NSMutableArray* mLists;
	NSMutableDictionary* mListMapById;
	WDList* mNullList;

}
-(void)dealloc;
-(id)initWithDocument:(id)arg1 ;
-(id)listWithListId:(long)arg1 ;
-(id)lists;
-(id)addListWithListId:(long)arg1 listDefinitionId:(long)arg2 ;
-(unsigned)listCount;
-(id)listAt:(unsigned)arg1 ;
@end
