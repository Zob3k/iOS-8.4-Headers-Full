/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, MCUIPayloadUserInputField;

@interface MCUIFieldCollection : NSObject {

	NSMutableArray* _payloadFieldArrays;
	int _currentPayloadIndex;
	int _currentFieldIndex;
	MCUIPayloadUserInputField* _currentField;
	char _isFinalField;

}
-(id)initWithUserInput:(id)arg1 ;
-(id)currentField;
-(char)currentFieldIsLastInPayload;
-(void)moveToNextField;
-(char)currentFieldIsFinalField;
-(id)userInputResponses;
-(id)responseDictionariesForCurrentPayload;
-(int)currentPayloadIndex;
-(char)currentFieldIsSinglePasswordField;
-(void)restartCurrentPayload;
-(void)_setCurrentFieldToCurrentIndices;
-(void)_setIsFinalField;
@end
