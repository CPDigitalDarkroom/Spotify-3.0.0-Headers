//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTCollectionEpisodesViewModelDelegate.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTTableViewCellHeightComputerDelegate.h"
#import "SPViewController.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SPTCollectionEpisodesActionViewModel, SPTCollectionEpisodesViewModel, SPTInfoView, SPTLogCenter, SPTShowContextMenuController, SPTShowInfoViewProvider, SPTTabControl, UITableView;

@interface SPTCollectionEpisodesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, SPTImageLoaderDelegate, SPTCollectionEpisodesViewModelDelegate, SPContentInsetViewController, SPViewController, SPTTableViewCellHeightComputerDelegate>
{
    SPTCollectionEpisodesViewModel *_viewModel;
    SPTCollectionEpisodesActionViewModel *_actionViewModel;
    id <SPTImageLoader> _imageLoader;
    UITableView *_tableView;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTAudioTouch> _audioTouch;
    SPTLogCenter *_logCenter;
    SPTShowInfoViewProvider *_infoViewProvider;
    SPTShowContextMenuController *_showContextMenuController;
    SPTInfoView *_infoView;
    SPTTabControl *_tabControl;
}

@property(retain, nonatomic) SPTTabControl *tabControl; // @synthesize tabControl=_tabControl;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTShowContextMenuController *showContextMenuController; // @synthesize showContextMenuController=_showContextMenuController;
@property(retain, nonatomic) SPTShowInfoViewProvider *infoViewProvider; // @synthesize infoViewProvider=_infoViewProvider;
@property(retain, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTCollectionEpisodesActionViewModel *actionViewModel; // @synthesize actionViewModel=_actionViewModel;
@property(retain, nonatomic) SPTCollectionEpisodesViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)configureJamCell:(id)arg1 atIndexPath:(id)arg2;
- (id)configureAudioCell:(id)arg1 atIndexPath:(id)arg2;
- (id)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)URI;
- (void)sp_updateContentInsets;
- (void)viewModel:(id)arg1 episodesDidFinishLoadingWithError:(id)arg2;
- (void)viewModelDidUpdatePlayingEpisode:(id)arg1;
- (void)setTabControlVisible:(BOOL)arg1;
- (void)setupTabControl;
- (void)tabControlDidChangeValue:(id)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)hideEmptyStateInfoView;
- (void)showEmptyStateInfoView;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)cellIdentifierForIndexPath:(id)arg1;
- (id)playStateForIndexPath:(id)arg1;
- (void)offlineAccessoryButtonTapped:(id)arg1;
- (id)offlineSyncAccessoryButtonForIndexPath:(id)arg1;
- (void)updateOfflineAccessoryButtonInCell:(id)arg1 forStatus:(unsigned int)arg2;
- (void)cellContextMenuTapped:(id)arg1;
- (void)setupCellContextMenu:(id)arg1 atIndexPath:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)presentRemoveAllOfflineAlertView;
- (void)resetAllPlayedOffline;
- (void)resetAllOffline;
- (void)toggleOfflineAtIndexPath:(id)arg1;
- (void)markAsPlayedAtIndexPath:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateEditButtonState;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithEpisodesViewModel:(id)arg1 actionViewModel:(id)arg2 imageLoader:(id)arg3 contextMenuFeature:(id)arg4 podcastFeature:(id)arg5 audioTouch:(id)arg6 logCenter:(id)arg7 infoViewProvider:(id)arg8;

// Remaining properties
@property(nonatomic) BOOL automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

