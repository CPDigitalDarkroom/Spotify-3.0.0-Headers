//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "PlaylistViewModelDelegate.h"
#import "SPContentInsetViewController.h"
#import "SPObjectRepresentation.h"
#import "SPSessionObserver.h"
#import "SPTContextMenuViewControllerDelegate.h"
#import "SPTEntityTableHeaderViewDelegate.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTOfflineModeStateObserver.h"
#import "SPTPlaylistActionDelegate.h"
#import "SPTPlaylistMetadataViewDelegate.h"
#import "SPTPlaylistSpecialTableHeaderViewDelegate.h"
#import "SPTProductStateObserver.h"
#import "SPTTableViewContinuousSwipeDelegate.h"
#import "SPTThemableViewLayoutDelegate.h"
#import "SPTTouchViewEngineDelegate.h"
#import "SPTTouchViewEngineObserver.h"
#import "UISearchBarDelegate.h"

@class MetaViewController, NSString, PlaylistViewModel, SPSession, SPTActionButton, SPTClientEventLogger, SPTEntityTableHeaderView, SPTInfoView, SPTPlaylistMetadataView, SPTPlaylistSortMenuButton, SPTPlaylistSpecialTableHeaderView, SPTPopoverController, SPTProgressView, SPTSearchBar, UIButton, UILabel, UISwitch, UIView;

@interface PlaylistViewController : SPTableViewController <SPContentInsetViewController, UISearchBarDelegate, SPTPlaylistMetadataViewDelegate, SPTNavigationControllerNavigationBarState, SPTPlaylistActionDelegate, SPTPlaylistSpecialTableHeaderViewDelegate, SPTImageLoaderDelegate, SPObjectRepresentation, SPTThemableViewLayoutDelegate, SPTEntityTableHeaderViewDelegate, SPTTouchViewEngineObserver, SPTTouchViewEngineDelegate, SPTContextMenuViewControllerDelegate, SPTOfflineModeStateObserver, SPTProductStateObserver, SPTTableViewContinuousSwipeDelegate, SPSessionObserver, PlaylistViewModelDelegate>
{
    _Bool _hasSetupContentOffset;
    _Bool _viewLoaderDidLoadEvent;
    _Bool _ignoreNextContextTracksUpdate;
    _Bool _cachedOfflineState;
    _Bool _tableViewNeedsReload;
    _Bool _showsAvailableOfflineRow;
    _Bool _lastShuffleMode;
    PlaylistViewModel *_viewModel;
    UISwitch *_availableOfflineSwitch;
    SPSession *_session;
    id <SPContextMenuFeature> _contextMenuFeature;
    MetaViewController *_metaViewController;
    id <CollectionFeature> _collection;
    id <SPTLocalSettings> _localSettings;
    SPTEntityTableHeaderView *_entityHeaderView;
    SPTPlaylistSpecialTableHeaderView *_specialHeaderView;
    SPTActionButton *_followButton;
    SPTSearchBar *_filterField;
    UIView *_filterAndSortContainer;
    SPTPlaylistSortMenuButton *_sortContextMenuButton;
    UIButton *_filterCancelButton;
    SPTProgressView *_progressView;
    SPTInfoView *_infoView;
    SPTPlaylistMetadataView *_metadataView;
    UILabel *_playlistOwnerLabel;
    id <SPTAudioTouch> _audioTouch;
    id <SPTImageLoader> _imageLoader;
    id <SPTTinkerbellManager> _tinkerbellManager;
    id <SPTTinkerbellStoryRegistry> _tinkerbellStoryRegistry;
    id <SPTTinkerbellItemPresentationController> _tinkerbellController;
    SPTClientEventLogger *_clientEventLogger;
    SPTPopoverController *_contextPopoverController;
    id <SPTProductState> _productState;
    NSString *_currentFilter;
    double _tableViewRowHeight;
    id <SPTOfflineModeState> _offlineNotifier;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTPromotedContentController> _promotedContentController;
}

@property(retain, nonatomic) id <SPTPromotedContentController> promotedContentController; // @synthesize promotedContentController=_promotedContentController;
@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(nonatomic) double tableViewRowHeight; // @synthesize tableViewRowHeight=_tableViewRowHeight;
@property(copy, nonatomic) NSString *currentFilter; // @synthesize currentFilter=_currentFilter;
@property(nonatomic) _Bool lastShuffleMode; // @synthesize lastShuffleMode=_lastShuffleMode;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) SPTPopoverController *contextPopoverController; // @synthesize contextPopoverController=_contextPopoverController;
@property(nonatomic) _Bool showsAvailableOfflineRow; // @synthesize showsAvailableOfflineRow=_showsAvailableOfflineRow;
@property(nonatomic) _Bool tableViewNeedsReload; // @synthesize tableViewNeedsReload=_tableViewNeedsReload;
@property(nonatomic) _Bool cachedOfflineState; // @synthesize cachedOfflineState=_cachedOfflineState;
@property(retain, nonatomic) SPTClientEventLogger *clientEventLogger; // @synthesize clientEventLogger=_clientEventLogger;
@property(retain, nonatomic) id <SPTTinkerbellItemPresentationController> tinkerbellController; // @synthesize tinkerbellController=_tinkerbellController;
@property(retain, nonatomic) id <SPTTinkerbellStoryRegistry> tinkerbellStoryRegistry; // @synthesize tinkerbellStoryRegistry=_tinkerbellStoryRegistry;
@property(retain, nonatomic) id <SPTTinkerbellManager> tinkerbellManager; // @synthesize tinkerbellManager=_tinkerbellManager;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(nonatomic) _Bool ignoreNextContextTracksUpdate; // @synthesize ignoreNextContextTracksUpdate=_ignoreNextContextTracksUpdate;
@property(nonatomic) _Bool viewLoaderDidLoadEvent; // @synthesize viewLoaderDidLoadEvent=_viewLoaderDidLoadEvent;
@property(nonatomic) _Bool hasSetupContentOffset; // @synthesize hasSetupContentOffset=_hasSetupContentOffset;
@property(retain, nonatomic) UILabel *playlistOwnerLabel; // @synthesize playlistOwnerLabel=_playlistOwnerLabel;
@property(retain, nonatomic) SPTPlaylistMetadataView *metadataView; // @synthesize metadataView=_metadataView;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *filterCancelButton; // @synthesize filterCancelButton=_filterCancelButton;
@property(retain, nonatomic) SPTPlaylistSortMenuButton *sortContextMenuButton; // @synthesize sortContextMenuButton=_sortContextMenuButton;
@property(retain, nonatomic) UIView *filterAndSortContainer; // @synthesize filterAndSortContainer=_filterAndSortContainer;
@property(retain, nonatomic) SPTSearchBar *filterField; // @synthesize filterField=_filterField;
@property(retain, nonatomic) SPTActionButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) SPTPlaylistSpecialTableHeaderView *specialHeaderView; // @synthesize specialHeaderView=_specialHeaderView;
@property(retain, nonatomic) SPTEntityTableHeaderView *entityHeaderView; // @synthesize entityHeaderView=_entityHeaderView;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <CollectionFeature> collection; // @synthesize collection=_collection;
@property(nonatomic) __weak MetaViewController *metaViewController; // @synthesize metaViewController=_metaViewController;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) UISwitch *availableOfflineSwitch; // @synthesize availableOfflineSwitch=_availableOfflineSwitch;
@property(retain, nonatomic) PlaylistViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)continuousSwipeEnabledForTableView:(id)arg1;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (_Bool)viewEngine:(id)arg1 shouldRecognizeTouch:(id)arg2;
- (void)contextMenuViewControllerDidDismiss:(id)arg1;
- (void)viewEngineDidEndInteraction:(id)arg1;
- (void)viewEngineDidBeginInteraction:(id)arg1;
- (void)entityTableHeaderView:(id)arg1 didScrollToPageNumber:(long long)arg2;
- (void)entityTableHeaderViewImageViewDidReceiveTap:(id)arg1;
- (int)stackedNavigationPageSize;
- (void)themableViewDidUpdateLayout:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)URL;
- (id)viewEventURI;
- (id)objectRepresentation;
- (_Bool)restoreWithObjectRepresentation:(id)arg1;
- (id)URI;
- (struct CGPoint)activeFilterAnimationOriginForSpecialTableView:(id)arg1;
- (void)specialTableHeaderView:(id)arg1 shuffleButtonWasTapped:(id)arg2;
- (void)reportPlaylistAnnotateAbuse;
- (void)showPlaylistStateActionProgressViewWithCustomIcon:(unsigned long long)arg1 title:(id)arg2;
- (void)togglePublicPlaylistStateWithAction:(id)arg1;
- (void)toggleCollaborativeStateWithAction:(id)arg1;
- (void)playlistActionWasTriggered:(id)arg1;
- (void)playlistMetadataView:(id)arg1 ownerViewTapped:(id)arg2 isOwnerName:(_Bool)arg3;
- (unsigned long long)preferredNavigationBarState;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)reloadTableViewIfNeeded;
- (void)setTableViewNeedsReload;
- (void)dismissFilterInterfaceForced:(_Bool)arg1;
- (void)dismissFilterInterface;
- (void)forcedDismissFilterInterface;
- (id)indexPathsForVisibleRowsInSection:(unsigned long long)arg1;
- (id)playlistOwnerName;
- (id)createPlaylistOwnerLabel;
- (void)hideInfoView;
- (void)showInfoView;
- (void)navigateToStartPage;
- (void)navigateToBrowse;
- (void)navigateToMusicHub;
- (void)updateInfoView;
- (void)unfollowAndPopViewController;
- (void)editDoneButtonTapped;
- (void)mainContextMenuButtonTapped;
- (void)sortContextButtonTapped:(id)arg1;
- (void)updateEditBarButtonAnimated:(_Bool)arg1;
- (void)shufflePlayButtonTapped;
- (void)toggleAvailableOfflineRowVisible:(_Bool)arg1 updateTableView:(_Bool)arg2;
- (void)toggleFollowingView:(_Bool)arg1 animated:(_Bool)arg2 fromContextMenu:(_Bool)arg3;
- (void)togglePlaylistFollowState:(_Bool)arg1 fromContextMenu:(_Bool)arg2;
- (void)followButtonTapped:(id)arg1;
- (void)sessionLoginModeChanged:(id)arg1;
- (void)updateCellTitleColors;
- (_Bool)shouldDisplaySpecialHeaderView;
- (id)createFilterField;
- (void)updateFilterAndSortConstraints;
- (id)createFilterAndSortBarWithFrame:(struct CGRect)arg1;
- (void)availableOfflineSwitchValueChanged:(id)arg1;
- (void)tableViewCellContextMenuButtonTapped:(id)arg1;
- (id)accessoryViewForIndexPath:(id)arg1;
- (_Bool)filterWithCancelButtonIsActive;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)playlistViewModel:(id)arg1 availableOfflineChanged:(_Bool)arg2;
- (void)playlistViewModelMetadataDidChange:(id)arg1;
- (void)playlistViewModelNowPlayingTrackDidChange:(id)arg1;
- (void)updateViewsExceptTableView;
- (void)playlistViewModelTracksDidChange:(id)arg1;
- (void)playlistViewModelContextDidLoad:(id)arg1;
- (void)sp_updateContentInsets;
- (void)applyThemeLayout;
- (void)presentShufflePlayButtonTinkerbell;
- (void)updateViewConstraints;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)refreshShuffleMode;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
- (void)dealloc;
- (id)initWithPlaylistViewModel:(id)arg1 trackContextPlayer:(id)arg2 player:(id)arg3 contextMenuFeature:(id)arg4 metaViewController:(id)arg5 collection:(id)arg6 localSettings:(id)arg7 imageLoader:(id)arg8 audioTouch:(id)arg9 tinkerbellManager:(id)arg10 tinkerbellStoryRegistry:(id)arg11 offlineManager:(id)arg12 clientEventLogger:(id)arg13 offlineNotifier:(id)arg14 productState:(id)arg15 bannerPresentationManager:(id)arg16 promotedContentController:(id)arg17;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

