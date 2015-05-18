//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTNowPlayingBaseHeadUnitControllerLogging.h"
#import "SPTNowPlayingDurationViewDataSource.h"
#import "SPTNowPlayingDurationViewDelegate.h"
#import "SPTNowPlayingEntityDecorationControllerObserver.h"
#import "SPTNowPlayingTrackPositionObserver.h"
#import "SPTNowPlayingVideoTimerDelegate.h"
#import "SPTNowPlayingVideoViewDelegate.h"

@class NSString, SPTLayoutConstraintBuilder, SPTLogCenter, SPTNowPlayingBaseHeadUnitController, SPTNowPlayingVideoTimer, SPTNowPlayingVideoView, SPTNowPlayingVideoViewModel, SPTTheme;

@interface SPTNowPlayingVideoViewController : UIViewController <SPTNowPlayingDurationViewDataSource, SPTNowPlayingDurationViewDelegate, SPTNowPlayingTrackPositionObserver, SPTNowPlayingEntityDecorationControllerObserver, SPTNowPlayingVideoViewDelegate, SPTNowPlayingVideoTimerDelegate, SPTNowPlayingBaseHeadUnitControllerLogging>
{
    BOOL _visible;
    CDUnknownBlockType _dismissAction;
    SPTTheme *_theme;
    SPTNowPlayingVideoViewModel *_viewModel;
    id <SPTVideoSurfaceManager> _videoSurfaceManager;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    SPTNowPlayingBaseHeadUnitController *_headUnitController;
    id <SPTLocalSettings> _localSettings;
    id <SPTUpsellPopupManager> _upsellPopupManager;
    SPTLogCenter *_logCenter;
    SPTLayoutConstraintBuilder *_layout;
    SPTNowPlayingVideoView *_videoView;
    SPTNowPlayingVideoTimer *_dismissControlsTimer;
}

@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(retain, nonatomic) SPTNowPlayingVideoTimer *dismissControlsTimer; // @synthesize dismissControlsTimer=_dismissControlsTimer;
@property(retain, nonatomic) SPTNowPlayingVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak id <SPTUpsellPopupManager> upsellPopupManager; // @synthesize upsellPopupManager=_upsellPopupManager;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) SPTNowPlayingBaseHeadUnitController *headUnitController; // @synthesize headUnitController=_headUnitController;
@property(readonly, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(readonly, nonatomic) id <SPTVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(readonly, nonatomic) SPTNowPlayingVideoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) CDUnknownBlockType dismissAction; // @synthesize dismissAction=_dismissAction;
- (void).cxx_destruct;
- (void)nowPlayingBaseHeadUnitControllerDidPressPlayPauseButton:(id)arg1;
- (void)nowPlayingBaseHeadUnitControllerDidAttemptSkipToPreviousBehaviourSeekToStart:(id)arg1;
- (void)nowPlayingBaseHeadUnitControllerDidAttemptSkipToPreviousBehaviour:(id)arg1;
- (void)nowPlayingBaseHeadUnitControllerDidAttemptSkipToNextBehaviourShowUpsell:(id)arg1;
- (void)nowPlayingBaseHeadUnitControllerDidAttemptSkipToNextBehaviour:(id)arg1;
- (void)videoTimerDidFire:(id)arg1;
- (void)videoView:(id)arg1 didChangeControlsVisibility:(BOOL)arg2;
- (void)entityDecorationControllerDidUpdate:(id)arg1;
- (void)nowPlayingTrackPositionDidChange:(id)arg1;
- (void)durationViewTappedSlider:(id)arg1;
- (void)durationViewTappedTimeRemainingLabel:(id)arg1;
- (void)durationViewEndedScrubbing:(id)arg1;
- (void)durationViewBeganScrubbing:(id)arg1;
- (void)durationView:(id)arg1 trackProgressChanged:(float)arg2;
- (BOOL)durationViewDisallowSeeking:(id)arg1;
- (float)durationViewAnimationSpeed:(id)arg1;
- (double)durationViewCurrentDuration:(id)arg1;
- (double)durationViewCurrentPosition:(id)arg1;
- (void)seekForwardAction:(id)arg1;
- (void)seekBackAction:(id)arg1;
- (void)showContextMenu;
- (void)dismissAction:(id)arg1;
- (void)touchInterceptedWithGestureRecognizer:(id)arg1;
- (void)addGestureRecognizers;
- (void)addFixedConstraints;
- (void)hookupControls;
- (void)setupSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)prefersStatusBarHidden;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 viewModel:(id)arg2 videoSurfaceManager:(id)arg3 podcastContextMenuProvider:(id)arg4 upsellPopupManager:(id)arg5 localSettings:(id)arg6 logCenter:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

