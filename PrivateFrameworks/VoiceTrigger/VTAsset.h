/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ASAsset, NSArray, NSNumber, NSString;

@interface VTAsset : NSObject {

	ASAsset* _asset;

}

@property (nonatomic,readonly) NSArray * languages; 
@property (getter=isInstalled,nonatomic,readonly) char installed; 
@property (nonatomic,readonly) NSNumber * version; 
@property (nonatomic,readonly) NSString * path; 
-(id)description;
-(NSString *)path;
-(NSNumber *)version;
-(NSArray *)languages;
-(id)initWithASAsset:(id)arg1 ;
-(char)isInstalled;
@end

