/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUArrayCellConfiguration.h>
#import <iTunesStoreUI/ISStoreURLOperationDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate> {

	NSMutableDictionary* _artworkByURL;
	NSMutableArray* _artworkLoadOperations;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)copyDefaultContext;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)dealloc;
-(void)setRepresentedObject:(id)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)cancelArtworkRequests;
-(id)copyImageDataProvider;
-(id)_artworkImageForURL:(id)arg1 dataProvider:(id)arg2 ;
-(void)reloadAfterArtworkLoad;
-(id)artworkImageForItemImage:(id)arg1 ;
-(id)artworkImageForURL:(id)arg1 ;
@end

