/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSecureCoding.h>
#import <Foundation/NSCopying.h>

@class NSString;

@interface NSSortDescriptor : NSObject <NSSecureCoding, NSCopying> {

	unsigned _sortDescriptorFlags;
	NSString* _key;
	SEL _selector;
	id _selectorOrBlock;

}

@property (copy,readonly) NSString * key; 
@property (readonly) char ascending; 
@property (readonly) SEL selector; 
@property (readonly) id comparator; 
@property (retain,readonly) id reversedSortDescriptor; 
+(id)sortDescriptorWithKey:(id)arg1 ascending:(char)arg2 comparator:(/*^block*/id)arg3 ;
+(id)_defaultSelectorName;
+(void)initialize;
+(char)supportsSecureCoding;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(char)arg2 selector:(SEL)arg3 ;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(char)arg2 ;
-(void)allowEvaluation;
-(id)comparator;
-(int)compareObject:(id)arg1 toObject:(id)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithKey:(id)arg1 ascending:(char)arg2 comparator:(/*^block*/id)arg3 ;
-(id)_selectorName;
-(void)_setSelectorName:(id)arg1 ;
-(void)_disallowEvaluation;
-(char)_isEqualToSortDescriptor:(id)arg1 ;
-(void)_setKey:(id)arg1 ;
-(void)_setAscending:(char)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)selector;
-(id)initWithKey:(id)arg1 ascending:(char)arg2 ;
-(id)initWithKey:(id)arg1 ascending:(char)arg2 selector:(SEL)arg3 ;
-(char)ascending;
-(id)reversedSortDescriptor;
@end
