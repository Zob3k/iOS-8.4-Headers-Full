/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpriteKit/SpriteKit-Structs.h>
@interface SKSoundContext : NSObject {

	ALCdevice_structRef _device;
	ALCcontext_structRef _context;
	char _suspended;

}

@property (assign,nonatomic) double gain; 
@property (assign,nonatomic) CGPoint listenerPosition; 
@property (assign,nonatomic) char suspended; 
+(id)context;
+(id)currentContext;
-(char)suspended;
-(void)makeCurrentContext;
-(CGPoint)listenerPosition;
-(void)setListenerPosition:(CGPoint)arg1 ;
-(double)gain;
-(void)setGain:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setSuspended:(char)arg1 ;
@end

