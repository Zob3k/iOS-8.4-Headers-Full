/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <iTunesStoreUI/ISStoreURLOperationDelegate.h>

@class NSString, SUConcernItem;

@interface SUPostConcernOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSString* _commentText;
	SUConcernItem* _concern;
	unsigned long long _itemIdentifier;

}

@property (retain) NSString * commentText;                          //@synthesize commentText=_commentText - In the implementation block
@property (retain) SUConcernItem * concern;                         //@synthesize concern=_concern - In the implementation block
@property (assign) unsigned long long itemIdentifier;               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)run;
-(unsigned long long)itemIdentifier;
-(void)setCommentText:(NSString *)arg1 ;
-(NSString *)commentText;
-(id)_httpBody;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)initWithConcern:(id)arg1 ;
-(void)setConcern:(SUConcernItem *)arg1 ;
-(SUConcernItem *)concern;
@end
