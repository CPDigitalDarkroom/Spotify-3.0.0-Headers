//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CollectionFeature.h"
#import "SPTFeature.h"

@class NSHashTable, NSMutableArray, NSString, SPCollectionController, SPCollectionOfflineController, SPTAllocationContext, SPTCollection, SPTCollectionOfflineImageManager, SPTCollectionRecentlyPlayedModel, SPTSaveToCollectionPushNotificationAction, SPTTrackContextFactory, UIViewController;

@interface CollectionFeatureImplementation : NSObject <SPTFeature, CollectionFeature>
{
    id <PageRegistry> _pageRegistry;
    SPTCollection *_collection;
    id <ShuffleFeature> _shuffleFeature;
    id <BaseFeature> _baseFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <CosmosFeature> _cosmosFeature;
    id <PlaylistFeature> _playlistFeature;
    id <SPTAudioTouchFeature> _audioTouch;
    id <SPTAbbaFeature> _abbaFeature;
    id <SettingsFeature> _settings;
    id <SPTHTTPTestFeature> _httpTest;
    id <SPTMomentsFeature> _momentsFeature;
    id <SPTHubFeature> _hubFeature;
    UIViewController *_collectionPage;
    SPTCollectionOfflineImageManager *_offlineImageManager;
    id <SPTITunesLibraryManager> _itunesLibraryManager;
    SPTSaveToCollectionPushNotificationAction *_saveToCollectionPushNotificationAction;
    NSMutableArray *_collectionLists;
    NSMutableArray *_registeredEntityContentTypes;
    SPTCollectionRecentlyPlayedModel *_recentlyPlayedModel;
    SPCollectionController *_collectionController;
    SPCollectionOfflineController *_collectionOfflineController;
    SPTTrackContextFactory *_trackContextFactory;
    NSHashTable *_collectionListsObservers;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
+ (id)sharedImplementation;
@property(retain, nonatomic) NSHashTable *collectionListsObservers; // @synthesize collectionListsObservers=_collectionListsObservers;
@property(retain, nonatomic) SPTTrackContextFactory *trackContextFactory; // @synthesize trackContextFactory=_trackContextFactory;
@property(retain, nonatomic) SPCollectionOfflineController *collectionOfflineController; // @synthesize collectionOfflineController=_collectionOfflineController;
@property(retain, nonatomic) SPCollectionController *collectionController; // @synthesize collectionController=_collectionController;
@property(retain, nonatomic) SPTCollectionRecentlyPlayedModel *recentlyPlayedModel; // @synthesize recentlyPlayedModel=_recentlyPlayedModel;
@property(retain, nonatomic) NSMutableArray *registeredEntityContentTypes; // @synthesize registeredEntityContentTypes=_registeredEntityContentTypes;
@property(retain, nonatomic) NSMutableArray *collectionLists; // @synthesize collectionLists=_collectionLists;
@property(retain, nonatomic) SPTSaveToCollectionPushNotificationAction *saveToCollectionPushNotificationAction; // @synthesize saveToCollectionPushNotificationAction=_saveToCollectionPushNotificationAction;
@property(retain, nonatomic) id <SPTITunesLibraryManager> itunesLibraryManager; // @synthesize itunesLibraryManager=_itunesLibraryManager;
@property(retain, nonatomic) SPTCollectionOfflineImageManager *offlineImageManager; // @synthesize offlineImageManager=_offlineImageManager;
@property(nonatomic) __weak UIViewController *collectionPage; // @synthesize collectionPage=_collectionPage;
@property(nonatomic) __weak id <SPTHubFeature> hubFeature; // @synthesize hubFeature=_hubFeature;
@property(nonatomic) __weak id <SPTMomentsFeature> momentsFeature; // @synthesize momentsFeature=_momentsFeature;
@property(nonatomic) __weak id <SPTHTTPTestFeature> httpTest; // @synthesize httpTest=_httpTest;
@property(nonatomic) __weak id <SettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <SPTAbbaFeature> abbaFeature; // @synthesize abbaFeature=_abbaFeature;
@property(nonatomic) __weak id <SPTAudioTouchFeature> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(nonatomic) __weak id <PlaylistFeature> playlistFeature; // @synthesize playlistFeature=_playlistFeature;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <BaseFeature> baseFeature; // @synthesize baseFeature=_baseFeature;
@property(readonly, nonatomic) __weak id <ShuffleFeature> shuffleFeature; // @synthesize shuffleFeature=_shuffleFeature;
@property(readonly, nonatomic) SPTCollection *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;
@property(readonly, getter=isVisible) BOOL visible;
@property(readonly, getter=isEnabled) BOOL enabled;
- (void)unregisterCollectionResolverWithRouter:(id)arg1;
- (void)registerCollectionResolverWithRouter:(id)arg1;
- (id)provideResolverForRecentlyPlayedDataLoader;
- (id)provideResolverForFollowModel;
- (id)provideResolverForArtistView;
- (void)removeCollectionListsObserver:(id)arg1;
- (void)addCollectionListsObserver:(id)arg1;
- (id)provideTrackContextFactory;
- (id)provideCollectionController;
- (void)registerCollectionEntityContentType:(id)arg1;
- (void)unregisterCollectionContentListWithTitle:(id)arg1 URL:(id)arg2;
- (void)registerCollectionContentListWithTitle:(id)arg1 icon:(unsigned int)arg2 URL:(id)arg3 order:(unsigned int)arg4;
- (id)provideCollectionAlbumPage:(id)arg1;
- (id)provideCollectionAlbumModelForURL:(id)arg1;
- (id)provideCollectionArtistPage:(id)arg1;
- (id)provideCollectionArtistModelForURL:(id)arg1;
- (id)provideCollectionAllSongsPage:(id)arg1;
- (id)provideCollectionAlbumsPage:(id)arg1;
- (id)provideLocalSettings;
- (id)provideCollectionPlaylistsPage:(id)arg1;
- (id)provideCollectionArtistsPage:(id)arg1;
- (id)provideCollectionPagePad:(id)arg1;
- (id)provideCollectionPage:(id)arg1;
- (id)provideCollectionRecentlyPlayedPage:(id)arg1;
- (id)provideRecentlyPlayedEntityList;
@property(readonly, nonatomic, getter=isYourLibraryFeatureEnabled) BOOL yourLibraryFeatureEnabled;
- (BOOL)shouldDisplayCurationInfoView;
- (BOOL)shouldUseMusicHub;
- (BOOL)shouldUseRecentlyPlayedLayout;
- (id)providePlaylistPage:(id)arg1;
- (id)provideITunesLibraryManager;
- (id)provideCollectedContextForArtistURL:(id)arg1;
- (id)provideCollectedContextForAlbumURL:(id)arg1;
- (id)provideCompleteAlbumActionTaskForURL:(id)arg1 logContext:(id)arg2;
- (id)provideSaveRemoveActionTaskForURL:(id)arg1 logContext:(id)arg2;
- (id)provideCollection;
- (id)playerForViewURI:(id)arg1;
- (id)trackContextPlayerForViewURI:(id)arg1;
- (id)createCollectionControllerWithSession:(id)arg1 core:(id)arg2 playedStateManager:(id)arg3;
- (void)unload;
- (void)load;
- (void)configureWithFeatures:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

