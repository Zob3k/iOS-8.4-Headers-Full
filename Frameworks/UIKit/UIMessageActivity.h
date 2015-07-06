/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class MFMessageComposeViewController;

@interface UIMessageActivity : UIActivity {

	char _sourceIsManaged;
	MFMessageComposeViewController* _messageComposeViewController;

}

@property (assign,nonatomic) char sourceIsManaged;                                                       //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (nonatomic,retain) MFMessageComposeViewController * messageComposeViewController;              //@synthesize messageComposeViewController=_messageComposeViewController - In the implementation block
+(int)activityCategory;
-(void)dealloc;
-(void)_cleanup;
-(id)activityType;
-(id)_activityImage;
-(id)activityTitle;
-(id)_activitySettingsImage;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(char)sourceIsManaged;
-(id)activityViewController;
-(void)setSourceIsManaged:(char)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)setMessageComposeViewController:(MFMessageComposeViewController *)arg1 ;
-(MFMessageComposeViewController *)messageComposeViewController;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
@end
