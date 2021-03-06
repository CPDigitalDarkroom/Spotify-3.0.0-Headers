//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTRadioStationsRowControllerDelegate.h"
#import "SPTRadioViewModelDelegate.h"
#import "SPTRadioViewPlayDelegate.h"
#import "SPTThemableView.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDate, NSString, NSURL, SPTClientEventLogger, SPTInfoView, SPTProgressView, SPTRadioPlainTableViewCell, SPTRadioStationsRowController, SPTRadioViewModel, SPTTableView, SPTViewLogger;

@interface SPTRadioViewController : SPViewController <SPTRadioStationsRowControllerDelegate, SPTRadioViewModelDelegate, SPTThemableView, SPTRadioViewPlayDelegate, UITableViewDataSource, UITableViewDelegate, SPContentInsetViewController>
{
    _Bool _isPaused;
    _Bool _ignoreNextModelUpdate;
    _Bool _firstTimeReceivingData;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTRadioViewModel *_viewModel;
    SPTViewLogger *_viewLogger;
    SPTClientEventLogger *_eventLogger;
    SPTTableView *_tableView;
    NSArray *_sectionViews;
    NSArray *_sectionNames;
    SPTRadioStationsRowController *_userStationController;
    SPTRadioStationsRowController *_recommendedStationsController;
    SPTRadioPlainTableViewCell *_userStationsCell;
    SPTRadioPlainTableViewCell *_recommendedStationsCell;
    NSArray *_genres;
    SPTProgressView *_progressView;
    NSURL *_currentlyPlayingSeed;
    id <SearchFeature> _searchFeature;
    id <SPTAudioTouch> _audioTouch;
    id <SPTLocalSettings> _localSettings;
    SPTInfoView *_infoView;
    NSDate *_lastPlaybackRequest;
    id <SPTOfflineInfoViewFactory> _offlineInfoViewFactory;
}

@property(readonly, nonatomic) id <SPTOfflineInfoViewFactory> offlineInfoViewFactory; // @synthesize offlineInfoViewFactory=_offlineInfoViewFactory;
@property(retain, nonatomic) NSDate *lastPlaybackRequest; // @synthesize lastPlaybackRequest=_lastPlaybackRequest;
@property(nonatomic) _Bool firstTimeReceivingData; // @synthesize firstTimeReceivingData=_firstTimeReceivingData;
@property(nonatomic) _Bool ignoreNextModelUpdate; // @synthesize ignoreNextModelUpdate=_ignoreNextModelUpdate;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(nonatomic) __weak id <SearchFeature> searchFeature; // @synthesize searchFeature=_searchFeature;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(retain, nonatomic) NSURL *currentlyPlayingSeed; // @synthesize currentlyPlayingSeed=_currentlyPlayingSeed;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property(retain, nonatomic) SPTRadioPlainTableViewCell *recommendedStationsCell; // @synthesize recommendedStationsCell=_recommendedStationsCell;
@property(retain, nonatomic) SPTRadioPlainTableViewCell *userStationsCell; // @synthesize userStationsCell=_userStationsCell;
@property(retain, nonatomic) SPTRadioStationsRowController *recommendedStationsController; // @synthesize recommendedStationsController=_recommendedStationsController;
@property(retain, nonatomic) SPTRadioStationsRowController *userStationController; // @synthesize userStationController=_userStationController;
@property(retain, nonatomic) NSArray *sectionNames; // @synthesize sectionNames=_sectionNames;
@property(retain, nonatomic) NSArray *sectionViews; // @synthesize sectionViews=_sectionViews;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) SPTClientEventLogger *eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) SPTRadioViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)sp_updateContentInsets;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)applyThemeLayout;
- (void)deleteStationWithSeedURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playSeedURL:(id)arg1 forIndexPath:(id)arg2 fromViewController:(id)arg3;
- (void)radioViewModel:(id)arg1 offlineStateUpdated:(_Bool)arg2;
- (void)radioViewModel:(id)arg1 didFailToLoadStation:(id)arg2 withError:(id)arg3;
- (void)radioViewModel:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)radioViewModel:(id)arg1 gotRecentStations:(id)arg2 recommendedStations:(id)arg3 genres:(id)arg4;
- (void)radioViewModel:(id)arg1 stationWillStartPlaying:(id)arg2;
- (void)radioViewModel:(id)arg1 stationDidStartPlaying:(id)arg2 paused:(_Bool)arg3;
- (void)updateRadioUIWithStation:(id)arg1;
- (void)playSeedURL:(id)arg1 startedFromElement:(id)arg2;
- (_Bool)showOfflinePlaybackError;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeInfoView;
- (id)createSectionWithTitle:(id)arg1;
- (void)endEditingAction;
- (void)didEnterBackground;
- (void)newStationTapped:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)URI;
- (id)initWithViewModel:(id)arg1 viewLogger:(id)arg2 eventLogger:(id)arg3 searchFeature:(id)arg4 imageLoaderFactory:(id)arg5 productState:(id)arg6 audioTouch:(id)arg7 localSettings:(id)arg8 offlineInfoViewFactory:(id)arg9;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

