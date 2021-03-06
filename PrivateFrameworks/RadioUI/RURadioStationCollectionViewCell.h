/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <RadioUI/MPUStackViewDataSource.h>
#import <RadioUI/MPUTextDrawingCacheInvalidationObserver.h>

@class UIView, MPUBorderConfiguration, MPUStackView, NSMutableDictionary, UIImage, RURadioStationsCollectionViewTemplate, NSString;

@interface RURadioStationCollectionViewCell : UICollectionViewCell <MPUStackViewDataSource, MPUTextDrawingCacheInvalidationObserver> {

	UIView* _imageTintView;
	unsigned _stackDistanceIgnoreCount;
	MPUBorderConfiguration* _stackItemBorderConfiguration;
	MPUStackView* _stackView;
	NSMutableDictionary* _textImageViews;
	char _adjustsArtworkImageWhenHighlighted;
	char _displaysAsStack;
	char _nowPlaying;
	UIImage* _artworkImage;
	RURadioStationsCollectionViewTemplate* _radioStationsCollectionViewTemplate;

}

@property (assign,nonatomic) char adjustsArtworkImageWhenHighlighted;                                                  //@synthesize adjustsArtworkImageWhenHighlighted=_adjustsArtworkImageWhenHighlighted - In the implementation block
@property (nonatomic,retain) UIImage * artworkImage;                                                                   //@synthesize artworkImage=_artworkImage - In the implementation block
@property (assign,nonatomic) char displaysAsStack;                                                                     //@synthesize displaysAsStack=_displaysAsStack - In the implementation block
@property (assign,getter=isNowPlaying,nonatomic) char nowPlaying;                                                      //@synthesize nowPlaying=_nowPlaying - In the implementation block
@property (nonatomic,retain) RURadioStationsCollectionViewTemplate * radioStationsCollectionViewTemplate;              //@synthesize radioStationsCollectionViewTemplate=_radioStationsCollectionViewTemplate - In the implementation block
@property (assign,nonatomic,__weak) UIView * stackPerspectiveTargetView; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)textDrawingCacheWasInvalidated:(id)arg1 ;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
-(void)_updateImageTintView;
-(RURadioStationsCollectionViewTemplate *)radioStationsCollectionViewTemplate;
-(void)_updateDrawingForTextElementNamed:(id)arg1 ;
-(void)_updateDrawingsForAllTextElementsIncludingTemplateTextElement:(char)arg1 ;
-(void)_setText:(id)arg1 forElementNamed:(id)arg2 ;
-(id)_textForElementNamed:(id)arg1 ;
-(void)setAdjustsArtworkImageWhenHighlighted:(char)arg1 ;
-(void)setDisplaysAsStack:(char)arg1 ;
-(void)setNowPlaying:(char)arg1 ;
-(void)setRadioStationsCollectionViewTemplate:(RURadioStationsCollectionViewTemplate *)arg1 ;
-(void)setStackPerspectiveTargetView:(UIView *)arg1 ;
-(UIView *)stackPerspectiveTargetView;
-(void)beginIgnoringDistanceUpdatesForStack;
-(void)endIgnoringDistanceUpdatesForStack;
-(void)performInsertionAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateLayoutAndStackAttributesFromTemplateWithVanishingPointX:(float)arg1 ;
-(void)updateStackForChangedDistanceFromVanishingPoint;
-(char)adjustsArtworkImageWhenHighlighted;
-(char)displaysAsStack;
-(char)isNowPlaying;
-(int)numberOfItemsInStackView:(id)arg1 ;
-(void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(int)arg3 ;
-(void)stackView:(id)arg1 didCreateItem:(id)arg2 ;
-(void)performCompressionAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
@end

