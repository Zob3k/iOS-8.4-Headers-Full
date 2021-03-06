/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <PBBridgeSupport/NSCopying.h>

@class NSMutableArray;

@interface PBBProtoTransferPerformanceResults : PBCodable <NSCopying> {

	NSMutableArray* _macroActivites;
	NSMutableArray* _measures;
	NSMutableArray* _milestones;

}

@property (nonatomic,retain) NSMutableArray * milestones;                  //@synthesize milestones=_milestones - In the implementation block
@property (nonatomic,retain) NSMutableArray * measures;                    //@synthesize measures=_measures - In the implementation block
@property (nonatomic,retain) NSMutableArray * macroActivites;              //@synthesize macroActivites=_macroActivites - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)milestones;
-(void)setMilestones:(NSMutableArray *)arg1 ;
-(void)setMacroActivites:(NSMutableArray *)arg1 ;
-(void)setMeasures:(NSMutableArray *)arg1 ;
-(void)addMilestones:(id)arg1 ;
-(void)addMeasures:(id)arg1 ;
-(void)addMacroActivites:(id)arg1 ;
-(unsigned)milestonesCount;
-(void)clearMilestones;
-(id)milestonesAtIndex:(unsigned)arg1 ;
-(unsigned)measuresCount;
-(void)clearMeasures;
-(id)measuresAtIndex:(unsigned)arg1 ;
-(unsigned)macroActivitesCount;
-(void)clearMacroActivites;
-(id)macroActivitesAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)measures;
-(NSMutableArray *)macroActivites;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

