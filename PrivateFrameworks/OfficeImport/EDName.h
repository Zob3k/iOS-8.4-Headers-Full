/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, OITSUPointerKeyDictionary, EDString, EDFormula;

@interface EDName : NSObject {

	NSString* _formulaString;
	OITSUPointerKeyDictionary* _maxWorksheetReferences;
	EDString* _nameString;
	EDFormula* _formula;
	unsigned _sheetIndex;

}

@property (nonatomic,retain) EDString * nameString;                                             //@synthesize nameString=_nameString - In the implementation block
@property (nonatomic,readonly) char isInternalFunction; 
@property (nonatomic,readonly) NSString * internalFunctionName; 
@property (nonatomic,readonly) EDFormula * formula;                                             //@synthesize formula=_formula - In the implementation block
@property (assign,nonatomic) unsigned sheetIndex;                                               //@synthesize sheetIndex=_sheetIndex - In the implementation block
@property (nonatomic,readonly) OITSUPointerKeyDictionary * maxWorksheetReferences; 
+(id)name;
-(char)isEqualToString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(EDFormula *)formula;
-(unsigned)sheetIndex;
-(void)setSheetIndex:(unsigned)arg1 ;
-(void)setNameString:(EDString *)arg1 ;
-(char)isInternalFunction;
-(void)setFormula:(id)arg1 workbook:(id)arg2 ;
-(EDString *)nameString;
-(char)isEqualToEDName:(id)arg1 ;
-(NSString *)internalFunctionName;
-(OITSUPointerKeyDictionary *)maxWorksheetReferences;
-(id)formulaString;
-(void)setFormulaString:(id)arg1 workbook:(id)arg2 ;
@end
