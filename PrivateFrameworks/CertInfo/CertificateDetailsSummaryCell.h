/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <CertInfo/CertUIItemDetailsSummaryCell.h>

@class NSArray;

@interface CertificateDetailsSummaryCell : CertUIItemDetailsSummaryCell {

	NSArray* _details;

}

@property (nonatomic,retain) NSArray * details;              //@synthesize details=_details - In the implementation block
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setCertificateTrust:(SecTrustRef)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(char)arg3 ;
-(void)setDetailsWithCertificateTrust:(SecTrustRef)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(char)arg3 ;
-(NSArray *)details;
-(void)setDetails:(NSArray *)arg1 ;
@end

