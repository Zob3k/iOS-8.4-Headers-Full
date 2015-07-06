/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PKPrinter;

@interface UIPrintInfoRequest : NSObject {

	PKPrinter* _printer;
	int _requestState;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic) int requestState;                //@synthesize requestState=_requestState - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)requestInfoForPrinter:(id)arg1 ;
-(void)dealloc;
-(id)completionHandler;
-(void)requestPrintInfo;
-(int)requestState;
-(void)setRequestState:(int)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
@end
