/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPSection.h>
#import <Search/PRSRowSection.h>

@class NSString, PRSImage, NSURL;

@interface SPRowSection : SPSection <PRSRowSection>

@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSURL * attribution_url; 
@property (nonatomic,retain) NSString * key; 
@property (assign,nonatomic) char key_nowrap; 
@property (assign,nonatomic) int key_weight; 
@property (nonatomic,retain) NSString * value; 
@property (assign,nonatomic) char value_nowrap; 
@property (assign,nonatomic) int value_weight; 
@property (nonatomic,retain) PRSImage * value_image; 
@end
