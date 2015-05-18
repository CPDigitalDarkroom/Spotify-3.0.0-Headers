//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProfileFeature.h"

@class NSString, ProfileVC, SPTAllocationContext;

@interface ProfileFeatureImplementation : NSObject <ProfileFeature>
{
    id <BaseFeature> _baseUI;
    id <SettingsFeature> _settings;
    id <CosmosFeature> _cosmos;
    id <SPTPlayerFeature> _player;
    id <SPTShareFeature> _share;
    id <FollowFeature> _follow;
    ProfileVC *_rootProfile;
    id <SPTActivityFeature> _activityFeature;
    id <SPTAbbaFeature> _abbaFeature;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    id <SPTAudioTouchFeature> _audioTouchFeature;
    id <SPTApolloFeature> _apolloFeature;
}

+ (id)featureDependencies;
+ (id)featureVersion;
+ (id)featureIdentifier;
@property(nonatomic) __weak id <SPTApolloFeature> apolloFeature; // @synthesize apolloFeature=_apolloFeature;
@property(nonatomic) __weak id <SPTAudioTouchFeature> audioTouchFeature; // @synthesize audioTouchFeature=_audioTouchFeature;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(nonatomic) __weak id <SPTAbbaFeature> abbaFeature; // @synthesize abbaFeature=_abbaFeature;
@property(nonatomic) __weak id <SPTActivityFeature> activityFeature; // @synthesize activityFeature=_activityFeature;
@property(retain, nonatomic) ProfileVC *rootProfile; // @synthesize rootProfile=_rootProfile;
@property(nonatomic) __weak id <FollowFeature> follow; // @synthesize follow=_follow;
@property(nonatomic) __weak id <SPTShareFeature> share; // @synthesize share=_share;
@property(nonatomic) __weak id <SPTPlayerFeature> player; // @synthesize player=_player;
@property(nonatomic) __weak id <CosmosFeature> cosmos; // @synthesize cosmos=_cosmos;
@property(nonatomic) __weak id <SettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <BaseFeature> baseUI; // @synthesize baseUI=_baseUI;
- (void).cxx_destruct;
- (id)createEventLoggerWithContext:(id)arg1;
- (id)createViewLoggerWithContext:(id)arg1;
- (id)profileCosmosResolverWithPageIdentifier:(id)arg1;
- (void)loadProfileTheme;
- (int)provideProfileABTestBitmaskValue;
- (BOOL)isArtistProfileRedirectEnabled;
- (BOOL)isRecentActivityEnabled;
- (BOOL)isRecentActivityEnabledRemotely;
- (BOOL)isFriend2FriendInvitesEnabled;
- (id)provideRecentActivityVCIPhoneWithURI:(id)arg1;
- (id)provideF2FInvitesVCIPhoneWithURI:(id)arg1;
- (id)provideSocialRelationsVCIPhoneWithURI:(id)arg1;
- (id)provideViewAllVCWithURI:(id)arg1;
- (id)provideLeafProfileViewController:(id)arg1;
- (id)provideRootProfileViewController;
- (id)providePlayerForResolver:(id)arg1;
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
