/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OISFUZipArchive, NSMutableDictionary;

@interface TCBundleResourcePackage : NSObject {

	OISFUZipArchive* mZipArchive;
	NSMutableDictionary* mEntryMap;

}
-(void)dealloc;
-(id)initWithZipArchive:(id)arg1 ;
-(id)entryWithName:(id)arg1 cacheResult:(char)arg2 ;
@end
