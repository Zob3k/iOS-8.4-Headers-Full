/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/NSCopying.h>

@interface ABPropertyGroupIdentifier : NSObject <NSCopying> {

	int _property;
	void* _context;

}

@property (nonatomic,readonly) int property;               //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) void* context;              //@synthesize context=_context - In the implementation block
+(id)propertyGroupIdentifierWithProperty:(int)arg1 context:(void*)arg2 ;
-(id)initWithProperty:(int)arg1 context:(void*)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void*)context;
-(int)property;
@end

