//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPSessionObserver.h"
#import "SPTCollectionFilterBarDelegate.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTOfflineModeStateObserver.h"
#import "SPTPlaylistCreateNewPlaylistControllerDelegate.h"
#import "SPTPlaylistFolderViewModelDelegate.h"
#import "SPTPlaylistRootFolderViewController.h"
#import "SPTSwipeableTableViewCellDelegate.h"
#import "SyncProgressDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SPSession, SPTCollectionFilterBar, SPTCollectionToolbarHeaderView, SPTInfoView, SPTOfflineManager, SPTPlaylistCreateNewPlaylistController, SPTPlaylistFolderViewModel, SPTSyncProgressView, SPTTableView, SyncProgressController, UIBarButtonItem, UIScrollView, UITableView;

@interface SPTPlaylistFolderViewController : UIViewController <SyncProgressDelegate, SPContentInsetViewController, SPTCollectionFilterBarDelegate, SPTImageLoaderDelegate, SPTSwipeableTableViewCellDelegate, SPTOfflineModeStateObserver, SPSessionObserver, UITableViewDelegate, UITableViewDataSource, SPTPlaylistFolderViewModelDelegate, SPTPlaylistCreateNewPlaylistControllerDelegate, SPTPlaylistRootFolderViewController>
{
    _Bool _disableFilterBar;
    _Bool _viewHasAppeared;
    _Bool _shouldReloadWhenAppearing;
    _Bool _userDefaultsLoaded;
    _Bool _collectionRecentlyPlayedLayout;
    id <SPTPlaylistRootFolderViewControllerDelegate> _viewControllerDelegate;
    SPTPlaylistFolderViewModel *_viewModel;
    SPTInfoView *_infoView;
    SyncProgressController *_syncProgressController;
    SPTTableView *_tableView;
    id <SPTImageLoader> _imageLoader;
    id <SPTAudioTouch> _audioTouch;
    SPSession *_session;
    SPTOfflineManager *_offlineManager;
    long long _disableUpdatesCount;
    UIBarButtonItem *_previousLeftBarButtonItem;
    UIScrollView *_dummyScrollView;
    SPTCollectionFilterBar *_filterBar;
    id <SPTLocalSettings> _localSettings;
    SPTSyncProgressView *_iTunesLibrarySyncView;
    unsigned long long _numberOfSyncProgressViews;
    SPTPlaylistCreateNewPlaylistController *_createNewPlaylistController;
    SPTCollectionToolbarHeaderView *_sectionHeader;
    id <SPTOfflineModeState> _offlineNotifier;
}

@property(retain, nonatomic) id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(retain, nonatomic) SPTCollectionToolbarHeaderView *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property(nonatomic) _Bool collectionRecentlyPlayedLayout; // @synthesize collectionRecentlyPlayedLayout=_collectionRecentlyPlayedLayout;
@property(retain, nonatomic) SPTPlaylistCreateNewPlaylistController *createNewPlaylistController; // @synthesize createNewPlaylistController=_createNewPlaylistController;
@property(nonatomic) unsigned long long numberOfSyncProgressViews; // @synthesize numberOfSyncProgressViews=_numberOfSyncProgressViews;
@property(retain, nonatomic) SPTSyncProgressView *iTunesLibrarySyncView; // @synthesize iTunesLibrarySyncView=_iTunesLibrarySyncView;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic, getter=isUserDefaultsLoaded) _Bool userDefaultsLoaded; // @synthesize userDefaultsLoaded=_userDefaultsLoaded;
@property(retain, nonatomic) SPTCollectionFilterBar *filterBar; // @synthesize filterBar=_filterBar;
@property(retain, nonatomic) UIScrollView *dummyScrollView; // @synthesize dummyScrollView=_dummyScrollView;
@property(nonatomic) _Bool shouldReloadWhenAppearing; // @synthesize shouldReloadWhenAppearing=_shouldReloadWhenAppearing;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(retain, nonatomic) UIBarButtonItem *previousLeftBarButtonItem; // @synthesize previousLeftBarButtonItem=_previousLeftBarButtonItem;
@property(nonatomic) long long disableUpdatesCount; // @synthesize disableUpdatesCount=_disableUpdatesCount;
@property(retain, nonatomic) SPTOfflineManager *offlineManager; // @synthesize offlineManager=_offlineManager;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SyncProgressController *syncProgressController; // @synthesize syncProgressController=_syncProgressController;
@property(nonatomic) _Bool disableFilterBar; // @synthesize disableFilterBar=_disableFilterBar;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTPlaylistFolderViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTPlaylistRootFolderViewControllerDelegate> viewControllerDelegate; // @synthesize viewControllerDelegate=_viewControllerDelegate;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
@property(readonly, nonatomic) UITableView *rootTableView;
- (int)stackedNavigationPageSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadLocalSettings;
- (void)sp_updateContentInsets;
- (id)URI;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)createNewPlaylistController:(id)arg1 didCreateNewPlaylist:(id)arg2;
- (void)offlineAccessoryButtonTapped:(id)arg1;
- (void)filterBarContextButtonTapped:(id)arg1;
- (void)filterBarTextDidEndEditing:(id)arg1;
- (void)filterBarTextWillBeginEditing:(id)arg1;
- (void)filterBar:(id)arg1 textDidChange:(id)arg2;
- (void)syncProgressStoppedSyncing:(id)arg1;
- (void)syncProgressStartedSyncing:(id)arg1;
- (void)playlistFolderViewModelDidEndiTunesLibrarySync:(id)arg1;
- (void)playlistFolderViewModel:(id)arg1 didUpdateSyncingProgress:(double)arg2;
- (void)playlistFolderViewModelDidBeginiTunesLibrarySync:(id)arg1;
- (void)playlistFolderViewModel:(id)arg1 didChangeOfflineStatusWithContext:(id)arg2;
- (void)playlistFolderViewModel:(id)arg1 didChangeObjectWithContext:(id)arg2;
- (void)playlistFolderViewModelDidUpdate:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)swipeableTableViewCell:(id)arg1 didCompleteGesture:(unsigned long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)selectionStyleForIndexPath:(id)arg1;
- (id)offlineSyncAccessoryButtonForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadIfVisible;
- (void)setupSectionHeader;
- (void)setupFilterBar;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)showCreatePlaylistPopup;
- (void)navigateToBrowse;
- (void)updateInfoView;
- (void)modifyInfoViewForNUX;
- (void)modifyInfoViewForEmptyStaticFilterContext;
- (void)modifyInfoViewForEmptyTextFilterContext;
- (void)registerPreviewsInCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)removeSyncProgressView:(id)arg1;
- (void)addSyncProgressView:(id)arg1;
- (void)endIgnoringUpdates;
- (void)beginIgnoringUpdates;
- (void)updateSubtitleOfflineAccessoryViewInCell:(id)arg1 forStatus:(unsigned long long)arg2;
- (void)updateOfflineAccessoryButtonInCell:(id)arg1 forStatus:(unsigned long long)arg2;
- (void)updateOfflineStatus:(unsigned long long)arg1 forCell:(id)arg2 atIndexPath:(id)arg3;
- (void)applyThemeLayout;
- (void)dealloc;
- (void)sessionLoginModeChanged:(id)arg1;
- (id)initWithSession:(id)arg1 offlineManager:(id)arg2 container:(id)arg3 audioTouch:(id)arg4 uri:(id)arg5 syncProgressController:(id)arg6 localSettings:(id)arg7 imageLoaderFactory:(id)arg8 iTunesLibraryManager:(id)arg9 collectionRecentlyPlayedLayout:(_Bool)arg10 offlineModeNotifier:(id)arg11;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

