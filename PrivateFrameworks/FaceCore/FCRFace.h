/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FaceCore/FaceCore-Structs.h>
@class NSData, NSDictionary;

@interface FCRFace : NSObject {

	SCD_Struct_FC3 face;
	SCD_Struct_FC3 leftEye;
	SCD_Struct_FC3 rightEye;
	SCD_Struct_FC3 mouth;
	float faceSize;
	float faceAngle;
	int trackID;
	unsigned trackDuration;
	NSData* faceprint;
	int faceType;
	NSDictionary* faceLandmarkPoints;
	NSDictionary* expressionFeatures;
	NSDictionary* additionalInfo;

}

@property (assign) SCD_Struct_FC3 face; 
@property (assign) SCD_Struct_FC3 leftEye; 
@property (assign) SCD_Struct_FC3 rightEye; 
@property (assign) SCD_Struct_FC3 mouth; 
@property (assign) float faceSize; 
@property (assign) float faceAngle; 
@property (assign) int trackID; 
@property (assign) unsigned trackDuration; 
@property (retain) NSData * faceprint; 
@property (assign) int faceType; 
@property (retain) NSDictionary * faceLandmarkPoints; 
@property (retain) NSDictionary * expressionFeatures; 
@property (retain) NSDictionary * additionalInfo; 
@property (readonly) char hasLeftEyeBounds; 
@property (readonly) char hasRightEyeBounds; 
@property (readonly) char hasMouthBounds; 
-(void)setTrackID:(int)arg1 ;
-(char)hasLeftEyeBounds;
-(char)hasRightEyeBounds;
-(void)setFaceAngle:(float)arg1 ;
-(float)faceAngle;
-(void)setFaceType:(int)arg1 ;
-(void)setFaceSize:(float)arg1 ;
-(void)setExpressionFeatures:(NSDictionary *)arg1 ;
-(void)setLeftEye:(SCD_Struct_FC3)arg1 ;
-(void)setRightEye:(SCD_Struct_FC3)arg1 ;
-(void)setMouth:(SCD_Struct_FC3)arg1 ;
-(NSDictionary *)expressionFeatures;
-(SCD_Struct_FC3)leftEye;
-(SCD_Struct_FC3)rightEye;
-(SCD_Struct_FC3)mouth;
-(unsigned)trackDuration;
-(int)faceType;
-(float)faceSize;
-(void)dealloc;
-(char)hasMouthBounds;
-(NSDictionary *)faceLandmarkPoints;
-(void)setFaceLandmarkPoints:(NSDictionary *)arg1 ;
-(NSData *)faceprint;
-(void)setFaceprint:(NSData *)arg1 ;
-(void)setTrackDuration:(unsigned)arg1 ;
-(NSDictionary *)additionalInfo;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
-(int)trackID;
-(SCD_Struct_FC3)face;
-(void)setFace:(SCD_Struct_FC3)arg1 ;
@end

