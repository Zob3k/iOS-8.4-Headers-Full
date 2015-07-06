/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface CAMInflightAsset : NSObject {

	char _isVideo;
	char __didPersistAvalanche;
	char __hasPendingAvalanchePersistenceUpdate;
	short _visibilityState;
	NSString* _uuid;
	NSString* _directory;
	NSString* _filename;
	NSDate* _dateCreated;
	int _deviceOrientationDuringCapture;
	int _captureDeviceDuringCapture;
	NSString* _avalancheUUID;
	int _avalanchePickType;

}

@property (nonatomic,retain) NSString * uuid;                                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * directory;                                      //@synthesize directory=_directory - In the implementation block
@property (nonatomic,retain) NSString * filename;                                       //@synthesize filename=_filename - In the implementation block
@property (nonatomic,retain) NSDate * dateCreated;                                      //@synthesize dateCreated=_dateCreated - In the implementation block
@property (assign,nonatomic) int deviceOrientationDuringCapture;                        //@synthesize deviceOrientationDuringCapture=_deviceOrientationDuringCapture - In the implementation block
@property (assign,nonatomic) int captureDeviceDuringCapture;                            //@synthesize captureDeviceDuringCapture=_captureDeviceDuringCapture - In the implementation block
@property (assign,nonatomic) char isVideo;                                              //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,retain) NSString * avalancheUUID;                                  //@synthesize avalancheUUID=_avalancheUUID - In the implementation block
@property (assign,nonatomic) int avalanchePickType;                                     //@synthesize avalanchePickType=_avalanchePickType - In the implementation block
@property (assign,nonatomic) short visibilityState;                                     //@synthesize visibilityState=_visibilityState - In the implementation block
@property (nonatomic,readonly) char _didPersistAvalanche;                               //@synthesize _didPersistAvalanche=__didPersistAvalanche - In the implementation block
@property (nonatomic,readonly) char _hasPendingAvalanchePersistenceUpdate;              //@synthesize _hasPendingAvalanchePersistenceUpdate=__hasPendingAvalanchePersistenceUpdate - In the implementation block
-(id)init;
-(NSString *)uuid;
-(char)isVideo;
-(void)_avalanchePersistenceStateDidChange;
-(void)_persistAvalancheToFilesystem;
-(id)pathForImageFile;
-(int)deviceOrientationDuringCapture;
-(void)setDeviceOrientationDuringCapture:(int)arg1 ;
-(int)captureDeviceDuringCapture;
-(void)setCaptureDeviceDuringCapture:(int)arg1 ;
-(char)_didPersistAvalanche;
-(char)_hasPendingAvalanchePersistenceUpdate;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSDate *)dateCreated;
-(id)pathForOriginalFile;
-(id)mainFileURL;
-(NSString *)avalancheUUID;
-(int)avalanchePickType;
-(void)setUuid:(NSString *)arg1 ;
-(void)setDateCreated:(NSDate *)arg1 ;
-(id)pathForVideoFile;
-(short)visibilityState;
-(void)setVisibilityState:(short)arg1 ;
-(void)setAvalancheUUID:(NSString *)arg1 ;
-(void)setAvalanchePickType:(int)arg1 ;
-(NSString *)directory;
-(void)setDirectory:(NSString *)arg1 ;
-(void)setIsVideo:(char)arg1 ;
@end
