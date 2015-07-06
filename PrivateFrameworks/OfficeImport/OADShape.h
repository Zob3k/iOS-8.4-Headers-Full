/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADGraphic.h>

@class OADShapeGeometry, OADTextBody;

@interface OADShape : OADGraphic {

	OADShapeGeometry* mGeometry;
	OADTextBody* mTextBody;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(int)type;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(id)shapeProperties;
-(char)isTextBox;
-(id)textBody;
-(void)setTextBody:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(void)createPresetGeometryWithShapeType:(int)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)flattenProperties;
@end
