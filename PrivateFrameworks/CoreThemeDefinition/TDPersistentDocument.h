/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectModel, NSManagedObjectContext, NSURL, NSString;

@interface TDPersistentDocument : NSObject {

	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	id _store;
	NSURL* _fileURL;
	NSString* _fileType;
	NSURL* _temporaryFileURL;

}

@property (nonatomic,copy) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * fileType;                   //@synthesize fileType=_fileType - In the implementation block
@property (nonatomic,copy) NSURL * temporaryFileURL;              //@synthesize temporaryFileURL=_temporaryFileURL - In the implementation block
+(id)_fileModificationDateForURL:(id)arg1 ;
-(id)_persistentStoreCoordinator;
-(void)dealloc;
-(id)undoManager;
-(void)close;
-(id)displayName;
-(NSURL *)fileURL;
-(NSString *)fileType;
-(void)setFileType:(NSString *)arg1 ;
-(id)managedObjectModel;
-(id)persistentStoreTypeForFileType:(id)arg1 ;
-(char)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5 ;
-(id)managedObjectContext;
-(id)initWithType:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(char)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)saveDocument:(id)arg1 ;
-(void)setTemporaryFileURL:(NSURL *)arg1 ;
-(NSURL *)temporaryFileURL;
-(void)setManagedObjectContext:(id)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
@end

