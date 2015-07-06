/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/NSCopying.h>

@class NSString, NSArray;

@interface PSMagnifyMode : NSObject <NSCopying> {

	char _zoomed;
	NSString* _localizedName;
	NSString* _name;
	NSArray* _previewHTMLStrings;
	NSArray* _previewStyleSheets;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                  //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,getter=isZoomed,nonatomic) char zoomed;               //@synthesize zoomed=_zoomed - In the implementation block
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * previewHTMLStrings;              //@synthesize previewHTMLStrings=_previewHTMLStrings - In the implementation block
@property (nonatomic,retain) NSArray * previewStyleSheets;              //@synthesize previewStyleSheets=_previewStyleSheets - In the implementation block
+(id)magnifyModeWithSize:(CGSize)arg1 name:(id)arg2 localizedName:(id)arg3 isZoomed:(char)arg4 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(NSString *)localizedName;
-(char)isZoomed;
-(void)setZoomed:(char)arg1 ;
-(NSArray *)previewHTMLStrings;
-(void)setPreviewHTMLStrings:(NSArray *)arg1 ;
-(NSArray *)previewStyleSheets;
-(void)setPreviewStyleSheets:(NSArray *)arg1 ;
@end
