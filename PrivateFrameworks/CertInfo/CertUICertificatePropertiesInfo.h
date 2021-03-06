/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CertInfo/CertInfo-Structs.h>
@class NSArray;

@interface CertUICertificatePropertiesInfo : NSObject {

	NSArray* _sections;
	NSArray* _sectionTitles;

}

@property (nonatomic,retain) NSArray * sections;                   //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSArray * sectionTitles;              //@synthesize sectionTitles=_sectionTitles - In the implementation block
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(NSArray *)sectionTitles;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(id)initWithCertificateProperties:(id)arg1 ;
-(void)_setup:(id)arg1 ;
-(id)_sendablePropertiesFromTrust:(SecTrustRef)arg1 ;
-(id)_sectionsFromProperties:(id)arg1 ;
-(id)_sendablePropertiesFromProperties:(id)arg1 ;
-(id)_cellInfosForSection:(id)arg1 ;
-(id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2 ;
-(id)_sendablePropertyFromProperty:(id)arg1 ;
-(id)_copyPropertiesFromTrust:(SecTrustRef)arg1 ;
-(void)setSectionTitles:(NSArray *)arg1 ;
-(id)initWithSendableCertificateProperties:(id)arg1 ;
@end

