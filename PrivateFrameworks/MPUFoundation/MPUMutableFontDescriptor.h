/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUFontDescriptor.h>

@interface MPUMutableFontDescriptor : MPUFontDescriptor

@property (assign,nonatomic) int textStyle; 
@property (assign,nonatomic) int weight; 
@property (assign,nonatomic) int leadingAdjustment; 
@property (assign,nonatomic) char usesItalic; 
@property (assign,nonatomic) char wantsMonospaceNumbers; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextStyle:(int)arg1 ;
-(void)setWeight:(int)arg1 ;
-(void)setUsesItalic:(char)arg1 ;
-(void)setWantsMonospaceNumbers:(char)arg1 ;
-(void)setLeadingAdjustment:(int)arg1 ;
@end

