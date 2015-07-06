/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface MPAVRoute : NSObject {

	NSString* _routeName;
	char _picked;
	NSDictionary* _avRouteDescription;
	MPAVRoute* _wirelessDisplayRoute;
	int _displayRouteType;
	char _requiresPassword;
	NSString* _routeUID;
	int _routeType;
	int _pickableRouteType;
	int _routeSubtype;

}

@property (nonatomic,readonly) NSString * routeName; 
@property (nonatomic,readonly) NSString * routeUID;                           //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,readonly) int routeType;                                 //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) int pickableRouteType;                         //@synthesize pickableRouteType=_pickableRouteType - In the implementation block
@property (nonatomic,readonly) int routeSubtype;                              //@synthesize routeSubtype=_routeSubtype - In the implementation block
@property (nonatomic,readonly) MPAVRoute * wirelessDisplayRoute; 
@property (getter=isPicked,nonatomic,readonly) char picked; 
@property (nonatomic,readonly) char requiresPassword;                         //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (nonatomic,readonly) int passwordType; 
@property (nonatomic,readonly) char displayIsPicked; 
@property (nonatomic,readonly) int displayRouteType; 
-(char)displayIsPicked;
-(id)_initWithAVRouteDescription:(id)arg1 ;
-(void)setRouteName:(NSString *)arg1 ;
-(void)setWirelessDisplayRoute:(MPAVRoute *)arg1 ;
-(void)setPicked:(char)arg1 ;
-(int)passwordType;
-(void)_routingControllerPickedRouteNotification:(id)arg1 ;
-(void)setAVRouteDescription:(id)arg1 ;
-(int)displayRouteType;
-(void)setDisplayRouteType:(int)arg1 ;
-(NSString *)routeUID;
-(id)avRouteDescription;
-(int)routeType;
-(int)routeSubtype;
-(int)pickableRouteType;
-(NSString *)routeName;
-(char)requiresPassword;
-(char)isPicked;
-(MPAVRoute *)wirelessDisplayRoute;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
@end
