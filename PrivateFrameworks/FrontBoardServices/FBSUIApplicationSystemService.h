/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBSUIApplicationSystemServiceDelegate;
@class NSObject, NSString;

@interface FBSUIApplicationSystemService : NSObject {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<FBSUIApplicationSystemServiceDelegate> _delegate;

}

@property (assign,nonatomic) id<FBSUIApplicationSystemServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int badgeNumber; 
@property (nonatomic,copy) NSString * badgeString; 
@property (nonatomic,readonly) double backgroundTimeRemaining; 
@property (assign,nonatomic) float currentBacklightLevel; 
-(void)dealloc;
-(void)setDelegate:(id<FBSUIApplicationSystemServiceDelegate>)arg1 ;
-(id)init;
-(id<FBSUIApplicationSystemServiceDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(void)setBadgeString:(NSString *)arg1 ;
-(int)badgeNumber;
-(void)setBadgeNumber:(int)arg1 ;
-(double)backgroundTimeRemaining;
-(char)setNextWakeInterval:(double)arg1 ;
-(void)setCurrentBacklightLevel:(float)arg1 ;
-(float)currentBacklightLevel;
-(id)_getBadgeValue;
-(NSString *)badgeString;
@end

