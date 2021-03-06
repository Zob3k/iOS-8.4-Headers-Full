/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface PTVolumeChangeNotifier : NSObject {

	NSMutableSet* ringerVolumeChangedHandlers;
	NSMutableSet* ringerSilentChangedHandlers;

}
+(id)sharedInstance;
-(id)init;
-(void)ringerVolumeChanged:(id)arg1 ;
-(void)addRingerSwitchChangedHandler:(/*^block*/id)arg1 ;
-(void)addVolumeChangedHandler:(/*^block*/id)arg1 ;
-(void)ringerSilentChanged;
@end

