/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/NSCopying.h>

@class NSDictionary;

@interface RadioSearchStationResult : NSObject <NSCopying> {

	NSDictionary* _highlightRanges;
	NSDictionary* _stationDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * highlightRanges;                //@synthesize highlightRanges=_highlightRanges - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stationDictionary;              //@synthesize stationDictionary=_stationDictionary - In the implementation block
-(id)_initWithResponseDictionary:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)stationDictionary;
-(NSDictionary *)highlightRanges;
@end

