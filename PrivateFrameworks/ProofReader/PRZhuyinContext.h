/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProofReader/PRAutocorrectionContext.h>

@class NSMutableArray;

@interface PRZhuyinContext : PRAutocorrectionContext {

	NSMutableArray* _modifications;
	NSMutableArray* _addedModifications;
	NSMutableArray* _removedModifications;
	NSMutableArray* _addedRemovedModifications;
	NSMutableArray* _prefixes;
	char* _buffer;
	unsigned* _syllableLengthArray;
	void* _connection;
	unsigned _length;
	unsigned _lengthBeforeApostrophes;
	unsigned _startingPoint;
	unsigned _lastIndexes[4];
	unsigned _nextIndexes[2];
	unsigned _startIndex;
	unsigned _endIndex;
	char _lastSyllableIsPartial;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(void)reset;
-(void)_removeModificationsAndMoveStartingPoint;
-(void)_advanceIndexes;
-(void)_addTranspositions;
-(void)_addReplacements;
-(void)_addDeletions;
-(void)_filterModifications;
-(void)_addInsertions;
-(void)removeNumberOfInputCharacters:(unsigned)arg1 ;
-(id)currentModifications;
-(void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3 ;
-(id)removedModifications;
-(id)addedModifications;
@end

