/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
@class CPLRUDictionary;

@interface TILanguageModelLoaderClientRecord : NSObject {

	CPLRUDictionary* _recipientSpecificModels;
	shared_ptr<KB::LanguageModel>* _recipientAgnosticModel;

}

@property (nonatomic,readonly) shared_ptr<KB::LanguageModel>* recipientAgnosticModel;              //@synthesize recipientAgnosticModel=_recipientAgnosticModel - In the implementation block
-(void)dealloc;
-(shared_ptr<KB::LanguageModel>*)recipientAgnosticModel;
-(id)initWithRecipientAgnosticModel:(shared_ptr<KB::LanguageModel>*)arg1 ;
-(/*^block*/id)modelForRecipient:(id)arg1 ;
-(void)setModel:(/*^block*/id)arg1 forRecipient:(id)arg2 ;
-(void)clearDynamicLearningCaches;
@end

