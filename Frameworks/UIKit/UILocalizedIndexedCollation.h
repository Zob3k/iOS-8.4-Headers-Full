/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSLocale, NSArray, NSString;

@interface UILocalizedIndexedCollation : NSObject {

	NSLocale* _locale;
	NSArray* _sectionTitles;
	NSArray* _sectionStartStrings;
	NSArray* _sectionIndexTitles;
	NSArray* _sectionIndexMapping;
	NSString* _transform;
	NSString* _firstSectionStartString;
	NSString* _lastSectionStartString;
	CFStringTokenizerRef _tokenizer;

}

@property (nonatomic,readonly) NSArray * sectionTitles; 
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
+(id)collationWithDictionary:(id)arg1 ;
+(id)currentCollation;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(CFStringTokenizerRef)tokenizer;
-(id)transformedCollationStringForString:(id)arg1 ;
-(NSArray *)sectionTitles;
-(NSArray *)sectionIndexTitles;
-(int)sectionForSectionIndexTitleAtIndex:(int)arg1 ;
-(int)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2 ;
-(id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2 ;
@end

