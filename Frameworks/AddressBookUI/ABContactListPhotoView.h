/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, ABStyleProvider, ABUIPerson;

@interface ABContactListPhotoView : UIView {

	UIImageView* _contactImageView;
	ABStyleProvider* _styleProvider;
	ABUIPerson* _person;

}

@property (nonatomic,retain) ABStyleProvider * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) ABUIPerson * person;                          //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) void* record; 
-(id)_framedPhoto;
-(id)initWithFrame:(CGRect)arg1 UIStyle:(int)arg2 ;
-(ABStyleProvider *)styleProvider;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)setStyleProvider:(ABStyleProvider *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(ABUIPerson *)person;
-(void)setPerson:(ABUIPerson *)arg1 ;
-(void*)record;
-(void)setRecord:(void*)arg1 ;
@end

