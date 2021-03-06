/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIAbstractEntityProviderViewElement.h>
#import <StoreKitUI/SKUIEntityProviding.h>

@class RadioModel, NSArray, NSMapTable, NSString;

@interface SKUIRadioEntityProviderViewElement : SKUIAbstractEntityProviderViewElement <SKUIEntityProviding> {

	char _hasValidStations;
	int _countLimit;
	int _radioEntityProviderType;
	RadioModel* _radioModel;
	NSArray* _stations;
	NSMapTable* _stationToStationEntityValueProvider;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(unsigned)numberOfSections;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(unsigned)numberOfEntitiesInSection:(unsigned)arg1 ;
-(id)indexBarEntryEntityValueProviderAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfIndexBarEntries;
-(unsigned)sectionForSectionIndexBarEntryAtIndex:(unsigned)arg1 ;
-(id)sectionEntityValueProviderAtIndex:(int)arg1 ;
-(void)_invalidateWithContext:(id)arg1 ;
-(id)_stations;
-(id)_entityValueProviderForStation:(id)arg1 ;
@end

