/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <MediaSocial/SKUIArtworkRequestDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, SKUIMediaSocialAuthor, SKUIStyledImageDataConsumer, UIImage, SKUIResourceLoader, UITableView, NSString;

@interface MSCLAttributionSelectionViewController : SKUIViewController <SKUIArtworkRequestDelegate, UITableViewDataSource, UITableViewDelegate> {

	NSArray* _authors;
	SKUIMediaSocialAuthor* _destinationAuthor;
	SKUIStyledImageDataConsumer* _imageDataConsumer;
	UIImage* _placeholderImage;
	SKUIResourceLoader* _resourceLoader;
	int _selectedAuthorIndex;
	/*^block*/id _selectionBlock;
	UITableView* _tableView;

}

@property (nonatomic,copy) NSArray * authors;                                      //@synthesize authors=_authors - In the implementation block
@property (nonatomic,copy) SKUIMediaSocialAuthor * destinationAuthor;              //@synthesize destinationAuthor=_destinationAuthor - In the implementation block
@property (assign,nonatomic) int selectedAuthorIndex;                              //@synthesize selectedAuthorIndex=_selectedAuthorIndex - In the implementation block
@property (nonatomic,copy) id selectionBlock;                                      //@synthesize selectionBlock=_selectionBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(id)_placeholderImage;
-(id)_attributedTitleForAuthor:(id)arg1 ;
-(id)_imageForAuthor:(id)arg1 ;
-(id)selectionBlock;
-(id)_imageDataConsumer;
-(SKUIMediaSocialAuthor *)destinationAuthor;
-(void)setDestinationAuthor:(SKUIMediaSocialAuthor *)arg1 ;
-(int)selectedAuthorIndex;
-(void)setSelectedAuthorIndex:(int)arg1 ;
-(void)setSelectionBlock:(id)arg1 ;
-(NSArray *)authors;
-(void)setAuthors:(NSArray *)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
@end

