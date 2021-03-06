/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShade.h>

@class OADRelativeRect;

@interface OADPathShade : OADShade {

	OADRelativeRect* mFillToRect;
	char mIsFillToRectOverridden;
	int mType;
	char mIsTypeOverridden;

}
+(id)defaultProperties;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fillToRect;
-(void)setFillToRect:(id)arg1 ;
-(char)isFillToRectOverridden;
-(id)initWithDefaults;
-(char)isTypeOverridden;
@end

