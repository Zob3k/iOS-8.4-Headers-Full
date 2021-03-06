/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBHandwritingPointFIFO.h>

@class NSMutableArray;

@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO {

	NSMutableArray* _prevPoints;
	unsigned _width;

}

@property (nonatomic,retain) NSMutableArray * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) unsigned width;                           //@synthesize width=_width - In the implementation block
-(void)dealloc;
-(void)flush;
-(unsigned)width;
-(void)addPoint:(CGPoint)arg1 ;
-(void)setWidth:(unsigned)arg1 ;
-(void)clear;
-(id)initWithFIFO:(id)arg1 width:(unsigned)arg2 ;
-(void)setPrevPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)prevPoints;
-(void)emitAveragedPoint;
@end

