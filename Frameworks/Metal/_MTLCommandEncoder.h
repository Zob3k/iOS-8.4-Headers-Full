/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandBuffer;
@class NSString, _MTLCommandBuffer;

@interface _MTLCommandEncoder : NSObject {

	id<MTLDevice> _device;
	NSString* _label;
	_MTLCommandBuffer*<MTLCommandBuffer> _commandBuffer;

}

@property (nonatomic,readonly) id<MTLDevice> device; 
@property (copy) NSString * label;                                //@synthesize label=_label - In the implementation block
-(void)insertDebugSignpost:(id)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)endEncoding;
-(id)commandBuffer;
-(void)dealloc;
-(id)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLDevice>)device;
@end

