/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray, ODDOtherwise;

@interface ODDChoose : ODDLayoutObject {

	NSMutableArray* mWhens;
	ODDOtherwise* mOtherwise;

}
-(void)dealloc;
-(id)init;
-(id)whens;
-(void)addWhen:(id)arg1 ;
-(id)otherwise;
-(void)setOtherwise:(id)arg1 ;
@end
