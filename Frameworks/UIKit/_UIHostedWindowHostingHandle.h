/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSSecureCoding.h>

@interface _UIHostedWindowHostingHandle : NSObject <NSSecureCoding> {

	unsigned _contextID;
	CGAffineTransform _rootLayerTransform;
	CGRect _rootLayerFrame;

}

@property (nonatomic,readonly) unsigned contextID;                                //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,readonly) CGAffineTransform rootLayerTransform;              //@synthesize rootLayerTransform=_rootLayerTransform - In the implementation block
@property (nonatomic,readonly) CGRect rootLayerFrame;                             //@synthesize rootLayerFrame=_rootLayerFrame - In the implementation block
+(char)supportsSecureCoding;
+(id)hostedWindowHostingHandleWithContextID:(unsigned)arg1 rootLayerTransform:(CGAffineTransform)arg2 rootLayerFrame:(CGRect)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)contextID;
-(CGAffineTransform)rootLayerTransform;
-(CGRect)rootLayerFrame;
@end
