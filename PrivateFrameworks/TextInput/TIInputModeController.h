/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface TIInputModeController : NSObject {

	NSArray* _supportedInputModeIdentifiers;
	NSArray* _supportedInputModeLanguageAndRegions;
	NSString* currentLocale;
	NSString* currentLanguage;
	NSArray* enabledInputModes;
	NSArray* defaultInputModes;

}

@property (readonly) NSArray * supportedInputModeIdentifiers; 
@property (readonly) NSArray * supportedInputModeLanguageAndRegions; 
@property (readonly) NSArray * enabledInputModeIdentifiers; 
@property (nonatomic,copy) NSString * currentLocale; 
@property (nonatomic,copy) NSString * currentLanguage; 
@property (nonatomic,copy) NSArray * enabledInputModes; 
@property (nonatomic,copy) NSArray * defaultInputModes; 
+(id)sharedInputModeController;
+(id)_inputModesForLocale:(id)arg1 language:(id)arg2 modeFetcher:(/*^block*/id)arg3 ;
-(void)dealloc;
-(NSString *)currentLocale;
-(void)setEnabledInputModes:(NSArray *)arg1 ;
-(void)setDefaultInputModes:(NSArray *)arg1 ;
-(NSArray *)enabledInputModeIdentifiers;
-(NSArray *)enabledInputModes;
-(id)defaultEnabledInputModesForCurrentLocale;
-(NSArray *)defaultInputModes;
-(NSArray *)supportedInputModeIdentifiers;
-(NSArray *)supportedInputModeLanguageAndRegions;
-(void)setCurrentLocale:(NSString *)arg1 ;
-(void)setCurrentLanguage:(NSString *)arg1 ;
-(NSString *)currentLanguage;
@end

