/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface EDTableFilter : NSObject {

	int mScale;
	int mOperator;
	double mValue;
	double mFilterValue;

}
+(id)edTableFilter;
-(int)operatorType;
-(int)scale;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)setScale:(int)arg1 ;
-(double)filterValue;
-(void)setFilterValue:(double)arg1 ;
-(void)setOperatorType:(int)arg1 ;
@end
