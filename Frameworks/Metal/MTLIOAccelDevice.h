/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLDevice.h>

@protocol OS_dispatch_queue;
@class MTLIOAccelDeviceShmemPool, MTLResourceListPool, NSObject;

@interface MTLIOAccelDevice : _MTLDevice {

	IOAccelDeviceRef _deviceRef;
	IOAccelSharedRef _sharedRef;
	MTLIOAccelDeviceShmemPool* _kernelCommandShmemPool;
	MTLIOAccelDeviceShmemPool* _segmentListShmemPool;
	id* _hwResourcePools;
	unsigned _hwResourcePoolCount;
	MTLResourceListPool* _akResourceListPool;
	MTLResourceListPool* _akPrivateResourceListPool;
	MTLIOAccelCommandBufferStoragePool* _commandBufferStoragePool;
	unsigned _configBits;
	unsigned _deviceBits;
	unsigned long long _textureRam;
	unsigned long long _videoRam;
	unsigned _accelID;
	unsigned long long _segmentByteThreshold;
	int _numCommandBuffers;
	MTLIOAccelHeap* _bufferHeaps[16];
	NSObject*<OS_dispatch_queue> _device_dispatch_queue;
	unsigned* _defaultBufferOptions;

}

@property (readonly) id* hwResourcePools;                         //@synthesize hwResourcePools=_hwResourcePools - In the implementation block
@property (readonly) unsigned hwResourcePoolCount;                //@synthesize hwResourcePoolCount=_hwResourcePoolCount - In the implementation block
@property (readonly) unsigned* defaultBufferOptions;              //@synthesize defaultBufferOptions=_defaultBufferOptions - In the implementation block
@property (readonly) int numCommandBuffers;                       //@synthesize numCommandBuffers=_numCommandBuffers - In the implementation block
+(void)registerDevices;
-(IOAccelSharedRef)sharedRef;
-(void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(int)arg5 ;
-(id)initWithAcceleratorPort:(unsigned)arg1 ;
-(short)heapIndexWithOptions:(unsigned)arg1 ;
-(void)setSegmentListShmemSize:(unsigned)arg1 ;
-(void)setComputePipelineStateCommandShmemSize:(unsigned)arg1 ;
-(void)setHwResourcePool:(id*)arg1 count:(int)arg2 ;
-(id)akResourceListPool;
-(id)akPrivateResourceListPool;
-(IOAccelDeviceRef)deviceRef;
-(id)allocBufferSubDataWithLength:(unsigned)arg1 options:(unsigned)arg2 alignment:(int)arg3 heapIndex:(short*)arg4 bufferIndex:(short*)arg5 bufferOffset:(int*)arg6 ;
-(id*)hwResourcePools;
-(unsigned)hwResourcePoolCount;
-(unsigned*)defaultBufferOptions;
-(int)numCommandBuffers;
-(void)dealloc;
@end
