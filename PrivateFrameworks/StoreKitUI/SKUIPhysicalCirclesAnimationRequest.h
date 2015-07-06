/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/NSCopying.h>

@interface SKUIPhysicalCirclesAnimationRequest : NSObject <NSCopying> {

	int _animationType;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) int animationType;              //@synthesize animationType=_animationType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAnimationType:(int)arg1 ;
-(int)animationType;
-(void)finishAnimation;
-(void)_setCompletionBlock:(/*^block*/id)arg1 ;
@end
