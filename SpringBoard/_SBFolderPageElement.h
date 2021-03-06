/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:50 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBIconGridImage, SBFolderIcon;

@interface _SBFolderPageElement : NSObject {

	SBIconGridImage* _gridImage;
	unsigned _visibleRow;
	unsigned _pageIndex;
	SBFolderIcon* _folderIcon;

}

@property (nonatomic,retain) SBIconGridImage * gridImage;              //@synthesize gridImage=_gridImage - In the implementation block
@property (assign,nonatomic) unsigned visibleRow;                      //@synthesize visibleRow=_visibleRow - In the implementation block
@property (assign,nonatomic) unsigned pageIndex;                       //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic) SBFolderIcon * folderIcon;                //@synthesize folderIcon=_folderIcon - In the implementation block
-(void)setFolderIcon:(SBFolderIcon *)arg1 ;
-(SBFolderIcon *)folderIcon;
-(unsigned)visibleRow;
-(SBIconGridImage *)gridImage;
-(unsigned)firstVisibleMiniIconIndex;
-(unsigned)firstVisibleRowForGap;
-(void)setGridImage:(SBIconGridImage *)arg1 ;
-(void)setVisibleRow:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)pageIndex;
-(void)setPageIndex:(unsigned)arg1 ;
@end

