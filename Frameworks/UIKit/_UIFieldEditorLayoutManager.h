/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIFoundation/NSLayoutManager.h>

@interface _UIFieldEditorLayoutManager : NSLayoutManager {

	BOOL _needsExtraBulletRendering;

}

@property (assign) BOOL needsExtraBulletRendering;              //@synthesize needsExtraBulletRendering=_needsExtraBulletRendering - In the implementation block
-(void)showCGGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(unsigned)arg3 font:(id)arg4 matrix:(CGAffineTransform)arg5 attributes:(id)arg6 inContext:(CGContextRef)arg7 ;
-(BOOL)needsExtraBulletRendering;
-(void)setNeedsExtraBulletRendering:(BOOL)arg1 ;
@end

