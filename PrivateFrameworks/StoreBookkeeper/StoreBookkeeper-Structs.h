/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned total_in;
	char* next_out;
	unsigned avail_out;
	unsigned total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned adler;
	unsigned reserved;
} z_stream_s;

