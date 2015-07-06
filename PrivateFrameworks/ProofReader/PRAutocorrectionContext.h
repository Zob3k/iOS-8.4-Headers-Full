/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PRAutocorrectionContext : NSObject
+(id)autocorrectionContextOfType:(unsigned)arg1 ;
-(void)reset;
-(id)currentModifications;
-(void)addInputCharacter:(unsigned short)arg1 geometryData:(id)arg2 ;
-(double)validSequenceCorrectionThreshold;
-(void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3 ;
-(id)prefixes;
-(void)setValidSequenceCorrectionThreshold:(double)arg1 ;
-(id)removedModifications;
-(id)addedModifications;
@end
