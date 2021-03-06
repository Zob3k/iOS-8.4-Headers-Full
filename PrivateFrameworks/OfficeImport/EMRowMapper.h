/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class EDRowBlock;

@interface EMRowMapper : CMMapper {

	EDRowBlock* mRowBlock;
	EDRowInfo* mRowInfo;
	double* columnGrid;
	unsigned columnCount;

}
+(void)mapEmptyRowAt:(id)arg1 colspan:(unsigned)arg2 height:(double)arg3 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(char)isColumnHidden:(unsigned)arg1 ;
-(EDCellHeader*)cellWithColumnNumber:(unsigned)arg1 ;
-(void)insertEmptyCellAt:(id)arg1 withColSpan:(unsigned)arg2 height:(double)arg3 ;
-(void)mapEmptyCellsAt:(id)arg1 withState:(id)arg2 firstColumn:(unsigned)arg3 lastColumn:(unsigned)arg4 ;
-(id)initWithEDRowBlock:(id)arg1 rowInfo:(EDRowInfo*)arg2 parent:(id)arg3 ;
-(char)isMergedCell:(EDCellHeader*)arg1 ;
@end

