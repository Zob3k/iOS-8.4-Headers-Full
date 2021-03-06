/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertAction.h>

@class MPPlaybackContext, MPAVController;

@interface MusicContextualUpNextAlertAction : UIAlertAction {

	int _insertionType;
	MPPlaybackContext* _playbackContext;
	MPAVController* _player;

}
+(id)contextualUpNextActionWithEntityValueContext:(id)arg1 insertionType:(int)arg2 didDismissHandler:(/*^block*/id)arg3 ;
-(void)_handleUpNextAction;
@end

