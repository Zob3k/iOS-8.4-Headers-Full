/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPropertyAction.h>

@class ABPropertyBestIDSValueQuery;

@interface ABPropertyFaceTimeAction : ABPropertyAction {

	int _type;
	ABPropertyBestIDSValueQuery* _bestFaceTimeQuery;

}

@property (assign,nonatomic) int type;                                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) ABPropertyBestIDSValueQuery * bestFaceTimeQuery;              //@synthesize bestFaceTimeQuery=_bestFaceTimeQuery - In the implementation block
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 ;
-(void)_queryFaceTimeStatus;
-(ABPropertyBestIDSValueQuery *)bestFaceTimeQuery;
-(void)setBestFaceTimeQuery:(ABPropertyBestIDSValueQuery *)arg1 ;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
@end
