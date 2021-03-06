/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSString;

@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem {

	NSMutableSet* _changedParameters;
	NSString* _nameAttribute;
	NSString* _typeAttribute;

}

@property (nonatomic,retain) NSMutableSet * changedParameters;              //@synthesize changedParameters=_changedParameters - In the implementation block
@property (nonatomic,retain) NSString * nameAttribute;                      //@synthesize nameAttribute=_nameAttribute - In the implementation block
@property (nonatomic,retain) NSString * typeAttribute;                      //@synthesize typeAttribute=_typeAttribute - In the implementation block
-(void)dealloc;
-(void)setNameAttribute:(NSString *)arg1 ;
-(void)setTypeAttribute:(NSString *)arg1 ;
-(void)setChangedParameters:(NSMutableSet *)arg1 ;
-(void)addChangedParameter:(id)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
-(void)parserFoundAttributes:(id)arg1 ;
-(NSString *)nameAttribute;
-(NSMutableSet *)changedParameters;
-(NSString *)typeAttribute;
@end

