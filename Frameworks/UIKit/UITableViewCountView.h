/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@class NSString;

@interface UITableViewCountView : UILabel {

	NSString* _countString;
	int _count;

}
-(void)dealloc;
-(int)count;
-(void)setCount:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withCountString:(id)arg2 withCount:(int)arg3 ;
-(void)setCountString:(id)arg1 withCount:(int)arg2 ;
@end
