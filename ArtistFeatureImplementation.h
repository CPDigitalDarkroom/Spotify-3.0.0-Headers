//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ArtistFeature.h"
#import "SPTFeature.h"

@class NSMutableSet, NSString, SPTAllocationContext;

@interface ArtistFeatureImplementation : NSObject <SPTFeature, ArtistFeature>
{
    id <SPTAbbaFeatureFlags> _featureFlags;
    id <SPTAbbaFeature> _abbaFeature;
    id <SPTConcertFeature> _concertFeature;
    id <BaseFeature> _baseUI;
    id <CosmosFeature> _cosmos;
    id <SPTPlayerFeature> _player;
    id <SPContextMenuFeature> _contextMenu;
    id <RadioFeature> _radio;
    id <SettingsFeature> _settings;
    id <SPTAudioTouchFeature> _audioTouch;
    id <SPTApolloFeature> _apollo;
    id <SPTResolver> _preloadResolver;
    NSMutableSet *_contextRequests;
}

+ (id)featureDependencies;
+ (id)featureVersion;
+ (id)featureIdentifier;
@property(retain, nonatomic) NSMutableSet *contextRequests; // @synthesize contextRequests=_contextRequests;
@property(retain, nonatomic) id <SPTResolver> preloadResolver; // @synthesize preloadResolver=_preloadResolver;
@property(nonatomic) __weak id <SPTApolloFeature> apollo; // @synthesize apollo=_apollo;
@property(nonatomic) __weak id <SPTAudioTouchFeature> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(nonatomic) __weak id <SettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <RadioFeature> radio; // @synthesize radio=_radio;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
@property(nonatomic) __weak id <SPTPlayerFeature> player; // @synthesize player=_player;
@property(nonatomic) __weak id <CosmosFeature> cosmos; // @synthesize cosmos=_cosmos;
@property(nonatomic) __weak id <BaseFeature> baseUI; // @synthesize baseUI=_baseUI;
@property(nonatomic) __weak id <SPTConcertFeature> concertFeature; // @synthesize concertFeature=_concertFeature;
@property(nonatomic) __weak id <SPTAbbaFeature> abbaFeature; // @synthesize abbaFeature=_abbaFeature;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
- (void).cxx_destruct;
- (void)playerContextForArtist:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)endpointPathForArtistURL:(id)arg1 type:(unsigned int)arg2;
- (id)endpointPathForArtistURL:(id)arg1;
- (id)clientEventLoggerForViewURI:(id)arg1;
- (id)viewLoggerForViewURI:(id)arg1;
- (void)preloadAlbumViewData:(unsigned int)arg1 forArtist:(id)arg2 usingResolver:(id)arg3;
- (void)preloadAlbumViewData:(unsigned int)arg1 forArtist:(id)arg2;
- (void)preloadViewDataForArtist:(id)arg1 usingResolver:(id)arg2;
- (void)preloadViewDataForArtist:(id)arg1;
- (id)createPreloadResolver;
- (id)provideArtistViewModelWithArtistURL:(id)arg1;
- (id)provideArtistOverviewViewController:(id)arg1;
- (id)provideArtistAlbumsViewController:(id)arg1;
- (id)provideArtistPlaylistsViewController:(id)arg1;
- (id)provideArtistRelatedArtistsViewController:(id)arg1;
- (id)provideArtistBiographyViewController:(id)arg1;
- (id)createResolverForSubview:(id)arg1;
- (id)assembleCacheIdentifier;
- (id)optimizeCacheIdentifier:(id)arg1;
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
