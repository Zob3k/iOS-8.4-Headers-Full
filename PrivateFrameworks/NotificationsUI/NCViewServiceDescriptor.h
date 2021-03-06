/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationsUI/NotificationsUI-Structs.h>
#import <NotificationsUI/NSCopying.h>
#import <NotificationsUI/NSSecureCoding.h>

@class NSString;

@interface NCViewServiceDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSString* _viewControllerClassName;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * viewControllerClassName;              //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(char)supportsSecureCoding;
+(id)descriptorWithViewControllerClassName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(char)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithViewControllerClassName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(NSString *)viewControllerClassName;
@end

