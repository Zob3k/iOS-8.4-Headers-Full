/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreRecognition/CoreRecognition-Structs.h>
@class NSArray;

@interface FKTextFeature : NSObject {

	int _featureID;
	NSArray* _corners;
	int _type;
	NSArray* _subFeatures;
	CGRect _boundingBox;

}

@property (nonatomic,readonly) int featureID;                         //@synthesize featureID=_featureID - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox;                    //@synthesize boundingBox=_boundingBox - In the implementation block
@property (nonatomic,retain,readonly) NSArray * corners;              //@synthesize corners=_corners - In the implementation block
@property (nonatomic,readonly) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * subFeatures;                   //@synthesize subFeatures=_subFeatures - In the implementation block
+(id)featureFromConcomp:(concomp*)arg1 session:(SCD_Struct_FK6*)arg2 roiOffset:(CGPoint)arg3 dimensions:(CGSize)arg4 type:(int)arg5 createDiacriticFeatures:(char)arg6 featureID:(int*)arg7 ;
+(id)featureFromSequenceIndex:(int)arg1 session:(SCD_Struct_FK6*)arg2 roiOffset:(CGPoint)arg3 dimensions:(CGSize)arg4 createConcompFeatures:(char)arg5 createDiacriticFeatures:(char)arg6 featureID:(int*)arg7 ;
-(void)dealloc;
-(int)type;
-(NSArray *)corners;
-(CGRect)boundingBox;
-(NSArray *)subFeatures;
-(id)initWithType:(int)arg1 boundingBox:(CGRect)arg2 corners:(id)arg3 featureID:(int)arg4 ;
-(void)setSubFeatures:(NSArray *)arg1 ;
-(int)featureID;
@end

