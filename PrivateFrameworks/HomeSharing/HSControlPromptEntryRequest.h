/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@class NSDictionary;

@interface HSControlPromptEntryRequest : HSRequest {

	NSDictionary* _attributes;
	unsigned _interfaceID;

}

@property (nonatomic,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) unsigned interfaceID;                   //@synthesize interfaceID=_interfaceID - In the implementation block
+(id)requestWithInterfaceID:(unsigned)arg1 attributes:(id)arg2 ;
+(id)portInfoRequestWithInterfaceID:(unsigned)arg1 key:(unsigned)arg2 ;
-(NSDictionary *)attributes;
-(unsigned)interfaceID;
-(id)initWithInterfaceID:(unsigned)arg1 attributes:(id)arg2 ;
-(id)_bodyDataForAttributes:(id)arg1 ;
-(id)_commandStringForCommand:(unsigned)arg1 ;
@end

