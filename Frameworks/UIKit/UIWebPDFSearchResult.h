/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSArray, NSString;

@interface UIWebPDFSearchResult : NSObject {

	NSArray* rotationAngles;
	unsigned pageIndex;
	NSArray* strings;
	NSString* string;
	NSArray* rects;
	CGRect boundingBox;

}

@property (assign,nonatomic) unsigned pageIndex; 
@property (nonatomic,retain) NSString * string; 
@property (assign,nonatomic) CGRect boundingBox; 
@property (nonatomic,retain) NSArray * strings; 
@property (nonatomic,retain) NSArray * rects; 
@property (nonatomic,retain) NSArray * rotationAngles; 
-(void)dealloc;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setStrings:(NSArray *)arg1 ;
-(NSArray *)strings;
-(void)setRects:(NSArray *)arg1 ;
-(NSArray *)rects;
-(CGRect)boundingBox;
-(NSArray *)rotationAngles;
-(unsigned)pageIndex;
-(void)setRotationAngles:(NSArray *)arg1 ;
-(void)setPageIndex:(unsigned)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
@end
