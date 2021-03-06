/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicEntityProviding.h>

@protocol MusicEntityValueProviding, MusicEntityProviding;
@class NSString;

@interface MusicCopyrightEntityProvider : NSObject <MusicEntityProviding> {

	id<MusicEntityValueProviding> _copyrightEntityValueProvider;
	char _hasCopyright;
	char _isContainerCopyEntityValueProvider;
	id<MusicEntityProviding> _sourceEntityProvider;

}

@property (nonatomic,readonly) id<MusicEntityProviding> sourceEntityProvider;              //@synthesize sourceEntityProvider=_sourceEntityProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned)numberOfSections;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned)arg1 ;
-(id)initWithSourceEntityProvider:(id)arg1 ;
-(void)_sourceEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(char)hasEntitiesNotInLibrary;
-(id<MusicEntityProviding>)sourceEntityProvider;
-(void)_reloadHasCopyrightAllowingInvalidation:(char)arg1 ;
-(char)hasEntities;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned)numberOfEntitiesInSection:(unsigned)arg1 ;
-(unsigned)numberOfIndexBarEntries;
-(unsigned)sectionForSectionIndexBarEntryAtIndex:(unsigned)arg1 ;
@end

