/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PBCodable;

@interface AWDMetricContainer : NSObject {

	PBCodable* _metric;
	unsigned long _metricId;

}

@property (nonatomic,retain) PBCodable * metric;                    //@synthesize metric=_metric - In the implementation block
@property (nonatomic,readonly) unsigned long metricId;              //@synthesize metricId=_metricId - In the implementation block
-(void)dealloc;
-(void)setMetric:(PBCodable *)arg1 ;
-(id)initWithMetricId:(unsigned long)arg1 ;
-(PBCodable *)metric;
-(unsigned long)metricId;
@end

