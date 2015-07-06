/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, NSArray;

@interface SKUITabularLockupColumn : NSObject {

	NSMutableArray* _childViewElements;
	int _identifier;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSArray * childViewElements;              //@synthesize childViewElements=_childViewElements - In the implementation block
@property (assign,nonatomic) int identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(id)description;
-(int)identifier;
-(void)setSize:(CGSize)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(NSArray *)childViewElements;
-(void)_addChildViewElement:(id)arg1 ;
-(id)initWithColumnIdentifier:(int)arg1 ;
@end
