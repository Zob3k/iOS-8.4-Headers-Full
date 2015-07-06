/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData, NSURL;

@interface MFMixedMessageFragment : NSObject {

	NSString* _markupString;
	NSData* _markupData;
	NSString* _mimeType;
	NSString* _textEncodingName;
	NSURL* _baseURL;

}
-(id)initWithMarkupString:(id)arg1 baseURL:(id)arg2 ;
-(id)initWithMarkupData:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3 ;
-(id)markupData;
-(id)encodingName;
-(void)dealloc;
-(id)description;
-(id)mimeType;
-(id)baseURL;
-(id)markupString;
@end
