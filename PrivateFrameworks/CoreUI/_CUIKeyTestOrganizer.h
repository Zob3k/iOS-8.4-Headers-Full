/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSArray;

@interface _CUIKeyTestOrganizer : NSObject {

	renditionkeytoken originalKey[16];
	NSArray* orderedNonZeroFlexibleAttributes;
	unsigned flexAttributesCount;
	renditionkeytoken testKey[16];
	unsigned chooseCount;
	unsigned subchooseCount;

}
-(void)dealloc;
-(unsigned)_attributeToBumpIndex;
-(char)_bumpTestKeyAttributeIndex:(unsigned)arg1 ;
-(id)_nonZeroFlexibleAttributesInKey:(const renditionkeytoken*)arg1 ;
-(void)_bumpTestKey;
-(id)initWithRenditionKey:(const renditionkeytoken*)arg1 ;
-(renditionkeytoken*)nextKey;
@end

