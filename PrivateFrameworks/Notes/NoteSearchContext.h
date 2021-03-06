/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Notes/Notes-Structs.h>
@class NSMutableArray, NoteContext;

@interface NoteSearchContext : NSObject {

	CXQueryRef query;
	NSMutableArray* integerIds;
	NoteContext* noteContext;

}

@property (nonatomic,readonly) CXQueryRef query; 
-(void)dealloc;
-(CXQueryRef)query;
-(id)initWithSearchTerms:(id)arg1 context:(id)arg2 ;
-(char)nextSearchResults:(id*)arg1 includePrevious:(char)arg2 ;
@end

