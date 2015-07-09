//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NowPlayingFeature.h"
#import "SPTFeature.h"
#import "SpotifyApplicationRemoteControlDelegate.h"

@class NSString, SPTAllocationContext, SPTNowPlayingAudioDriverErrorManager, SPTNowPlayingDeviceOrientationManager, SPTNowPlayingManagerImplementation, SPTNowPlayingModel, SPTNowPlayingPresentationTransitioningDelegate, SPTNowPlayingRemoteControlEventController, SPTNowPlayingRepeatOneDisabler, SPTNowPlayingVideoManagerImplementation, SPTNowPlayingViewShowFirstTime, UIViewController;

@interface NowPlayingFeatureImplementation : NSObject <SpotifyApplicationRemoteControlDelegate, SPTFeature, NowPlayingFeature>
{
    id <CosmosFeature> _cosmos;
    id <BaseFeature> _baseUI;
    id <SPContextMenuFeature> _contextMenu;
    id <SettingsFeature> _settings;
    id <GaiaFeature> _gaia;
    id <ShuffleFeature> _shuffle;
    id <RadioFeature> _radio;
    id <UpsellFeature> _upsell;
    id <CollectionFeature> _collection;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTShareFeature> _shareFeature;
    id <BrowseFeature> _browse;
    id <AdsFeature> _ads;
    id <SPTAudioTouchFeature> _audioTouch;
    id <SPTTinkerbellFeature> _tinkerbellFeature;
    id <SPTVideoFeature> _videoFeature;
    id <SPTRunningFeature> _runningFeature;
    id <SPTMomentsFeature> _momentsFeature;
    id <SPTAbbaFeature> _abbaFeature;
    id <SPTSleepTimerFeature> _timerFeature;
    id <SPTPodcastFeature> _podcastFeature;
    UIViewController *_nowPlayingViewController;
    UIViewController *_nowPlayingBarViewController;
    UIViewController *_nowPlayingQueueViewController;
    SPTNowPlayingPresentationTransitioningDelegate *_transitioningDelegate;
    id <SPTNowPlayingInfoCenterManagerProtocol> _nowPlayingInfoCenterManager;
    SPTNowPlayingViewShowFirstTime *_nowPlayingViewShowFirstTime;
    id <SPTResolver> _cosmosResolver;
    id <SPTPlayer> _player;
    SPTNowPlayingDeviceOrientationManager *_deviceOrientationManager;
    SPTNowPlayingManagerImplementation *_nowPlayingManager;
    SPTNowPlayingVideoManagerImplementation *_videoManager;
    SPTNowPlayingRepeatOneDisabler *_repeatOneManager;
    SPTNowPlayingRemoteControlEventController *_remoteControlEventController;
    SPTNowPlayingModel *_nowPlayingModel;
    SPTNowPlayingAudioDriverErrorManager *_audioDriverErrorManager;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) SPTNowPlayingAudioDriverErrorManager *audioDriverErrorManager; // @synthesize audioDriverErrorManager=_audioDriverErrorManager;
@property(retain, nonatomic) SPTNowPlayingModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(retain, nonatomic) SPTNowPlayingRemoteControlEventController *remoteControlEventController; // @synthesize remoteControlEventController=_remoteControlEventController;
@property(retain, nonatomic) SPTNowPlayingRepeatOneDisabler *repeatOneManager; // @synthesize repeatOneManager=_repeatOneManager;
@property(retain, nonatomic) SPTNowPlayingVideoManagerImplementation *videoManager; // @synthesize videoManager=_videoManager;
@property(retain, nonatomic) SPTNowPlayingManagerImplementation *nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(retain, nonatomic) SPTNowPlayingDeviceOrientationManager *deviceOrientationManager; // @synthesize deviceOrientationManager=_deviceOrientationManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTResolver> cosmosResolver; // @synthesize cosmosResolver=_cosmosResolver;
@property(retain, nonatomic) SPTNowPlayingViewShowFirstTime *nowPlayingViewShowFirstTime; // @synthesize nowPlayingViewShowFirstTime=_nowPlayingViewShowFirstTime;
@property(retain, nonatomic) id <SPTNowPlayingInfoCenterManagerProtocol> nowPlayingInfoCenterManager; // @synthesize nowPlayingInfoCenterManager=_nowPlayingInfoCenterManager;
@property(retain, nonatomic) SPTNowPlayingPresentationTransitioningDelegate *transitioningDelegate; // @synthesize transitioningDelegate=_transitioningDelegate;
@property(retain, nonatomic) UIViewController *nowPlayingQueueViewController; // @synthesize nowPlayingQueueViewController=_nowPlayingQueueViewController;
@property(retain, nonatomic) UIViewController *nowPlayingBarViewController; // @synthesize nowPlayingBarViewController=_nowPlayingBarViewController;
@property(retain, nonatomic) UIViewController *nowPlayingViewController; // @synthesize nowPlayingViewController=_nowPlayingViewController;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <SPTSleepTimerFeature> timerFeature; // @synthesize timerFeature=_timerFeature;
@property(nonatomic) __weak id <SPTAbbaFeature> abbaFeature; // @synthesize abbaFeature=_abbaFeature;
@property(nonatomic) __weak id <SPTMomentsFeature> momentsFeature; // @synthesize momentsFeature=_momentsFeature;
@property(nonatomic) __weak id <SPTRunningFeature> runningFeature; // @synthesize runningFeature=_runningFeature;
@property(nonatomic) __weak id <SPTVideoFeature> videoFeature; // @synthesize videoFeature=_videoFeature;
@property(nonatomic) __weak id <SPTTinkerbellFeature> tinkerbellFeature; // @synthesize tinkerbellFeature=_tinkerbellFeature;
@property(nonatomic) __weak id <SPTAudioTouchFeature> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(nonatomic) __weak id <AdsFeature> ads; // @synthesize ads=_ads;
@property(nonatomic) __weak id <BrowseFeature> browse; // @synthesize browse=_browse;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <CollectionFeature> collection; // @synthesize collection=_collection;
@property(nonatomic) __weak id <UpsellFeature> upsell; // @synthesize upsell=_upsell;
@property(nonatomic) __weak id <RadioFeature> radio; // @synthesize radio=_radio;
@property(nonatomic) __weak id <ShuffleFeature> shuffle; // @synthesize shuffle=_shuffle;
@property(nonatomic) __weak id <GaiaFeature> gaia; // @synthesize gaia=_gaia;
@property(nonatomic) __weak id <SettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
@property(nonatomic) __weak id <BaseFeature> baseUI; // @synthesize baseUI=_baseUI;
@property(nonatomic) __weak id <CosmosFeature> cosmos; // @synthesize cosmos=_cosmos;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isYourLibraryFeatureEnabled) _Bool yourLibraryFeatureEnabled;
- (_Bool)isAccessibilityRunning;
- (_Bool)calculateIsNewNowPlayingViewEnabled;
- (_Bool)isNewNowPlayingViewEnabled;
- (_Bool)calculateIsNewNowPlayingBarEnabled;
- (_Bool)isNewNowPlayingBarEnabled;
- (_Bool)spotifyApplication:(id)arg1 handleRemoteControlEventOfSubtype:(long long)arg2;
- (id)provideNowPlayingInfoCenterManager;
- (id)provideVideoManager;
- (id)provideNowPlayingManager;
- (id)provideDeviceOrientationManager;
- (id)createNowPlayingBarModel;
- (id)createNowPlayingModel;
- (id)provideTransitioningDelegateForBar:(id)arg1 overlay:(id)arg2;
- (void)loadNowPlayingViewShowFirstTime;
- (id)provideNowPlayingQueueViewControllerPhone:(id)arg1;
- (id)provideNowPlayingBarViewControllerPhone:(id)arg1;
- (id)provideNowPlayingBarViewControllerPad:(id)arg1;
- (id)createCatNowPlayingViewController:(id)arg1;
- (id)provideNowPlayingViewControllerPhone:(id)arg1;
- (id)provideNowPlayingViewControllerPad:(id)arg1;
- (id)provideDebugPlaylistViewController;
- (void)unload;
- (id)provideFeedbackSoundsSettingsSection:(id)arg1;
- (id)createResolverForSubview:(id)arg1;
- (void)load;
- (void)configureWithFeatures:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

