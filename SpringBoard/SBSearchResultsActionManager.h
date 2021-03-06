/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:45 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBSearchResultsActionManagerDelegate;
@class NSMutableSet;

@interface SBSearchResultsActionManager : NSObject {

	id<SBSearchResultsActionManagerDelegate> _delegate;
	NSMutableSet* _currentActions;

}

@property (assign) id<SBSearchResultsActionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) char hasCurrentAction; 
@property (nonatomic,readonly) NSMutableSet * currentActions;                      //@synthesize currentActions=_currentActions - In the implementation block
-(id)_performActionForResult:(id)arg1 inSection:(id)arg2 urls:(id)arg3 fromCardType:(id)arg4 sendFeedback:(char)arg5 forceDefaultAction:(char)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)willReturnToResultsList;
-(id)_performActionForResult:(id)arg1 inSection:(id)arg2 urls:(id)arg3 forceDefaultAction:(char)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)_performAction:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_actionForResult:(id)arg1 inSection:(id)arg2 ;
-(id)performActionForResult:(id)arg1 inSection:(id)arg2 ;
-(void)performCustomActionWithViewController:(id)arg1 ;
-(char)hasCurrentAction;
-(void)cancelCurrentActionAnimated:(char)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<SBSearchResultsActionManagerDelegate>)arg1 ;
-(id<SBSearchResultsActionManagerDelegate>)delegate;
-(NSMutableSet *)currentActions;
@end

