/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface TIAddressBookMecabraCache : NSObject {

	char _valid;
	NSArray* _nameReadingPairs;

}

@property (assign,getter=isValid,nonatomic) char valid;              //@synthesize valid=_valid - In the implementation block
@property (nonatomic,copy) NSArray * nameReadingPairs;               //@synthesize nameReadingPairs=_nameReadingPairs - In the implementation block
-(void)dealloc;
-(char)isValid;
-(void)setValid:(char)arg1 ;
-(NSArray *)nameReadingPairs;
-(void)setNameReadingPairs:(NSArray *)arg1 ;
@end
