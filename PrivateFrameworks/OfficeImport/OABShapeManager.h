/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OABShapeBaseManager.h>
#import <OfficeImport/OABPropertiesManager.h>

@class NSString;

@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {

	EshShape* mShape;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isFilled;
-(char)isStroked;
-(id)initWithShape:(EshShape*)arg1 ;
-(id)initWithShape:(EshShape*)arg1 masterShape:(EshShape*)arg2 ;
-(char)isShadowed;
-(char)isFillOK;
-(char)isStrokeOK;
-(char)isShadowOK;
-(char)isTextPath;
-(id)textPathUnicodeString;
-(int)textPathTextAlignment;
-(int)textPathFontSize;
-(id)textPathFontFamily;
-(char)textPathBold;
-(char)textPathItalic;
-(char)textPathUnderline;
-(char)textPathSmallcaps;
-(char)textPathStrikethrough;
-(char)hidden;
@end

