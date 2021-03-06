//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTNavigationControllerNavigationBarState.h"
#import "SPViewController.h"

@class MetaViewController, NSString, SPSession, SPTBrowseGenreItemDTO, SPTEntityHeaderViewController, SPTGenreRollupTransparentScrollView, SPTInfoView, SPTTheme;

@interface SPTBrowseStickyHeaderViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPViewController>
{
    BOOL _shouldStartWithFirstSubcategory;
    SPTGenreRollupTransparentScrollView *_scrollView;
    SPTEntityHeaderViewController *_entityHeaderContainerVC;
    SPTInfoView *_infoView;
    SPSession *_session;
    SPTTheme *_theme;
    id <SPTImageLoader> _imageLoader;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTProductState> _productState;
    MetaViewController *_metaVC;
    UIViewController *_headerViewController;
    UIViewController *_contentViewController;
    SPTBrowseGenreItemDTO *_genreItem;
    id <SPTAudioDriverController> _audioDriverController;
    id <SPTOfflineInfoViewFactory> _offlineInfoViewFactory;
}

@property(readonly, nonatomic) id <SPTOfflineInfoViewFactory> offlineInfoViewFactory; // @synthesize offlineInfoViewFactory=_offlineInfoViewFactory;
@property(readonly, nonatomic) id <SPTAudioDriverController> audioDriverController; // @synthesize audioDriverController=_audioDriverController;
@property(readonly, nonatomic) SPTBrowseGenreItemDTO *genreItem; // @synthesize genreItem=_genreItem;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) UIViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) __weak MetaViewController *metaVC; // @synthesize metaVC=_metaVC;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTEntityHeaderViewController *entityHeaderContainerVC; // @synthesize entityHeaderContainerVC=_entityHeaderContainerVC;
@property(retain, nonatomic) SPTGenreRollupTransparentScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) BOOL shouldStartWithFirstSubcategory; // @synthesize shouldStartWithFirstSubcategory=_shouldStartWithFirstSubcategory;
- (void).cxx_destruct;
- (unsigned int)preferredNavigationBarState;
- (id)URI;
- (BOOL)automaticallyAdjustsScrollViewInsets;
- (void)setupHeader;
- (void)setupContentViewController;
- (void)setupEnclosingScrollView;
- (void)setupInfoView;
- (void)setupView;
- (void)viewDidLoad;
- (void)setupPropertiesWithOptionsMask:(int)arg1;
- (id)initWithGenreItem:(id)arg1 imageLoaderFactory:(id)arg2 productState:(id)arg3 session:(id)arg4 metaViewController:(id)arg5 theme:(id)arg6 audioDriverController:(id)arg7 options:(int)arg8 offlineInfoViewFactory:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

