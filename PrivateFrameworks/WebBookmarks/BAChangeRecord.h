/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebBookmarkCollection, WebBookmark;

@interface BAChangeRecord : NSObject {

	WebBookmarkCollection* _collection;
	WebBookmark* _bookmark;
	int _changeType;

}

@property (nonatomic,readonly) WebBookmarkCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) WebBookmark * bookmark;                          //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) int changeType;                                  //@synthesize changeType=_changeType - In the implementation block
-(WebBookmarkCollection *)collection;
-(void)dealloc;
-(id)description;
-(WebBookmark *)bookmark;
-(int)changeType;
-(id)changeTypeDescription;
-(id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 changeType:(int)arg3 ;
@end
