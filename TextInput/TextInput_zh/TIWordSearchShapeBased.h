/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearch.h>

@interface TIWordSearchShapeBased : TIWordSearch
-(char)validateCode:(id)arg1 withOption:(unsigned long)arg2 ;
-(char)addTopCandidateForCode:(id)arg1 option:(unsigned long)arg2 autoconvertedCandidates:(id)arg3 candidateRefsDictionary:(id)arg4 ;
-(id)autoconvertLongestValidPrefixes:(id)arg1 option:(unsigned long)arg2 candidateResultSet:(id)arg3 autoconvertedCandidateArray:(id*)arg4 ;
@end

