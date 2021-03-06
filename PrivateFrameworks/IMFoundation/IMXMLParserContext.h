/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString, NSArray;

@interface IMXMLParserContext : NSObject {

	NSData* _inContentAsData;

}

@property (retain,readonly) NSData * inContentAsData;                 //@synthesize inContentAsData=_inContentAsData - In the implementation block
@property (retain,readonly) NSString * name; 
@property (retain,readonly) NSArray * resultsForLogging; 
-(void)dealloc;
-(NSString *)name;
-(void)reset;
-(NSArray *)resultsForLogging;
-(NSData *)inContentAsData;
-(id)initWithContentAsData:(id)arg1 ;
-(id)initWithContent:(id)arg1 ;
-(id)inContent;
@end

