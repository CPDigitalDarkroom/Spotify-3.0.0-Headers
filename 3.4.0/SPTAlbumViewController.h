//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "SPObjectRepresentation.h"
#import "SPTAlbumMetadataViewDelegate.h"
#import "SPTAlbumViewModelPlaybackDelegate.h"
#import "SPTCollectionObserver.h"
#import "SPTEntityTableHeaderViewDelegate.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTOfflineObserver.h"
#import "SPTOfflineSwitchDelegate.h"
#import "SPTProductStateObserver.h"
#import "SPTSingleRequestViewModelDelegate.h"
#import "SPTTableViewContinuousSwipeDelegate.h"

@class NSString, SPTActionButton, SPTAlbumMetadataView, SPTAlbumViewModel, SPTClientEventLogger, SPTCollectionView, SPTEntityTableHeaderView, SPTInfoView, SPTOfflineManager, SPTPopoverController, SPTProgressView, SPTTableViewCell, SPTTableViewOfflineSwitchCell, SPTViewLogger;

@interface SPTAlbumViewController : SPTableViewController <SPTNavigationControllerNavigationBarState, SPTSingleRequestViewModelDelegate, SPTAlbumViewModelPlaybackDelegate, SPTImageLoaderDelegate, SPTAlbumMetadataViewDelegate, SPTCollectionObserver, SPTEntityTableHeaderViewDelegate, SPTOfflineObserver, SPTOfflineSwitchDelegate, SPTProductStateObserver, SPTTableViewContinuousSwipeDelegate, SPObjectRepresentation>
{
    _Bool _hasSetupContentOffset;
    _Bool _shouldMakeAvailableOfflineWhenSaved;
    _Bool _displayAvailableOffline;
    id <SPContextMenuFeature> _contextMenu;
    id <CollectionFeature> _collection;
    id <SPTAudioTouch> _audioTouch;
    SPTAlbumViewModel *_viewModel;
    id <SPTProductState> _productState;
    SPTViewLogger *_viewLogger;
    SPTClientEventLogger *_clientEventLogger;
    id <SPTImageLoader> _imageLoader;
    SPTAlbumMetadataView *_metadataView;
    SPTActionButton *_saveButton;
    SPTEntityTableHeaderView *_headerView;
    SPTProgressView *_progressView;
    SPTInfoView *_infoView;
    SPTCollectionView *_relatedAlbumsCollectionView;
    SPTTableViewCell *_copyrightCell;
    SPTPopoverController *_contextPopoverController;
    SPTOfflineManager *_offlineManager;
    SPTTableViewOfflineSwitchCell *_offlineSwitchCell;
}

@property(nonatomic) _Bool displayAvailableOffline; // @synthesize displayAvailableOffline=_displayAvailableOffline;
@property(nonatomic) _Bool shouldMakeAvailableOfflineWhenSaved; // @synthesize shouldMakeAvailableOfflineWhenSaved=_shouldMakeAvailableOfflineWhenSaved;
@property(retain, nonatomic) SPTTableViewOfflineSwitchCell *offlineSwitchCell; // @synthesize offlineSwitchCell=_offlineSwitchCell;
@property(nonatomic) __weak SPTOfflineManager *offlineManager; // @synthesize offlineManager=_offlineManager;
@property(retain, nonatomic) SPTPopoverController *contextPopoverController; // @synthesize contextPopoverController=_contextPopoverController;
@property(retain, nonatomic) SPTTableViewCell *copyrightCell; // @synthesize copyrightCell=_copyrightCell;
@property(retain, nonatomic) SPTCollectionView *relatedAlbumsCollectionView; // @synthesize relatedAlbumsCollectionView=_relatedAlbumsCollectionView;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTEntityTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool hasSetupContentOffset; // @synthesize hasSetupContentOffset=_hasSetupContentOffset;
@property(retain, nonatomic) SPTActionButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) SPTAlbumMetadataView *metadataView; // @synthesize metadataView=_metadataView;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTClientEventLogger *clientEventLogger; // @synthesize clientEventLogger=_clientEventLogger;
@property(retain, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) SPTAlbumViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(readonly, nonatomic) id <CollectionFeature> collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
- (void).cxx_destruct;
- (_Bool)continuousSwipeEnabledForTableView:(id)arg1;
- (_Bool)offlineSwitchCellShouldBeOn:(id)arg1;
- (void)offlineSwitchCellDidChangeState:(id)arg1 isOn:(_Bool)arg2;
- (void)offlineStateChangedForEntity:(id)arg1;
- (void)setAlbumIsOffline:(_Bool)arg1;
- (_Bool)albumIsOffline;
- (void)entityTableHeaderView:(id)arg1 didScrollToPageNumber:(long long)arg2;
- (void)entityTableHeaderViewImageViewDidReceiveTap:(id)arg1;
- (void)collectionDidChange:(id)arg1;
- (void)currentlyPlayingRowChanged;
- (void)viewModel:(id)arg1 setLoading:(_Bool)arg2;
- (void)viewModel:(id)arg1 offlineModeChanged:(_Bool)arg2;
- (void)viewModel:(id)arg1 didFailLoad:(id)arg2;
- (void)viewModel:(id)arg1 didLoadData:(id)arg2 loadTime:(double)arg3;
- (void)updateAvailableOffline:(_Bool)arg1;
- (void)updateVisiblePreviews;
- (void)updateInfoViewWithError:(id)arg1;
- (void)setupContextMenuButton;
- (void)updateHeaderSaveButton;
- (void)updateHeaderView;
- (void)updateHeaderViewPrimaryButton;
- (int)stackedNavigationPageSize;
- (void)albumMetadataView:(id)arg1 artistViewTapped:(id)arg2 isArtistName:(_Bool)arg3;
- (void)viewContextMenuButtonTapped;
- (void)trackContextMenuButtonTapped:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isCopyrightSection:(long long)arg1;
- (_Bool)isRelatedAlbumsSection:(long long)arg1;
- (_Bool)isTracksSection:(long long)arg1;
- (_Bool)isAvailableOfflineSection:(long long)arg1;
- (_Bool)playRowAtIndex:(long long)arg1;
- (void)toggleCollectionButtonTapped:(id)arg1;
- (void)resumePlayback;
- (void)shufflePlay;
- (void)registerAudioTouchInCell:(id)arg1 atIndexPath:(id)arg2;
- (void)configureRelatedAlbumCell:(id)arg1 atIndexPath:(id)arg2;
- (void)configureTrackCell:(id)arg1 atIndexPath:(id)arg2;
- (unsigned long long)offlineSyncStatusForURL:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)viewEventURI;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)setupHeaderView;
- (void)setupTableView;
- (long long)style;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)offlineURL;
- (void)dealloc;
- (id)initWithContextMenu:(id)arg1 collection:(id)arg2 albumViewModel:(id)arg3 productState:(id)arg4 viewLogger:(id)arg5 clientEventLogger:(id)arg6 imageLoader:(id)arg7 audioTouch:(id)arg8 offlineManager:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

