/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IKAppMediaItem;
@class IKJSMediaItem, NSString;

@interface IKAppMediaItemBridge : NSObject {

	id<IKAppMediaItem> _appMediaItem;
	IKJSMediaItem* _jsMediaItem;

}

@property (nonatomic,readonly) id<IKAppMediaItem> appMediaItem;                 //@synthesize appMediaItem=_appMediaItem - In the implementation block
@property (nonatomic,__weak,readonly) IKJSMediaItem * jsMediaItem;              //@synthesize jsMediaItem=_jsMediaItem - In the implementation block
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * description; 
-(void)setDescription:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)url;
-(NSString *)title;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id<IKAppMediaItem>)appMediaItem;
-(IKJSMediaItem *)jsMediaItem;
-(id)initWithJSMediaItem:(id)arg1 ;
-(void)certificateComplete:(id)arg1 error:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)contentIdentifierComplete:(id)arg1 error:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)keyComplete:(id)arg1 error:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)startLoadingCertificateDataForURL:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)startLoadingContentIdentifierDataForURL:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)startLoadingKeyDataForURL:(id)arg1 keyRequestData:(id)arg2 withCallback:(/*^block*/id)arg3 ;
@end

