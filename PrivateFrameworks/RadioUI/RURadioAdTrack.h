/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <RadioUI/RURadioItemIdentifier.h>
#import <RadioUI/ADBannerViewDelegate.h>
#import <RadioUI/NSCopying.h>

@class ADBannerView, NSDictionary, NSURL, NSString;

@interface RURadioAdTrack : NSObject <RURadioItemIdentifier, ADBannerViewDelegate, NSCopying> {

	int _adType;
	ADBannerView* _adView;
	NSDictionary* _loudnessInfo;
	NSURL* _URL;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int actionType; 
@property (nonatomic,readonly) int adType;                                    //@synthesize adType=_adType - In the implementation block
@property (nonatomic,readonly) ADBannerView * adView;                         //@synthesize adView=_adView - In the implementation block
@property (nonatomic,readonly) NSURL * artworkURL; 
@property (nonatomic,readonly) char hasAction; 
@property (nonatomic,copy,readonly) NSDictionary * loudnessInfo;              //@synthesize loudnessInfo=_loudnessInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
-(NSDictionary *)loudnessInfo;
-(id)artworkCatalog;
-(NSURL *)artworkURL;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSString *)uniqueIdentifier;
-(char)hasAction;
-(ADBannerView *)adView;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(char)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(char)arg2 ;
-(void)bannerViewActionDidFinish:(id)arg1 ;
-(void)triggerAdAction;
-(int)actionType;
-(id)_loudnessInfoForVideoAssetDictionary:(id)arg1 ;
-(id)initWithAdView:(id)arg1 ;
-(int)adType;
-(id)radioIdentifier;
@end

