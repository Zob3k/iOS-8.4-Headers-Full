/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADTable, CMDrawableStyle, CMTableGridInfo, OADOrientedBounds;

@interface PMTableMapper : CMMapper {

	OADTable* mTable;
	CMDrawableStyle* mStyle;
	CMTableGridInfo* mGrid;
	OADOrientedBounds* mBounds;

}
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(unsigned)rowCount;
-(float)columnWidthAtIndex:(unsigned)arg1 state:(id)arg2 ;
-(id)tableBorderStyle;
-(id)cellStyle;
-(id)defaultCellFillForRow:(unsigned)arg1 withState:(id)arg2 ;
-(id)initWithOadTable:(id)arg1 bounds:(id)arg2 parent:(id)arg3 ;
-(void)mapTablePropertiesWithState:(id)arg1 ;
-(void)mapColumnGridAt:(id)arg1 withState:(id)arg2 ;
-(id)grid;
-(id)defaultCellFillWithState:(id)arg1 ;
@end
