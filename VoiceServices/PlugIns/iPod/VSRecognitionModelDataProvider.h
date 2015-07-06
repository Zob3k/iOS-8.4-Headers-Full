/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/VoiceServices/PlugIns/iPod.vsplugin/iPod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VSRecognitionModelDataProvider <NSObject>
@optional
-(void)beginReportingChanges;
-(void)stopReportingChanges;
-(id)valueAtIndex:(int)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3;
-(char)getValue:(id*)arg1 weight:(int*)arg2 atIndex:(int)arg3 forClassWithIdentifier:(id)arg4 inModelWithIdentifier:(id)arg5;
-(id)phoneticValueAtIndex:(int)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3;
-(id)cacheValidityIdentifier;
-(char)isCacheValidityIdentifierValid:(id)arg1;

@required
-(int)valueCountForClassWithIdentifier:(id)arg1 inModelWithIdentifier:(id)arg2;

@end
