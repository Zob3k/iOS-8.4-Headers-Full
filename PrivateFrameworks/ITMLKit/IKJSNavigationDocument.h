/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <ITMLKit/IKJSNavigationDocument.h>
@class NSArray;


@protocol IKJSNavigationDocument <JSExport>
@property (nonatomic,retain,readonly) NSArray * documents; 
@required
-(void)clear;
-(void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3;
-(NSArray *)documents;
-(void)popDocument;
-(void)popToDocument:(id)arg1;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1;
-(void)pushDocument:(id)arg1 :(id)arg2;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3;

@end


@protocol IKAppNavigationController;
@class NSArray;

@interface IKJSNavigationDocument : IKJSObject <IKJSNavigationDocument> {

	id<IKAppNavigationController> _navigationControllerDelegate;

}

@property (nonatomic,__weak,readonly) id<IKAppNavigationController> navigationControllerDelegate;              //@synthesize navigationControllerDelegate=_navigationControllerDelegate - In the implementation block
@property (nonatomic,retain,readonly) NSArray * documents; 
-(void)clear;
-(void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)_makeAppDocumentWithDocument:(id)arg1 ;
-(id<IKAppNavigationController>)navigationControllerDelegate;
-(NSArray *)documents;
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 navigationController:(id)arg2 ;
-(void)pushDocument:(id)arg1 :(id)arg2 ;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
@end

