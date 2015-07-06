/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDResources, EDString;

@interface EDTableColumn : NSObject {

	EDResources* mResources;
	unsigned mHeaderRowDxfIndex;
	unsigned mTotalsRowDxfIndex;
	unsigned mDataAreaDxfIndex;
	EDString* mName;
	EDString* mUniqueName;
	EDString* mTotalsRowLabel;

}
+(id)tableColumnWithResources:(id)arg1 ;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)uniqueName;
-(id)initWithResources:(id)arg1 ;
-(id)headerRowDxf;
-(void)setHeaderRowDxf:(id)arg1 ;
-(id)totalsRowDxf;
-(void)setTotalsRowDxf:(id)arg1 ;
-(id)dataAreaDxf;
-(void)setDataAreaDxf:(id)arg1 ;
-(unsigned)headerRowDxfIndex;
-(void)setHeaderRowDxfIndex:(unsigned)arg1 ;
-(unsigned)totalsRowDxfIndex;
-(void)setTotalsRowDxfIndex:(unsigned)arg1 ;
-(unsigned)dataAreaDxfIndex;
-(void)setDataAreaDxfIndex:(unsigned)arg1 ;
-(id)totalsRowLabel;
-(void)setUniqueName:(id)arg1 ;
-(void)setTotalsRowLabel:(id)arg1 ;
@end
