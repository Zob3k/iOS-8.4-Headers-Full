/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData;

@interface BRAccount : NSObject {

	NSString* _accountID;
	NSData* _perAppAccountIdentifier;

}

@property (nonatomic,copy) NSData * perAppAccountIdentifier;              //@synthesize perAppAccountIdentifier=_perAppAccountIdentifier - In the implementation block
+(char)_refreshCurrentLoggedInAccountForcingRefresh:(char)arg1 error:(id*)arg2 ;
+(char)refreshCurrentLoggedInAccount;
+(id)currentCachedLoggedInAccountWithError:(id*)arg1 ;
+(id)currentLoggedInAccountWithError:(id*)arg1 ;
-(void)dealloc;
-(NSData *)perAppAccountIdentifier;
-(void)setPerAppAccountIdentifier:(NSData *)arg1 ;
-(char)loginWithError:(id*)arg1 ;
-(char)logoutWithError:(id*)arg1 ;
-(id)containerWithPendingChanges;
-(id)initWithAccountID:(id)arg1 ;
@end

