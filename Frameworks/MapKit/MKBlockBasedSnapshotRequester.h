/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKMapSnapshotCreatorRequester.h>

@class NSString;

@interface MKBlockBasedSnapshotRequester : NSObject <MKMapSnapshotCreatorRequester> {

	/*^block*/id handler;

}

@property (nonatomic,copy) id handler; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snapshotRequesterWitHandler:(/*^block*/id)arg1 ;
-(void)mapSnapshotCreator:(id)arg1 didCreateSnapshot:(id)arg2 attributionString:(id)arg3 context:(id)arg4 ;
-(void)setHandler:(id)arg1 ;
-(id)handler;
@end
