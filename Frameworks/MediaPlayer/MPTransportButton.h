/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPButton.h>

@class MPAVController;

@interface MPTransportButton : MPButton {

	MPAVController* player;

}

@property (nonatomic,retain) MPAVController * player; 
-(id)_automationID;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
@end
