/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PASerializable.h>

@class NSUUID, NSString;

@interface PAStackshotImageInfo : NSObject <PASerializable> {

	unsigned long long _loadAddress;
	NSUUID* _imageUUID;

}

@property (readonly) unsigned long long loadAddress;                //@synthesize loadAddress=_loadAddress - In the implementation block
@property (readonly) NSUUID * imageUUID;                            //@synthesize imageUUID=_imageUUID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 ;
-(unsigned long long)loadAddress;
-(NSUUID *)imageUUID;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithSerializedImageInfo:(const SCD_Struct_PA5*)arg1 ;
-(id)initWithImageInfo:(void*)arg1 is64Bit:(char)arg2 ;
@end

