/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PBMasterLayoutMap : NSObject {

	NSMutableDictionary* mMasterIdToMasterInfoMap;
	NSMutableDictionary* mTitleIdToMasterIdInfoMap;

}
+(id)masterLayoutMap;
-(void)dealloc;
-(id)init;
-(id)slideLayoutForSlideHolder:(id)arg1 ;
-(id)masterInfoForMasterId:(int)arg1 ;
-(int)masterIdForTitleId:(int)arg1 ;
-(id)masterInfoForSlideHolder:(id)arg1 ;
-(void)setMasterInfo:(id)arg1 forMasterId:(int)arg2 ;
-(id)allMasterIds;
-(void)setMasterId:(int)arg1 forTitleId:(int)arg2 ;
@end
