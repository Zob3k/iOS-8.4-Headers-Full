/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/NSMutableCopying.h>

@interface OITSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {

	CFDictionaryRef mDictionary;

}
-(id)allKeys;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(id)description;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CFDictionaryRef)p_cfDictionary;
-(int)intForKey:(int)arg1 ;
-(void)setInt:(int)arg1 forKey:(int)arg2 ;
-(char)intIsPresentForKey:(int)arg1 outValue:(int*)arg2 ;
-(void)removeIntForKey:(int)arg1 ;
-(void)removeAllInts;
-(void)applyFromIntToIntDictionary:(id)arg1 ;
-(id)arrayOfBoxedKeys;
-(char)containsKey:(int)arg1 ;
@end

