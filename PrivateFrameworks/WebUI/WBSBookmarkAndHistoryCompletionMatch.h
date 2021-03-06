/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <WebUI/WBSURLCompletionMatch.h>

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {

	RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>* _match;

}

@property (nonatomic,readonly) id<WBSURLCompletionMatchData> data; 
@property (nonatomic,readonly) float weight; 
-(id)title;
-(id<WBSURLCompletionMatchData>)data;
-(float)weight;
-(id)originalURLString;
-(id)initWithBookmarkAndHistoryCompletionMatch:(PassRefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>*)arg1 ;
-(id)userVisibleURLString;
-(id)parsecDomainIdentifier;
@end

