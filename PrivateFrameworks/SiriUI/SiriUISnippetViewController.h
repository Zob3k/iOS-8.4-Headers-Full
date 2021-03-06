/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <SiriUI/SiriUIViewController.h>

@protocol SiriUIReusableView, SiriUISnippetViewControllerDelegate;
@class UICollectionReusableView, AceObject, SAUISnippet, NSAttributedString, NSString, NSArray, SAUIAppPunchOut, SAUIConfirmationOptions;

@interface SiriUISnippetViewController : UIViewController <SiriUIViewController> {

	UICollectionReusableView*<SiriUIReusableView> _headerView;
	UICollectionReusableView*<SiriUIReusableView> _footerView;
	UICollectionReusableView*<SiriUIReusableView> _transparentHeaderView;
	UICollectionReusableView*<SiriUIReusableView> _transparentFooterView;
	char _topKeylineHidden;
	char _wantsConfirmationInsets;
	char _isFullPadWidth;
	char _loading;
	char _confirmed;
	char _cancelled;
	char _virgin;
	char _willAnimateConfirmation;
	char _willAnimateCancellation;
	char _showHeaderChevron;
	char _provisional;
	AceObject* aceObject;
	id<SiriUISnippetViewControllerDelegate> _delegate;
	SAUISnippet* _snippet;
	NSAttributedString* _attributedSubtitle;
	NSString* _navigationTitle;
	NSArray* _requestContext;
	SAUIAppPunchOut* _headerPunchOut;
	SAUIAppPunchOut* _snippetPunchOut;
	int _defaultKeylineType;
	SAUIConfirmationOptions* _previousConfirmationOptions;
	UIEdgeInsets _defaultViewInsets;

}

@property (assign,nonatomic,__weak) id<SiriUISnippetViewControllerDelegate> delegate;                                                                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SAUISnippet * snippet;                                                                                                                          //@synthesize snippet=_snippet - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSAttributedString * attributedSubtitle;                                                                                                          //@synthesize attributedSubtitle=_attributedSubtitle - In the implementation block
@property (assign,nonatomic) char topKeylineHidden;                                                                                                                          //@synthesize topKeylineHidden=_topKeylineHidden - In the implementation block
@property (nonatomic,copy) NSString * navigationTitle;                                                                                                                       //@synthesize navigationTitle=_navigationTitle - In the implementation block
@property (nonatomic,copy) NSArray * requestContext;                                                                                                                         //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * headerPunchOut;                                                                                                               //@synthesize headerPunchOut=_headerPunchOut - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * snippetPunchOut;                                                                                                              //@synthesize snippetPunchOut=_snippetPunchOut - In the implementation block
@property (assign,nonatomic) UIEdgeInsets defaultViewInsets;                                                                                                                 //@synthesize defaultViewInsets=_defaultViewInsets - In the implementation block
@property (assign,nonatomic) char wantsConfirmationInsets;                                                                                                                   //@synthesize wantsConfirmationInsets=_wantsConfirmationInsets - In the implementation block
@property (assign,nonatomic) char isFullPadWidth;                                                                                                                            //@synthesize isFullPadWidth=_isFullPadWidth - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                                                                                                  //@synthesize loading=_loading - In the implementation block
@property (assign,getter=isConfirmed,nonatomic) char confirmed;                                                                                                              //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,getter=isCancelled,nonatomic) char cancelled;                                                                                                              //@synthesize cancelled=_cancelled - In the implementation block
@property (getter=isVirgin,nonatomic,readonly) char virgin;                                                                                                                  //@synthesize virgin=_virgin - In the implementation block
@property (assign,nonatomic) int defaultKeylineType;                                                                                                                         //@synthesize defaultKeylineType=_defaultKeylineType - In the implementation block
@property (assign,setter=_setWillAnimateConfirmation:,getter=_willAnimateConfirmation,nonatomic) char willAnimateConfirmation;                                               //@synthesize willAnimateConfirmation=_willAnimateConfirmation - In the implementation block
@property (assign,setter=_setWillAnimateCancellation:,getter=_willAnimateCancellation,nonatomic) char willAnimateCancellation;                                               //@synthesize willAnimateCancellation=_willAnimateCancellation - In the implementation block
@property (setter=_setPreviousConfirmationOptions:,getter=_previousConfirmationOptions,nonatomic,retain) SAUIConfirmationOptions * previousConfirmationOptions;              //@synthesize previousConfirmationOptions=_previousConfirmationOptions - In the implementation block
@property (assign,nonatomic) char showHeaderChevron;                                                                                                                         //@synthesize showHeaderChevron=_showHeaderChevron - In the implementation block
@property (assign,setter=_setProvisional:,getter=_isProvisional,nonatomic) char provisional;                                                                                 //@synthesize provisional=_provisional - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AceObject * aceObject; 
-(id)_footerView;
-(void)setAttributedSubtitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedSubtitle;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<SiriUISnippetViewControllerDelegate>)arg1 ;
-(id<SiriUISnippetViewControllerDelegate>)delegate;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(char)isLoading;
-(id)_privateDelegate;
-(void)siriWillActivateFromSource:(int)arg1 ;
-(void)siriDidDeactivate;
-(float)desiredHeight;
-(void)setSnippet:(SAUISnippet *)arg1 ;
-(SAUISnippet *)snippet;
-(NSString *)navigationTitle;
-(NSArray *)requestContext;
-(void)setRequestContext:(NSArray *)arg1 ;
-(void)setDefaultViewInsets:(UIEdgeInsets)arg1 ;
-(Class)transparentFooterViewClass;
-(void)configureReusableTransparentFooterView:(id)arg1 ;
-(float)desiredHeightForTransparentFooterView;
-(void)wasAddedToTranscript;
-(AceObject *)aceObject;
-(void)setAceObject:(AceObject *)arg1 ;
-(char)removedAfterDialogProgresses;
-(char)isVirgin;
-(void)_setVirgin:(char)arg1 ;
-(int)_pinAnimationType;
-(int)_insertionAnimation;
-(int)_replacementAnimation;
-(void)setTopKeylineHidden:(char)arg1 ;
-(void)siriWillLayoutSnippetView;
-(void)_cellDidLayoutSubviews;
-(void)siriDidLayoutSnippetView;
-(char)_hasConfirmationButtons;
-(char)_willAnimateConfirmation;
-(char)_willAnimateCancellation;
-(Class)footerViewClass;
-(char)_hasConfirmationOrCancelledInsets;
-(float)desiredHeightForHeaderView;
-(float)desiredHeightForFooterView;
-(float)desiredHeightForTransparentHeaderView;
-(id)_transparentHeaderView;
-(id)_transparentFooterView;
-(UIEdgeInsets)defaultViewInsets;
-(SAUIAppPunchOut *)snippetPunchOut;
-(char)isConfirmed;
-(void)_snippetPunchOutButtonTapped;
-(SAUIAppPunchOut *)headerPunchOut;
-(char)showHeaderChevron;
-(void)setIsFullPadWidth:(char)arg1 ;
-(void)configureReusableHeaderView:(id)arg1 ;
-(Class)headerViewClass;
-(void)setWantsConfirmationInsets:(char)arg1 ;
-(void)setShowHeaderChevron:(char)arg1 ;
-(char)_isProvisional;
-(char)wantsConfirmationInsets;
-(id)_previousConfirmationOptions;
-(void)configureReusableFooterView:(id)arg1 ;
-(void)configureReusableTransparentHeaderView:(id)arg1 ;
-(char)topKeylineHidden;
-(void)headerTapped:(id)arg1 ;
-(void)confirmButtonTapped:(id)arg1 ;
-(Class)transparentHeaderViewClass;
-(id)_createReusableViewIfNeededWithClass:(Class)arg1 ;
-(void)willCancel;
-(void)willConfirm;
-(void)setConfirmed:(char)arg1 ;
-(void)_snippetViewControllerWillBeRemoved;
-(id)alternativeAceCommandsToPerformIfNotExposingViews;
-(void)setNavigationTitle:(NSString *)arg1 ;
-(void)setHeaderPunchOut:(SAUIAppPunchOut *)arg1 ;
-(void)setSnippetPunchOut:(SAUIAppPunchOut *)arg1 ;
-(char)isFullPadWidth;
-(int)defaultKeylineType;
-(void)setDefaultKeylineType:(int)arg1 ;
-(void)_setWillAnimateConfirmation:(char)arg1 ;
-(void)_setWillAnimateCancellation:(char)arg1 ;
-(void)_setPreviousConfirmationOptions:(id)arg1 ;
-(void)_setProvisional:(char)arg1 ;
-(void)setLoading:(char)arg1 ;
-(id)_headerView;
@end

