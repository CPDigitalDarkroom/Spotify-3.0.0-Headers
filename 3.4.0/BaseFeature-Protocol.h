//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTPlaylistProvider.h"

@class MetaViewController, NSString, SPCore, SPTDataLoaderFactory, SPTNetworkConnectivityController, SPTPlaylistBackendManager, SyncProgressController;

@protocol BaseFeature <SPTPlaylistProvider>
@property(readonly, getter=isAutomatedTestingModeEnabled) _Bool automatedTestingMode;
- (id <SPTClientSettings>)provideClientSettings;
- (id <SPTAudioDriverController>)provideAudioDriverController;
- (SyncProgressController *)provideSyncProgressController;
- (SPTDataLoaderFactory *)provideDataLoaderFactory;
- (MetaViewController *)provideMetaViewController;
- (id <SPTPlaybackErrorDialogs>)providePlaybackErrorDialogs;
- (id <SPTBannerPresentationManager>)provideBannerPresentationManager;
- (id <SPTPaymentStateController>)providePaymentStateController;
- (SPCore *)provideCoreInstance;
- (id <SPTPushNotificationActionRegistry>)providePushNotificationActionRegistry;
- (SPTNetworkConnectivityController *)provideNetworkConnectivityController;
- (id <SPTCrashReporter>)provideCrashReporter;
- (id <SPTImageLoaderFactory>)provideImageLoaderFactory;
- (id <SPTImageLoader>)createImageLoader;
- (id <SPTLocalSettings>)provideLocalSettingsForFeatureIdentifier:(NSString *)arg1;
- (id <SPTProductState>)provideProductState;
- (id <SPTPlaylistProvider>)providePlaylistProvider;
- (SPTPlaylistBackendManager *)providePlaylistBackendManager;
- (id <SPTDebugActionsRegistry>)provideDebugActionsRegistry;
- (id <PageRegistry>)providePageRegistry;
@end

