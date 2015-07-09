//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTModalMenuViewDelegate.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTPodcastVideoViewControllerTransitionSurfaceProvider.h"
#import "SPTStartPageMomentViewControllerDelegate.h"
#import "SPTStartPageOverlayViewDelegate.h"
#import "SPTStartPageProductStateDelegate.h"
#import "SPTStartPageRootCollectionViewCellDelegate.h"
#import "SPTStartPageRootViewDelegate.h"
#import "SPTStartPageRootViewModelDelegate.h"
#import "SPViewController.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDelegate.h"

@class MetaViewController, NSMutableDictionary, NSString, SPApplication, SPTStartPageLogger, SPTStartPageMomentMenuDataSource, SPTStartPageOverlayView, SPTStartPageProductState, SPTStartPageRootView, SPTStartPageRootViewModel, SPTStartPageShadowGenerator, SPTViewLogger, UILabel, UITapGestureRecognizer;

@interface SPTStartPageRootViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UITableViewDelegate, UIGestureRecognizerDelegate, SPTStartPageRootViewModelDelegate, SPTStartPageOverlayViewDelegate, SPTStartPageProductStateDelegate, SPContentInsetViewController, SPTStartPageRootViewDelegate, SPTNavigationControllerNavigationBarState, SPTModalMenuViewDelegate, SPTStartPageRootCollectionViewCellDelegate, SPViewController, SPTStartPageMomentViewControllerDelegate, SPTPodcastVideoViewControllerTransitionSurfaceProvider>
{
    _Bool _displayOverlayView;
    _Bool _requiresReloadOnAwaken;
    _Bool _firstTimeViewingStartPage;
    SPApplication *_sharedApplication;
    UILabel *_titleLabel;
    double _cellHeight;
    SPTStartPageRootViewModel *_viewModel;
    SPTStartPageLogger *_logger;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTVideoSurfaceManager> _videoSurfaceManager;
    SPTStartPageOverlayView *_overlayView;
    id <SPTProductState> _productState;
    SPTStartPageProductState *_startPageProductState;
    SPTViewLogger *_viewLogger;
    MetaViewController *_metaViewController;
    SPTStartPageShadowGenerator *_shadowGenerator;
    id <SPTGaiaDeviceStateManager> _deviceStateManager;
    id <StartPageFeature> _startPageFeature;
    id <SPTRunningTestManager> _runningTestManager;
    SPTStartPageMomentMenuDataSource *_menuDataSource;
    UITapGestureRecognizer *_titleTapGestureRecognizer;
    id <SPTAdsManager> _adsManager;
    long long _cellTag;
    NSMutableDictionary *_cellVCMap;
}

@property(retain, nonatomic) NSMutableDictionary *cellVCMap; // @synthesize cellVCMap=_cellVCMap;
@property(nonatomic) long long cellTag; // @synthesize cellTag=_cellTag;
@property(nonatomic) __weak id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(retain, nonatomic) UITapGestureRecognizer *titleTapGestureRecognizer; // @synthesize titleTapGestureRecognizer=_titleTapGestureRecognizer;
@property(retain, nonatomic) SPTStartPageMomentMenuDataSource *menuDataSource; // @synthesize menuDataSource=_menuDataSource;
@property(nonatomic) __weak id <SPTRunningTestManager> runningTestManager; // @synthesize runningTestManager=_runningTestManager;
@property(nonatomic) __weak id <StartPageFeature> startPageFeature; // @synthesize startPageFeature=_startPageFeature;
@property(retain, nonatomic) id <SPTGaiaDeviceStateManager> deviceStateManager; // @synthesize deviceStateManager=_deviceStateManager;
@property(retain, nonatomic) SPTStartPageShadowGenerator *shadowGenerator; // @synthesize shadowGenerator=_shadowGenerator;
@property(nonatomic, getter=isFirstTimeViewingStartPage) _Bool firstTimeViewingStartPage; // @synthesize firstTimeViewingStartPage=_firstTimeViewingStartPage;
@property(nonatomic) __weak MetaViewController *metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(nonatomic) _Bool requiresReloadOnAwaken; // @synthesize requiresReloadOnAwaken=_requiresReloadOnAwaken;
@property(retain, nonatomic) SPTStartPageProductState *startPageProductState; // @synthesize startPageProductState=_startPageProductState;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic, getter=isOverlayViewDisplayed) _Bool displayOverlayView; // @synthesize displayOverlayView=_displayOverlayView;
@property(retain, nonatomic) SPTStartPageOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) id <SPTVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) SPTStartPageLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTStartPageRootViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak SPApplication *sharedApplication; // @synthesize sharedApplication=_sharedApplication;
- (void).cxx_destruct;
- (id)rootCollectionViewCellAccessibilityValue:(id)arg1;
- (_Bool)rootCollectionViewCell:(id)arg1 didSelectAccessibilityScroll:(long long)arg2;
- (void)rootCollectionViewCellDidSelectAccessibilityDecrement:(id)arg1;
- (void)rootCollectionViewCellDidSelectAccessibilityIncrement:(id)arg1;
- (void)rootCollectionViewCellDidSelectAccessibilityFocus:(id)arg1;
- (id)provideVideoSurfaceShadowViewForTransitionToViewController:(id)arg1;
- (id)provideVideoSurfaceContainerForTransitionToViewController:(id)arg1;
- (id)provideVideoSurfaceForTransitionToViewController:(id)arg1;
- (void)menuViewEdgeTapped;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)preferredNavigationBarState;
- (id)URI;
- (void)infoViewErrorButtonTapped;
- (void)updateInfoViewWithError:(id)arg1;
- (void)logEntityImpression;
- (_Bool)isActive;
- (_Bool)isVisible;
- (void)playCurrentMoment;
- (void)overlayViewWasSwipedAway;
- (void)overlayViewButtonTapped;
- (void)setDisplayOverlayView:(_Bool)arg1 animated:(_Bool)arg2 forceRender:(_Bool)arg3;
- (void)setDisplayOverlayView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDropdownButtonHidden:(_Bool)arg1 delay:(double)arg2 animated:(_Bool)arg3;
- (void)clearAllViewControllers;
- (id)momentViewControllerAtIndex:(long long)arg1;
- (void)hideMomentIconOverlayView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didTapTitleLabel;
- (void)productStateDidChange:(id)arg1;
- (void)startPageRootViewModelOfflineModeChanged:(id)arg1;
- (void)startPageRootViewModelDidStartNewContext:(id)arg1;
- (void)updateMomentBackgroundAndTitle;
- (void)updateViewPosition:(id)arg1;
- (void)updateCollectionViewAlpha:(_Bool)arg1;
- (void)startPageRootViewModel:(id)arg1 playerDidPause:(_Bool)arg2;
- (void)startPageRootViewModel:(id)arg1 modelDidChange:(_Bool)arg2 newPosition:(id)arg3;
- (void)startPageRootViewModelDidFinishLoading:(id)arg1;
- (void)startPageRootViewModel:(id)arg1 didFailWithError:(id)arg2;
- (void)rootViewDidTapMenuButton:(id)arg1;
- (_Bool)momentViewControllerShouldHideMetadataOnCells:(id)arg1;
- (void)momentViewController:(id)arg1 didChangeToContext:(id)arg2;
- (void)didSelectNavigateToContext:(id)arg1;
- (void)scrollToMomentAtIndex:(long long)arg1;
- (struct CGPoint)contentOffsetForPageIndex:(long long)arg1;
- (void)selectMomentAtIndex:(long long)arg1 autoplay:(_Bool)arg2;
- (void)updateDropdownButton;
- (void)momentWasSelected;
- (long long)calculatePageIndexForScrollView:(id)arg1 collectionView:(id)arg2;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)sp_updateContentInsets;
- (void)viewDidLayoutSubviews;
- (void)layoutViews;
- (void)shouldShowOverlayView:(CDUnknownBlockType)arg1;
- (void)reloadData;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)prepare;
- (id)title;
- (void)setupTitle;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) SPTStartPageRootView *rootView;
- (id)provideStartPageProductState;
- (void)dealloc;
- (id)initWithSharedApplication:(id)arg1 viewModel:(id)arg2 logger:(id)arg3 viewLogger:(id)arg4 imageLoaderFactory:(id)arg5 productState:(id)arg6 videoSurfaceManager:(id)arg7 metaViewControler:(id)arg8 deviceStateManager:(id)arg9 startPageFeature:(id)arg10 runningTestManager:(id)arg11 adsManager:(id)arg12;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
