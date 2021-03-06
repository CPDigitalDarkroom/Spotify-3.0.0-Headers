//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FollowFeature.h"
#import "SPTAbbaFeatureFlagsObserver.h"
#import "SPTFeature.h"

@class NSString, SPTAllocationContext;

@interface FollowFeatureImplementation : NSObject <SPTAbbaFeatureFlagsObserver, SPTFeature, FollowFeature>
{
    id <BaseFeature> _baseUI;
    id <SettingsFeature> _settings;
    id <CosmosFeature> _cosmos;
    id <SPTLocalSettings> _localSettings;
    id <SPTAbbaFeature> _abba;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    id <SPTApolloFeature> _apollo;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
+ (id)featureVersion;
@property(nonatomic) __weak id <SPTApolloFeature> apollo; // @synthesize apollo=_apollo;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(nonatomic) __weak id <SPTAbbaFeature> abba; // @synthesize abba=_abba;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <CosmosFeature> cosmos; // @synthesize cosmos=_cosmos;
@property(nonatomic) __weak id <SettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <BaseFeature> baseUI; // @synthesize baseUI=_baseUI;
- (void).cxx_destruct;
- (void)loadFollowTheme;
- (id)followCosmosResolverWithPageIdentifier:(id)arg1;
- (void)presentFollowFromViewController:(id)arg1;
- (id)provideFollowFacebookVC;
- (id)provideFollowRootVC;
- (id)provideFindFriendsVC;
- (BOOL)shouldEnableFindFriends;
- (void)registerFeatureSettingsPage;
- (void)featureFlagsDidChange:(id)arg1;
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

