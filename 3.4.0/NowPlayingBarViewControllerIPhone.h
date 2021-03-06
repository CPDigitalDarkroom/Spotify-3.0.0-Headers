//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPViewController.h"

#import "PlayerTrackScrollDataSourceDelegate.h"
#import "PlayerTrackScrollViewOffsetDelegate.h"
#import "SPBarTransitableViewController.h"
#import "SPForegroundObserverDelegate.h"
#import "SPTBarInteractiveTransitionParticipant.h"
#import "SPTCoverArtProvidingController.h"
#import "SPTGaiaDeviceStateManagerObserver.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTNowPlayingBarModelDelegate.h"
#import "SPTNowPlayingBarViewController.h"

@class FBKVOController, NSString, NSTimer, PlayerTrackScrollDataSource, SPForegroundObserver, SPKVObservation, SPTGaiaDevice, SPTLogCenter, SPTNowPlayingBarModel, SPTNowPlayingBlurControllerObject, SPTNowPlayingCollectionButton, SPTProgressView, SPTTinkerbellItem, SPTTinkerbellStory, UIView, UIView<SPTNowPlayingBarView>, UIViewController;

@interface NowPlayingBarViewControllerIPhone : SPViewController <SPBarTransitableViewController, SPForegroundObserverDelegate, SPTCoverArtProvidingController, PlayerTrackScrollDataSourceDelegate, SPTGaiaDeviceStateManagerObserver, SPTImageLoaderDelegate, PlayerTrackScrollViewOffsetDelegate, SPTNowPlayingBarModelDelegate, SPTNowPlayingBarViewController, SPTBarInteractiveTransitionParticipant>
{
    _Bool _videoDisabled;
    _Bool _shouldDisplayConnectIcon;
    _Bool _featureFlag;
    _Bool _isNewNowPlayingBarEnabled;
    _Bool _isPresentingNewlyDiscoveredDeviceTinkerbell;
    _Bool _barShown;
    SPTNowPlayingBarModel *_nowPlayingModel;
    id <SPTUpsellPopupManager> _upsellPopupManager;
    id <SPTVideoSurfaceManager> _videoSurfaceManager;
    UIView<SPTNowPlayingBarView> *_contentView;
    PlayerTrackScrollDataSource *_playerTrackScrollDataSource;
    SPForegroundObserver *_foregroundObserver;
    id <SPTImageLoader> _imageLoader;
    SPTNowPlayingCollectionButton *_collectionButton;
    SPTProgressView *_progressView;
    UIViewController *_informationViewController;
    NSTimer *_informationViewTimeoutTimer;
    id <GaiaFeature> _gaia;
    SPTLogCenter *_logCenter;
    id <SPTProductState> _productState;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTTinkerbellManager> _tinkerbellManager;
    id <SPTTinkerbellItemPresentationController> _tinkerbellController;
    id <SPTTinkerbellStoryRegistry> _tinkerbellStoryRegistry;
    id <NowPlayingFeature> _nowPlayingFeature;
    id <SPTTinkerbellItemPresentationController> _tinkerbellItemPresentationController;
    id <NSObject> _SPTBarObserverObject;
    id <NSObject> _SPTBarObserverObjectForPersistance;
    id <NSObject> _SPTBarObserverForDevicesObject;
    id <NSObject> _SPTOverlayObserverObject;
    SPKVObservation *_currentTrackIsInCollectionObservation;
    SPTNowPlayingBlurControllerObject *_blurController;
    FBKVOController *_kvoController;
    SPTTinkerbellStory *_onboardingDeviceDiscoveryTinkerbellStory;
    SPTTinkerbellItem *_onboardingDeviceDiscoveryTinkerbellItem;
    SPTGaiaDevice *_newlyDiscoveredDevice;
}

@property(nonatomic) _Bool barShown; // @synthesize barShown=_barShown;
@property(nonatomic) _Bool isPresentingNewlyDiscoveredDeviceTinkerbell; // @synthesize isPresentingNewlyDiscoveredDeviceTinkerbell=_isPresentingNewlyDiscoveredDeviceTinkerbell;
@property(retain, nonatomic) SPTGaiaDevice *newlyDiscoveredDevice; // @synthesize newlyDiscoveredDevice=_newlyDiscoveredDevice;
@property(retain, nonatomic) SPTTinkerbellItem *onboardingDeviceDiscoveryTinkerbellItem; // @synthesize onboardingDeviceDiscoveryTinkerbellItem=_onboardingDeviceDiscoveryTinkerbellItem;
@property(retain, nonatomic) SPTTinkerbellStory *onboardingDeviceDiscoveryTinkerbellStory; // @synthesize onboardingDeviceDiscoveryTinkerbellStory=_onboardingDeviceDiscoveryTinkerbellStory;
@property(nonatomic) _Bool isNewNowPlayingBarEnabled; // @synthesize isNewNowPlayingBarEnabled=_isNewNowPlayingBarEnabled;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(retain, nonatomic) SPTNowPlayingBlurControllerObject *blurController; // @synthesize blurController=_blurController;
@property(retain, nonatomic) SPKVObservation *currentTrackIsInCollectionObservation; // @synthesize currentTrackIsInCollectionObservation=_currentTrackIsInCollectionObservation;
@property(retain, nonatomic) id <NSObject> SPTOverlayObserverObject; // @synthesize SPTOverlayObserverObject=_SPTOverlayObserverObject;
@property(retain, nonatomic) id <NSObject> SPTBarObserverForDevicesObject; // @synthesize SPTBarObserverForDevicesObject=_SPTBarObserverForDevicesObject;
@property(retain, nonatomic) id <NSObject> SPTBarObserverObjectForPersistance; // @synthesize SPTBarObserverObjectForPersistance=_SPTBarObserverObjectForPersistance;
@property(retain, nonatomic) id <NSObject> SPTBarObserverObject; // @synthesize SPTBarObserverObject=_SPTBarObserverObject;
@property(nonatomic) __weak id <SPTTinkerbellItemPresentationController> tinkerbellItemPresentationController; // @synthesize tinkerbellItemPresentationController=_tinkerbellItemPresentationController;
@property(nonatomic) __weak id <NowPlayingFeature> nowPlayingFeature; // @synthesize nowPlayingFeature=_nowPlayingFeature;
@property(retain, nonatomic) id <SPTTinkerbellStoryRegistry> tinkerbellStoryRegistry; // @synthesize tinkerbellStoryRegistry=_tinkerbellStoryRegistry;
@property(retain, nonatomic) id <SPTTinkerbellItemPresentationController> tinkerbellController; // @synthesize tinkerbellController=_tinkerbellController;
@property(retain, nonatomic) id <SPTTinkerbellManager> tinkerbellManager; // @synthesize tinkerbellManager=_tinkerbellManager;
@property(nonatomic) _Bool featureFlag; // @synthesize featureFlag=_featureFlag;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) __weak SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak id <GaiaFeature> gaia; // @synthesize gaia=_gaia;
@property(nonatomic) _Bool shouldDisplayConnectIcon; // @synthesize shouldDisplayConnectIcon=_shouldDisplayConnectIcon;
@property(nonatomic) __weak NSTimer *informationViewTimeoutTimer; // @synthesize informationViewTimeoutTimer=_informationViewTimeoutTimer;
@property(retain, nonatomic) UIViewController *informationViewController; // @synthesize informationViewController=_informationViewController;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTNowPlayingCollectionButton *collectionButton; // @synthesize collectionButton=_collectionButton;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPForegroundObserver *foregroundObserver; // @synthesize foregroundObserver=_foregroundObserver;
@property(retain, nonatomic) PlayerTrackScrollDataSource *playerTrackScrollDataSource; // @synthesize playerTrackScrollDataSource=_playerTrackScrollDataSource;
@property(retain, nonatomic) UIView<SPTNowPlayingBarView> *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id <SPTVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(nonatomic) __weak id <SPTUpsellPopupManager> upsellPopupManager; // @synthesize upsellPopupManager=_upsellPopupManager;
@property(retain, nonatomic) SPTNowPlayingBarModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(nonatomic, getter=isVideoDisabled) _Bool videoDisabled; // @synthesize videoDisabled=_videoDisabled;
- (void).cxx_destruct;
- (id)backgroundViewForBarTransition:(id)arg1;
@property(readonly, nonatomic) UIView *backgroundView;
- (id)provideDeviceDiscoveryTinkerbellStory;
- (id)provideDeviceDiscoveryOnboardingTinkerbellItem:(id)arg1;
- (void)tinkerbellActionForDeviceDiscoveryWasPerformed;
- (void)presentNowPlayingTinkerbellForDeviceDiscoveryWithAnchorView:(id)arg1;
- (void)tinkerbellActionWasPerformed;
- (void)presentNowPlayingTinkerbellWithAnchorView:(id)arg1;
- (void)playerTrackScrollView:(id)arg1 scrolledToRelativeIndex:(long long)arg2;
- (void)playerTrackScrollViewChangedOffset:(id)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (id)presentationControlView;
- (id)presentationArtImage;
- (id)presentationArtImageView;
- (void)deviceStateManager:(id)arg1 availableDevicesDidChange:(id)arg2;
- (void)deviceStateManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)deviceStateManager:(id)arg1 playingRemotelyDidChange:(_Bool)arg2;
- (void)informationViewControllerTimedOut:(id)arg1;
- (void)updateAccessoryView:(_Bool)arg1;
- (id)accessoryView;
- (void)nowPlayingBarModelDidUpdateFeatureFlags:(id)arg1;
- (void)nowPlayingBarModelDidUpdateTrackMetaData:(id)arg1;
- (void)nowPlayingBarModelDidUpdatePlayingState:(id)arg1;
- (void)foregroundObserverDidHibernate:(id)arg1;
- (void)foregroundObserverDidAwake:(id)arg1;
- (void)registerCollectionObserver;
- (void)playerTrackScrollDataSource:(id)arg1 configurePageView:(id)arg2 atRelativeIndex:(long long)arg3;
- (void)updateVideoSurfaceEnableWithPageView:(id)arg1;
- (void)updateVideoSurfaceEnable;
- (id)playerTrackScrollDataSource:(id)arg1 pageViewWithFrame:(struct CGRect)arg2 reuseIdentifier:(id)arg3;
- (void)collectionStatusChanged;
- (void)playPauseChanged;
- (void)collectionButtonTouchedUpInside:(id)arg1;
- (void)showNowPlayingView;
- (void)playPause;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)removeSPBarObserversIfObserving;
- (void)setupSPBarObsrerversIfNotObserving;
- (void)sp_setBarTransitionProgress:(float)arg1;
- (id)viewEventURI;
- (void)dealloc;
- (id)artImageView;
@property(readonly, nonatomic) struct CGRect coverArtFrame;
- (id)initWithPlayingModel:(id)arg1 gaia:(id)arg2 logCenter:(id)arg3 upsellPopupManager:(id)arg4 productState:(id)arg5 imageLoaderFactory:(id)arg6 tinkerbellManager:(id)arg7 tinkerbellStoryRegistry:(id)arg8 nowPlayingFeature:(id)arg9 videoSurfaceManager:(id)arg10 newNowPlayingBarEnabled:(_Bool)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

