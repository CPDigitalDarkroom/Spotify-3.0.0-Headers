//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTActivityEntityViewControllerDelegate.h"
#import "SPTActivityEntityViewDelegate.h"
#import "SPTActivityHeaderViewIPadDelegate.h"
#import "SPTActivityViewModelDelegate.h"
#import "SPTImageLoaderDelegate.h"
#import "SPViewController.h"
#import "UIPopoverControllerDelegate.h"

@class NSString, SPTActivityHeaderViewIPad, SPTActivityTableFooterCell, SPTActivityViewModel, SPTClientEventLogger, SPTInfoView, SPTPopoverController, SPTProgressView, SPTViewLogger, UIImageView;

@interface SPTActivityViewController : UITableViewController <SPTActivityViewModelDelegate, SPTImageLoaderDelegate, SPTActivityHeaderViewIPadDelegate, SPTActivityEntityViewControllerDelegate, UIPopoverControllerDelegate, SPContentInsetViewController, SPViewController, SPTActivityEntityViewDelegate>
{
    SPTActivityViewModel *_viewModel;
    UIImageView *_backgroundView;
    int _currentStoriesCount;
    SPTClientEventLogger *_logger;
    SPTViewLogger *_viewLogger;
    SPTInfoView *_nuxView;
    id <SPTImageLoader> _imageLoader;
    SPTProgressView *_progressView;
    SPTInfoView *_infoView;
    SPTActivityTableFooterCell *_activityFooterCell;
    SPTActivityHeaderViewIPad *_headerViewIPad;
    SPTPopoverController *_entityPopoverIPad;
    SPTPopoverController *_contextMenuPopover;
    float _pagingThreshold;
    id <FollowFeature> _followFeature;
    id <SPTActivityFeature> _activityFeature;
    struct CGPoint _lastScrollOffset;
}

@property(nonatomic) __weak id <SPTActivityFeature> activityFeature; // @synthesize activityFeature=_activityFeature;
@property(nonatomic) __weak id <FollowFeature> followFeature; // @synthesize followFeature=_followFeature;
@property(nonatomic) float pagingThreshold; // @synthesize pagingThreshold=_pagingThreshold;
@property(nonatomic) struct CGPoint lastScrollOffset; // @synthesize lastScrollOffset=_lastScrollOffset;
@property(retain, nonatomic) SPTPopoverController *contextMenuPopover; // @synthesize contextMenuPopover=_contextMenuPopover;
@property(retain, nonatomic) SPTPopoverController *entityPopoverIPad; // @synthesize entityPopoverIPad=_entityPopoverIPad;
@property(retain, nonatomic) SPTActivityHeaderViewIPad *headerViewIPad; // @synthesize headerViewIPad=_headerViewIPad;
@property(retain, nonatomic) SPTActivityTableFooterCell *activityFooterCell; // @synthesize activityFooterCell=_activityFooterCell;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTInfoView *nuxView; // @synthesize nuxView=_nuxView;
@property(retain, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) SPTClientEventLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) int currentStoriesCount; // @synthesize currentStoriesCount=_currentStoriesCount;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) SPTActivityViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (int)stackedNavigationPageSize;
- (void)activityEntityViewControllerShouldDismissPopover:(id)arg1;
- (void)activityHeaderViewIPadDidTapFollowSuggestionButton:(id)arg1;
- (void)handleImageLoaderDelegateMethodWithImage:(id)arg1 url:(id)arg2 context:(id)arg3 loadTime:(double)arg4;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)activityViewModel:(id)arg1 productStateChanged:(BOOL)arg2;
- (void)activityViewModel:(id)arg1 offlineModeChanged:(BOOL)arg2;
- (void)activityViewModel:(id)arg1 shouldChangeUnreadCount:(unsigned int)arg2;
- (void)activityViewModel:(id)arg1 playerStateChanged:(id)arg2;
- (void)activityViewModel:(id)arg1 didFailLoad:(id)arg2;
- (void)activityViewModelDidLoadOlderStories:(id)arg1 numberOfOlderStories:(unsigned int)arg2;
- (void)activityViewModelDidLoadNewStories:(id)arg1 numberOfNewStories:(unsigned int)arg2;
- (void)activityViewModel:(id)arg1 didLoadInitialDataWithStartTime:(double)arg2;
- (void)activityViewModel:(id)arg1 setLoading:(BOOL)arg2;
- (void)doRetry;
- (void)showNux:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showOrHideInfoView:(BOOL)arg1 animated:(BOOL)arg2;
- (void)hideInfoViewAnimated:(BOOL)arg1;
- (void)showInfoViewWithType:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)triggerRefreshControl:(id)arg1;
- (void)presentEntityPopoverWithContentViewController:(id)arg1 entityView:(id)arg2 entityData:(id)arg3;
- (void)presentContextMenuViewControllerForIndex:(int)arg1 viewForPopover:(id)arg2;
- (void)setEntityViewsOffline:(BOOL)arg1;
- (void)setupRefreshControlForOfflineState:(BOOL)arg1;
- (void)reloadAndCalculatePagingThreshold:(BOOL)arg1;
- (void)handleTapForEntityView:(id)arg1 data:(id)arg2;
- (void)navigateToViewForEntity:(id)arg1 entityView:(id)arg2;
- (void)activityEntityViewDidTapContextMenuButton:(id)arg1;
- (void)activityEntityView:(id)arg1 didTapAtElement:(unsigned int)arg2;
- (void)loadImagesForCell:(id)arg1 data:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleLink:(id)arg1 forStory:(id)arg2;
- (void)navigateToFollowPage;
- (void)emptyViewFollowButtonClicked;
- (void)followBarButtonItemClicked;
@property(readonly, nonatomic) NSString *viewTitle;
- (id)URI;
- (void)sp_updateContentInsets;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)updateDataOnViewWillAppear;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)viewEventURI;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 logger:(id)arg2 viewLogger:(id)arg3 followFeature:(id)arg4 activityFeature:(id)arg5 imageLoader:(id)arg6;

// Remaining properties
@property(nonatomic) BOOL automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
