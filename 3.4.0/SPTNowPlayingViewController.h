//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTBarOverlayViewController.h"
#import "SPTCoverArtProvidingController.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTNowPlayingAuxiliaryActionsModelObserver.h"
#import "SPTNowPlayingBackgroundBlurDelegate.h"
#import "SPTNowPlayingDurationViewDataSource.h"
#import "SPTNowPlayingDurationViewDelegate.h"
#import "SPTNowPlayingEntityDecorationControllerObserver.h"
#import "SPTNowPlayingModelDelegate.h"
#import "SPTNowPlayingQueueMetadataModelObserver.h"
#import "SPTNowPlayingRadioThumbsStateManagerObserver.h"
#import "SPTNowPlayingTrackPositionObserver.h"
#import "SPTNowPlayingViewButtonDelegate.h"

@class MetaViewController, NSString, SPSession, SPTLogCenter, SPTNowPlayingBlurControllerObject, SPTNowPlayingCoverArtController, SPTNowPlayingModel, SPTNowPlayingView, SPTPopoverController, SPTProgressView, SPTViewLogger;

@interface SPTNowPlayingViewController : UIViewController <SPTCoverArtProvidingController, SPTNowPlayingModelDelegate, SPTNavigationControllerNavigationBarState, SPTNowPlayingAuxiliaryActionsModelObserver, SPTNowPlayingDurationViewDataSource, SPTNowPlayingDurationViewDelegate, SPTNowPlayingEntityDecorationControllerObserver, SPTNowPlayingQueueMetadataModelObserver, SPTNowPlayingRadioThumbsStateManagerObserver, SPTNowPlayingTrackPositionObserver, SPTNowPlayingViewButtonDelegate, SPTNowPlayingBackgroundBlurDelegate, SPTBarOverlayViewController>
{
    _Bool _visible;
    SPTNowPlayingModel *_model;
    id <SPContextMenuFeature> _contextMenu;
    id <GaiaFeature> _gaia;
    SPTLogCenter *_logCenter;
    id <SPTNowPlayingManager> _nowPlayingManager;
    id <SPTUpsellPopupManager> _upsellPopupManager;
    MetaViewController *_metaViewController;
    id <SPTAdsManager> _adsManager;
    SPTNowPlayingView *_nowPlayingView;
    SPSession *_session;
    SPTProgressView *_progressView;
    id <SPTLocalSettings> _localSettings;
    SPTViewLogger *_viewLogger;
    SPTPopoverController *_currentPopoverController;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <NowPlayingFeature> _nowPlayingFeature;
    SPTNowPlayingCoverArtController *_coverArtController;
    SPTNowPlayingBlurControllerObject *_blurController;
}

@property(retain, nonatomic) SPTNowPlayingBlurControllerObject *blurController; // @synthesize blurController=_blurController;
@property(retain, nonatomic) SPTNowPlayingCoverArtController *coverArtController; // @synthesize coverArtController=_coverArtController;
@property(nonatomic) __weak id <NowPlayingFeature> nowPlayingFeature; // @synthesize nowPlayingFeature=_nowPlayingFeature;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) SPTPopoverController *currentPopoverController; // @synthesize currentPopoverController=_currentPopoverController;
@property(retain, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) SPTNowPlayingView *nowPlayingView; // @synthesize nowPlayingView=_nowPlayingView;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(nonatomic) __weak MetaViewController *metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) id <SPTUpsellPopupManager> upsellPopupManager; // @synthesize upsellPopupManager=_upsellPopupManager;
@property(nonatomic) __weak id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(nonatomic) __weak SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak id <GaiaFeature> gaia; // @synthesize gaia=_gaia;
@property(retain, nonatomic) id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)barViewControllerShouldUseSecondaryTransitionStyle:(id)arg1;
- (_Bool)barViewControllerInteractiveTransitionEnabled:(id)arg1;
- (id)replacementViewsForBarTransition:(id)arg1;
- (void)shouldUpdateBlurConstituentForRelativePage:(long long)arg1 toImage:(id)arg2 withURL:(id)arg3;
- (void)shouldSkipToDirection:(long long)arg1;
- (void)shouldUpdateOverlayRelativeIntensity:(double)arg1;
- (void)nowPlayingViewButtonPressed:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)durationViewTappedTimeRemainingLabel:(id)arg1;
- (void)durationViewTappedSlider:(id)arg1;
- (void)durationViewEndedScrubbing:(id)arg1;
- (void)durationViewBeganScrubbing:(id)arg1;
- (void)durationView:(id)arg1 trackProgressChanged:(float)arg2;
- (_Bool)durationViewDisallowSeeking:(id)arg1;
- (double)durationViewAnimationSpeed:(id)arg1;
- (double)durationViewCurrentDuration:(id)arg1;
- (double)durationViewCurrentPosition:(id)arg1;
- (void)connectButtonTouchedUpInside:(id)arg1;
- (void)radioThumbButtonTouchedUpInside:(_Bool)arg1;
- (void)radioThumbDownButtonTouchedUpInside:(id)arg1;
- (void)radioThumbUpButtonTouchedUpInside:(id)arg1;
- (void)hideImprovingStationProgressViewWithError:(id)arg1;
- (void)showImprovingStationProgressView;
- (void)nextButtonTouchedUpInside:(id)arg1;
- (void)playButtonTouchedUpInside:(id)arg1;
- (void)previousButtonTouchedUpInside:(id)arg1;
- (void)handleSkipToPreviousButton;
- (void)handleSkipToNextButton;
- (void)repeatButtonTouchedUpInside:(id)arg1;
- (void)shuffleButtonTouchedUpInside:(id)arg1;
- (void)contextMenuButtonTouchedUpInside:(id)arg1;
- (void)collectionButtonTouchedUpInside:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showTransition;
- (void)hideStatusBarForIpad:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateTopAndBottomViewsHidden:(_Bool)arg1;
- (void)updateQueueButton;
- (void)setupQueueView;
- (void)viewDidLoad;
- (void)queueButtonTouchedUpInside:(id)arg1;
- (void)dismissAction;
- (void)closeButtonTouchedUpInside:(id)arg1;
- (void)nowPlayingTrackPositionDidChange:(id)arg1;
- (void)nowPlayingRadioThumbsStateManagerDidChangeState:(id)arg1;
- (void)auxiliaryActionsModelDidChangeCollectionState:(id)arg1;
- (void)entityDecorationControllerDidUpdate:(id)arg1;
- (void)queueMetadataModelDidChange:(id)arg1;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (id)presentationControlView;
- (id)presentationArtImage;
- (id)presentationArtImageView;
- (void)presentPadContextMenuForTrackMetadata:(id)arg1;
- (void)presentPhoneContextMenuForTrackMetadata:(id)arg1;
- (void)presentContextMenuForTrackMetadata:(id)arg1;
- (void)updateDurationView;
- (void)updatePlaybackControls;
- (void)updatePlayPauseButton;
- (void)updateRepeatButton;
- (void)updateShuffleButton;
- (void)updateViewsForDataModelEvent;
- (void)updateEntityLabels;
- (id)defaultFadeTransition;
- (void)updateViewsForTrackChange;
- (void)updateCollectionButton;
- (void)updateRadioThumbs;
- (void)updateMetadataLabelsFromModel;
- (void)dealloc;
- (id)initWithModel:(id)arg1 contextMenu:(id)arg2 gaia:(id)arg3 logCenter:(id)arg4 nowPlayingManager:(id)arg5 session:(id)arg6 localSettings:(id)arg7 upsellPopupManager:(id)arg8 metaViewController:(id)arg9 logContext:(id)arg10 adsManager:(id)arg11 imageLoaderFactory:(id)arg12 nowPlayingFeature:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
