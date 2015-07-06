/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface DADataHandler : NSObject {

	void* _container;
	NSString* _changeTrackingID;

}

@property (assign,nonatomic) void* container;                        //@synthesize container=_container - In the implementation block
@property (nonatomic,copy) NSString * changeTrackingID;              //@synthesize changeTrackingID=_changeTrackingID - In the implementation block
+(id)newDataHandlerForDataclass:(int)arg1 container:(void*)arg2 changeTrackingID:(id)arg3 ;
-(void)dealloc;
-(void)setContainer:(void*)arg1 ;
-(void*)container;
-(id)initWithContainer:(void*)arg1 changeTrackingID:(id)arg2 ;
-(int)getIdFromLocalObject:(void*)arg1 ;
-(void*)copyLocalObjectFromId:(int)arg1 ;
-(char)saveContainer;
-(id)copyOfAllLocalObjectsInContainer;
-(void)drainContainer;
-(char)wipeServerIds;
-(void)drainSuperfluousChanges;
-(void)openDB;
-(char)closeDBAndSave:(char)arg1 ;
-(id)getDAObjectWithLocalItem:(void*)arg1 serverId:(id)arg2 account:(id)arg3 ;
-(void)setChangeTrackingID:(NSString *)arg1 ;
-(int)dataclass;
-(NSString *)changeTrackingID;
@end
