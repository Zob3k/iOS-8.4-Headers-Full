/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/VMUCallTreeNode.h>

@class NSCountedSet, NSString;

@interface VMUCallTreeLeafNode : VMUCallTreeNode {

	NSCountedSet* _addresses;
	NSString* _combinedName;

}
-(void)dealloc;
-(id)init;
-(void)addAddress:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 ;
-(void)getBrowserName:(id)arg1 ;
@end

