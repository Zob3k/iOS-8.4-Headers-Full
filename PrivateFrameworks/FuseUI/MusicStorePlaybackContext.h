/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPPlaybackContext.h>

@class MusicClientContext, MusicEntityValueContext, NSArray;

@interface MusicStorePlaybackContext : MPPlaybackContext {

	MusicClientContext* _clientContext;
	MusicEntityValueContext* _containerEntityValueContext;
	NSArray* _items;

}

@property (nonatomic,retain) MusicClientContext * clientContext;                               //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) MusicEntityValueContext * containerEntityValueContext;              //@synthesize containerEntityValueContext=_containerEntityValueContext - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                    //@synthesize items=_items - In the implementation block
+(Class)queueFeederClass;
+(void)setDefaultClientContext:(id)arg1 ;
-(id)descriptionComponents;
-(id)init;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithStoreIDs:(id)arg1 ;
-(void)setContainerEntityValueContext:(MusicEntityValueContext *)arg1 ;
-(MusicEntityValueContext *)containerEntityValueContext;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
@end

