/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class SiriUISnippetViewController;


@protocol SiriUIReusableView <NSObject>
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController; 
@optional
-(UIEdgeInsets*)edgeInsets;
-(SiriUISnippetViewController *)snippetViewController;
-(void)setSnippetViewController:(id)arg1;

@required
+(float)defaultHeight;
+(id)reuseIdentifier;
+(id)elementKind;

@end

