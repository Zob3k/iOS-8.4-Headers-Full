/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/_UISettingsKeyPathObserver.h>
#import <PrototypeTools/PTSSectionObserver.h>

@class NSHashTable, NSString, NSMutableArray, _UISettings;

@interface PTSModule : NSObject <_UISettingsKeyPathObserver, PTSSectionObserver> {

	NSHashTable* _observers;
	NSString* _title;
	NSMutableArray* _allSections;
	NSMutableArray* _enabledSections;
	_UISettings* _settings;

}

@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableArray * allSections;                  //@synthesize allSections=_allSections - In the implementation block
@property (nonatomic,retain) NSMutableArray * enabledSections;              //@synthesize enabledSections=_enabledSections - In the implementation block
@property (nonatomic,retain) _UISettings * settings;                        //@synthesize settings=_settings - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sectionWithRows:(id)arg1 title:(id)arg2 condition:(id)arg3 ;
+(id)sectionWithRows:(id)arg1 ;
+(id)moduleWithTitle:(id)arg1 contents:(id)arg2 ;
+(id)sectionWithRows:(id)arg1 title:(id)arg2 ;
+(id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2 condition:(id)arg3 ;
+(id)moduleWithSettings:(id)arg1 ;
+(id)sectionWithRows:(id)arg1 title:(id)arg2 conditionFormat:(id)arg3 ;
+(id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned)numberOfSections;
-(_UISettings *)settings;
-(NSString *)title;
-(void)removeObserver:(id)arg1 ;
-(void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)setSettings:(_UISettings *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)sectionAtIndex:(unsigned)arg1 ;
-(void)section:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3 ;
-(void)sectionDidReload:(id)arg1 ;
-(void)enumerateAllRowsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEnabledRowsUsingBlock:(/*^block*/id)arg1 ;
-(char)hasEnabledEditableRows;
-(id)initWithContents:(id)arg1 ;
-(void)_addSection:(id)arg1 ;
-(void)_addSubmodule:(id)arg1 ;
-(id)_settingsForSection:(id)arg1 ;
-(void)_updateEnabledSections;
-(id)rowAtIndexPath:(id)arg1 ;
-(char)_shouldEnableSection:(id)arg1 ;
-(id)destinationForRowAtIndexPath:(id)arg1 withProposedDestination:(id)arg2 ;
-(void)setAllSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)enabledSections;
-(void)setEnabledSections:(NSMutableArray *)arg1 ;
-(id)indexPathForRow:(id)arg1 ;
-(void)deleteRowAtIndexPath:(id)arg1 ;
-(NSMutableArray *)allSections;
@end
