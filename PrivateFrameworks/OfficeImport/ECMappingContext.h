/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface ECMappingContext : NSObject {

	map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > >* mIndexToMappedIndex;
	NSMutableDictionary* mSheetNameToMappedIndex;
	CFDictionaryRef mObjectToMappingInfo;
	NSMutableArray* mMappingInfos;

}
+(id)mappingContext;
-(void)dealloc;
-(id)init;
-(ChVector<OcText>*)mappedSheetNames;
-(unsigned)mappingInfoCount;
-(unsigned)mappedSheetIndexForSheetIndex:(unsigned)arg1 ;
-(id)mappingInfoForObject:(id)arg1 ;
-(id)mappingInfoAtIndex:(unsigned)arg1 ;
-(void)associateMappingInfo:(id)arg1 withSheetName:(id)arg2 andSheetIndex:(unsigned)arg3 andObject:(id)arg4 ;
-(unsigned)mappedSheetIndexForSheetName:(id)arg1 ;
@end

