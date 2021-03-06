/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPickerController.h>

@class ABPropertyGroupItem;

@interface ABLabelPickerController : ABPickerController {

	ABPropertyGroupItem* _item;

}

@property (nonatomic,readonly) ABPropertyGroupItem * item;              //@synthesize item=_item - In the implementation block
-(id)initForPropertyItem:(id)arg1 ;
-(void)removeCustomItem:(id)arg1 ;
-(void)dealloc;
-(ABPropertyGroupItem *)item;
-(void)viewWillAppear:(char)arg1 ;
@end

