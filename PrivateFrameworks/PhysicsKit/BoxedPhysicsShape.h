/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhysicsKit/PhysicsKit-Structs.h>
@class NSArray;

@interface BoxedPhysicsShape : NSObject {

	int shapeType;
	NSArray* points;

}
+(id)boxPhysicsShape:(PKPhysicsShape*)arg1 ;
-(PKPhysicsShape*)unboxShape;
@end

