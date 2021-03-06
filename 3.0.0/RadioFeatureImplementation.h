//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RadioFeature.h"
#import "SPTFeature.h"

@class NSString, SPTAllocationContext, SPTRadioPlaybackService, SPTRadioRemoteControlManager, SPTRadioStationsService, UIViewController;

@interface RadioFeatureImplementation : NSObject <SPTFeature, RadioFeature>
{
    id <BaseFeature> _baseUI;
    id <CosmosFeature> _cosmos;
    id <SettingsFeature> _settings;
    id <SearchFeature> _search;
    id <SPTPlayerFeature> _playback;
    id <SPTAudioTouchFeature> _audioTouch;
    id <SPContextMenuFeature> _contextMenu;
    id <CollectionFeature> _collection;
    id <SPTApolloFeature> _apollo;
    id <SPTHubFeature> _hub;
    id <SPTOfflinePlaylistFeature> _offlinePlaylist;
    id <SPTAbbaFeature> _abbaFeature;
    id <SPTAbbaFeatureFlags> _featureFlags;
    id <SPTPlayer> _player;
    id <SPRadioManager> _radioManager;
    SPTRadioStationsService *_stationsService;
    SPTRadioPlaybackService *_playbackService;
    SPTRadioRemoteControlManager *_remoteControlManager;
    id <SPTLocalSettings> _localSettings;
    UIViewController *_radioViewController;
}

+ (id)featureVersion;
+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) UIViewController *radioViewController; // @synthesize radioViewController=_radioViewController;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTRadioRemoteControlManager *remoteControlManager; // @synthesize remoteControlManager=_remoteControlManager;
@property(retain, nonatomic) SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) SPTRadioStationsService *stationsService; // @synthesize stationsService=_stationsService;
@property(retain, nonatomic) id <SPRadioManager> radioManager; // @synthesize radioManager=_radioManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic) __weak id <SPTAbbaFeature> abbaFeature; // @synthesize abbaFeature=_abbaFeature;
@property(nonatomic) __weak id <SPTOfflinePlaylistFeature> offlinePlaylist; // @synthesize offlinePlaylist=_offlinePlaylist;
@property(nonatomic) __weak id <SPTHubFeature> hub; // @synthesize hub=_hub;
@property(nonatomic) __weak id <SPTApolloFeature> apollo; // @synthesize apollo=_apollo;
@property(nonatomic) __weak id <CollectionFeature> collection; // @synthesize collection=_collection;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
@property(nonatomic) __weak id <SPTAudioTouchFeature> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(nonatomic) __weak id <SPTPlayerFeature> playback; // @synthesize playback=_playback;
@property(nonatomic) __weak id <SearchFeature> search; // @synthesize search=_search;
@property(nonatomic) __weak id <SettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <CosmosFeature> cosmos; // @synthesize cosmos=_cosmos;
@property(nonatomic) __weak id <BaseFeature> baseUI; // @synthesize baseUI=_baseUI;
- (void).cxx_destruct;
- (id)providePlayer;
- (id)provideRadioManager;
- (id)createEventLoggerWithContext:(id)arg1;
- (id)createViewLoggerWithContext:(id)arg1;
- (id)provideStationsInCollectionViewController:(id)arg1;
- (id)provideStationViewController:(id)arg1;
- (id)provideRadioViewController:(id)arg1;
- (id)createViewModel;
- (void)registerFeatureSettingsPage;
- (BOOL)isStationsInCollectionEnabled;
- (id)radioAppURL;
- (id)createCosmosResolver;
- (void)unload;
- (void)load;
- (void)configureWithFeatures:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

