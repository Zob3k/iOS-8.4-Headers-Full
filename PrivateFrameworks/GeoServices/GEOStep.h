/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEONameInfo, NSString, NSMutableArray, GEOTimeCheckpoints;

@interface GEOStep : PBCodable <NSCopying> {

	SCD_Struct_GE63* _laneGuidances;
	unsigned _laneGuidancesCount;
	unsigned _laneGuidancesSpace;
	SCD_Struct_GE64* _junctionElements;
	unsigned _junctionElementsCount;
	unsigned _junctionElementsSpace;
	unsigned _distance;
	GEONameInfo* _exitNumber;
	unsigned _expectedTime;
	int _hintFirstAnnouncementZilchIndex;
	NSString* _instructions;
	int _junctionType;
	int _maneuverEndBasicIndex;
	int _maneuverEndZilchIndex;
	NSMutableArray* _maneuverNames;
	int _maneuverStartZilchIndex;
	int _maneuverType;
	NSString* _notice;
	int _overrideDrivingSide;
	int _overrideTransportType;
	NSMutableArray* _signposts;
	unsigned _stepID;
	NSMutableArray* _substeps;
	GEOTimeCheckpoints* _timeCheckpoints;
	char _endsOnFwy;
	char _toFreeway;
	char _tollAhead;
	char _tollPrior;
	SCD_Struct_GE65 _has;

}

@property (nonatomic,readonly) unsigned maneuverEndIndex; 
@property (nonatomic,readonly) unsigned maneuverStartIndex; 
@property (nonatomic,readonly) char hasHintFirstAnnouncementIndex; 
@property (nonatomic,readonly) int hintFirstAnnouncementIndex; 
@property (assign,nonatomic) char hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                      //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) char hasManeuverEndBasicIndex; 
@property (assign,nonatomic) int maneuverEndBasicIndex;                            //@synthesize maneuverEndBasicIndex=_maneuverEndBasicIndex - In the implementation block
@property (assign,nonatomic) char hasManeuverStartZilchIndex; 
@property (assign,nonatomic) int maneuverStartZilchIndex;                          //@synthesize maneuverStartZilchIndex=_maneuverStartZilchIndex - In the implementation block
@property (assign,nonatomic) char hasManeuverEndZilchIndex; 
@property (assign,nonatomic) int maneuverEndZilchIndex;                            //@synthesize maneuverEndZilchIndex=_maneuverEndZilchIndex - In the implementation block
@property (assign,nonatomic) char hasDistance; 
@property (assign,nonatomic) unsigned distance;                                    //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) char hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                                //@synthesize expectedTime=_expectedTime - In the implementation block
@property (assign,nonatomic) char hasManeuverType; 
@property (assign,nonatomic) int maneuverType;                                     //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,retain) NSMutableArray * maneuverNames;                       //@synthesize maneuverNames=_maneuverNames - In the implementation block
@property (nonatomic,readonly) unsigned laneGuidancesCount; 
@property (nonatomic,readonly) SCD_Struct_GE63* laneGuidances; 
@property (assign,nonatomic) char hasJunctionType; 
@property (assign,nonatomic) int junctionType;                                     //@synthesize junctionType=_junctionType - In the implementation block
@property (nonatomic,readonly) unsigned junctionElementsCount; 
@property (nonatomic,readonly) SCD_Struct_GE64* junctionElements; 
@property (nonatomic,retain) NSMutableArray * signposts;                           //@synthesize signposts=_signposts - In the implementation block
@property (assign,nonatomic) char hasHintFirstAnnouncementZilchIndex; 
@property (assign,nonatomic) int hintFirstAnnouncementZilchIndex;                  //@synthesize hintFirstAnnouncementZilchIndex=_hintFirstAnnouncementZilchIndex - In the implementation block
@property (assign,nonatomic) char hasOverrideTransportType; 
@property (assign,nonatomic) int overrideTransportType;                            //@synthesize overrideTransportType=_overrideTransportType - In the implementation block
@property (assign,nonatomic) char hasOverrideDrivingSide; 
@property (assign,nonatomic) int overrideDrivingSide;                              //@synthesize overrideDrivingSide=_overrideDrivingSide - In the implementation block
@property (nonatomic,readonly) char hasExitNumber; 
@property (nonatomic,retain) GEONameInfo * exitNumber;                             //@synthesize exitNumber=_exitNumber - In the implementation block
@property (assign,nonatomic) char hasTollPrior; 
@property (assign,nonatomic) char tollPrior;                                       //@synthesize tollPrior=_tollPrior - In the implementation block
@property (assign,nonatomic) char hasTollAhead; 
@property (assign,nonatomic) char tollAhead;                                       //@synthesize tollAhead=_tollAhead - In the implementation block
@property (assign,nonatomic) char hasEndsOnFwy; 
@property (assign,nonatomic) char endsOnFwy;                                       //@synthesize endsOnFwy=_endsOnFwy - In the implementation block
@property (nonatomic,retain) NSMutableArray * substeps;                            //@synthesize substeps=_substeps - In the implementation block
@property (assign,nonatomic) char hasToFreeway; 
@property (assign,nonatomic) char toFreeway;                                       //@synthesize toFreeway=_toFreeway - In the implementation block
@property (nonatomic,readonly) char hasInstructions; 
@property (nonatomic,retain) NSString * instructions;                              //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) char hasNotice; 
@property (nonatomic,retain) NSString * notice;                                    //@synthesize notice=_notice - In the implementation block
@property (nonatomic,readonly) char hasTimeCheckpoints; 
@property (nonatomic,retain) GEOTimeCheckpoints * timeCheckpoints;                 //@synthesize timeCheckpoints=_timeCheckpoints - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)expectedTime;
-(unsigned)stepID;
-(void)setStepID:(unsigned)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(void)setHasDistance:(char)arg1 ;
-(char)hasDistance;
-(char)hasOverrideDrivingSide;
-(int)overrideDrivingSide;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)setHasExpectedTime:(char)arg1 ;
-(char)hasExpectedTime;
-(void)setManeuverNames:(NSMutableArray *)arg1 ;
-(void)clearLaneGuidances;
-(void)clearJunctionElements;
-(void)setSignposts:(NSMutableArray *)arg1 ;
-(void)setExitNumber:(GEONameInfo *)arg1 ;
-(void)setSubsteps:(NSMutableArray *)arg1 ;
-(void)setInstructions:(NSString *)arg1 ;
-(void)setNotice:(NSString *)arg1 ;
-(void)setTimeCheckpoints:(GEOTimeCheckpoints *)arg1 ;
-(void)addManeuverName:(id)arg1 ;
-(void)addSignpost:(id)arg1 ;
-(void)addSubsteps:(id)arg1 ;
-(unsigned)maneuverNamesCount;
-(void)clearManeuverNames;
-(id)maneuverNameAtIndex:(unsigned)arg1 ;
-(unsigned)laneGuidancesCount;
-(SCD_Struct_GE63)laneGuidanceAtIndex:(unsigned)arg1 ;
-(void)addLaneGuidance:(SCD_Struct_GE63)arg1 ;
-(unsigned)junctionElementsCount;
-(SCD_Struct_GE64)junctionElementAtIndex:(unsigned)arg1 ;
-(void)addJunctionElement:(SCD_Struct_GE64)arg1 ;
-(unsigned)signpostsCount;
-(void)clearSignposts;
-(id)signpostAtIndex:(unsigned)arg1 ;
-(unsigned)substepsCount;
-(void)clearSubsteps;
-(id)substepsAtIndex:(unsigned)arg1 ;
-(void)setHasStepID:(char)arg1 ;
-(char)hasStepID;
-(int)maneuverEndBasicIndex;
-(void)setManeuverEndBasicIndex:(int)arg1 ;
-(void)setHasManeuverEndBasicIndex:(char)arg1 ;
-(char)hasManeuverEndBasicIndex;
-(int)maneuverStartZilchIndex;
-(void)setManeuverStartZilchIndex:(int)arg1 ;
-(void)setHasManeuverStartZilchIndex:(char)arg1 ;
-(char)hasManeuverStartZilchIndex;
-(int)maneuverEndZilchIndex;
-(void)setManeuverEndZilchIndex:(int)arg1 ;
-(void)setHasManeuverEndZilchIndex:(char)arg1 ;
-(char)hasManeuverEndZilchIndex;
-(void)setManeuverType:(int)arg1 ;
-(void)setHasManeuverType:(char)arg1 ;
-(char)hasManeuverType;
-(SCD_Struct_GE63*)laneGuidances;
-(void)setLaneGuidances:(SCD_Struct_GE63*)arg1 count:(unsigned)arg2 ;
-(int)junctionType;
-(void)setJunctionType:(int)arg1 ;
-(void)setHasJunctionType:(char)arg1 ;
-(char)hasJunctionType;
-(SCD_Struct_GE64*)junctionElements;
-(void)setJunctionElements:(SCD_Struct_GE64*)arg1 count:(unsigned)arg2 ;
-(int)hintFirstAnnouncementZilchIndex;
-(void)setHintFirstAnnouncementZilchIndex:(int)arg1 ;
-(void)setHasHintFirstAnnouncementZilchIndex:(char)arg1 ;
-(char)hasHintFirstAnnouncementZilchIndex;
-(void)setOverrideTransportType:(int)arg1 ;
-(void)setHasOverrideTransportType:(char)arg1 ;
-(char)hasOverrideTransportType;
-(void)setOverrideDrivingSide:(int)arg1 ;
-(void)setHasOverrideDrivingSide:(char)arg1 ;
-(char)hasExitNumber;
-(char)tollPrior;
-(void)setTollPrior:(char)arg1 ;
-(void)setHasTollPrior:(char)arg1 ;
-(char)hasTollPrior;
-(char)tollAhead;
-(void)setTollAhead:(char)arg1 ;
-(void)setHasTollAhead:(char)arg1 ;
-(char)hasTollAhead;
-(char)endsOnFwy;
-(void)setEndsOnFwy:(char)arg1 ;
-(void)setHasEndsOnFwy:(char)arg1 ;
-(char)hasEndsOnFwy;
-(char)toFreeway;
-(void)setToFreeway:(char)arg1 ;
-(void)setHasToFreeway:(char)arg1 ;
-(char)hasToFreeway;
-(char)hasInstructions;
-(char)hasNotice;
-(char)hasTimeCheckpoints;
-(int)maneuverType;
-(NSMutableArray *)maneuverNames;
-(NSMutableArray *)signposts;
-(int)overrideTransportType;
-(GEONameInfo *)exitNumber;
-(NSMutableArray *)substeps;
-(NSString *)instructions;
-(NSString *)notice;
-(GEOTimeCheckpoints *)timeCheckpoints;
-(unsigned)maneuverEndIndex;
-(unsigned)maneuverStartIndex;
-(char)hasHintFirstAnnouncementIndex;
-(int)hintFirstAnnouncementIndex;
-(id)intersectionNameInfo;
-(void)shieldInfo:(/*^block*/id)arg1 ;
-(char)maneuverIsHighwayExit;
-(id)maneuverDescription;
-(unsigned)distance;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)firstNameInfo;
-(id)roadName;
@end
