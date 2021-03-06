/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDrawableMapper.h>

@interface EMDrawableMapper : CMDrawableMapper {

	double* mRowGrid;
	double* mColumnGrid;

}
+(char)isAnchorRelative:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)setBoundingBox;
-(void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2 ;
-(void)mapDiagramAt:(id)arg1 withState:(id)arg2 ;
-(void)mapTextBoxAt:(id)arg1 withState:(id)arg2 ;
-(void)mapBounds;
-(id)initWithChartDrawable:(id)arg1 box:(CGRect)arg2 parent:(id)arg3 ;
-(id)worksheetMapper;
-(void)mapChartAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)getImageRect;
-(CGRect)mapAnchorToRect:(id)arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3 ;
-(CGPoint)anchorMarkerToPosition:(EDCellAnchorMarker)arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3 start:(char)arg4 relative:(char)arg5 ;
-(id)initWithOADDrawable:(id)arg1 parent:(id)arg2 ;
-(id)initWithOADDrawable:(id)arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3 ;
-(id)workbookMapper;
@end

