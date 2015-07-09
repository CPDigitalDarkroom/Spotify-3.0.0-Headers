//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTOfflinePlaylistFeature.h"

@class NSString, SPTAllocationContext;

@interface SPTOfflinePlaylistFeatureImplementation : NSObject <SPTOfflinePlaylistFeature>
{
    id <SPTOfflineInfoViewFactory> _offlineInfoViewFactory;
    id <BaseFeature> _baseFeature;
    id <SPTAbbaFeature> _abbaFeature;
    id <SettingsFeature> _settingsFeature;
    id <CollectionFeature> _collectionFeature;
    id <SPTFeatureEnabledStateReducer> _featureFlagReducer;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) id <SPTFeatureEnabledStateReducer> featureFlagReducer; // @synthesize featureFlagReducer=_featureFlagReducer;
@property(nonatomic) __weak id <CollectionFeature> collectionFeature; // @synthesize collectionFeature=_collectionFeature;
@property(nonatomic) __weak id <SettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTAbbaFeature> abbaFeature; // @synthesize abbaFeature=_abbaFeature;
@property(nonatomic) __weak id <BaseFeature> baseFeature; // @synthesize baseFeature=_baseFeature;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTOfflineInfoViewFactory> offlineInfoViewFactory; // @synthesize offlineInfoViewFactory=_offlineInfoViewFactory;
- (id)provideLocalSettings;
- (CDUnknownBlockType)featureOverrideEnabledStateReductionBlock;
- (CDUnknownBlockType)featureAbbaEnabledStateReductionBlock;
- (void)disableFeature;
- (void)enableFeature;
- (void)handleFeatureStateChange:(BOOL)arg1;
@property(readonly, nonatomic, getter=isOfflinePlaylistAvailable) BOOL offlinePlaylistAvailable;
- (void)loadFeatureFlagReducer;
- (id)provideInfoViewFactory;
- (id)provideRootViewController;
- (void)registerPages;
- (void)unregisterCollectionListItem;
- (void)registerCollectionListItem;
- (void)registerFeatureSettingsPage;
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
