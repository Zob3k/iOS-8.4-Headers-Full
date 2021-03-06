/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSRegularExpression, NSString;

@interface SUOverlayConfiguration : NSObject {

	NSRegularExpression* _bagKeyPattern;
	int _cornerRadius;
	char _shouldShowNavigationBar;
	CGSize _size;
	NSString* _transitionName;
	NSRegularExpression* _urlPattern;

}

@property (nonatomic,readonly) int cornerRadius;                          //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) char shouldShowNavigationBar;              //@synthesize shouldShowNavigationBar=_shouldShowNavigationBar - In the implementation block
@property (nonatomic,readonly) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSString * transitionName;                 //@synthesize transitionName=_transitionName - In the implementation block
-(void)dealloc;
-(CGSize)size;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(int)cornerRadius;
-(char)shouldShowNavigationBar;
-(NSString *)transitionName;
-(char)matchesURL:(id)arg1 ;
-(char)matchesURLBagKey:(id)arg1 ;
@end

