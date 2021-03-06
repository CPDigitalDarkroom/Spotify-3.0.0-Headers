//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FollowFeature.h"
#import "SPTFeature.h"

@class NSString, SPTAllocationContext;

@interface FollowFeatureImplementation : NSObject <SPTFeature, FollowFeature>
{
    id <BaseFeature> _baseUI;
    id <SettingsFeature> _settings;
    id <CosmosFeature> _cosmos;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
+ (id)featureVersion;
@property(nonatomic) __weak id <CosmosFeature> cosmos; // @synthesize cosmos=_cosmos;
@property(nonatomic) __weak id <SettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <BaseFeature> baseUI; // @synthesize baseUI=_baseUI;
- (void).cxx_destruct;
- (void)loadFollowTheme;
- (id)followCosmosResolverWithPageIdentifier:(id)arg1;
- (void)presentFollowFromViewController:(id)arg1;
- (id)provideFindFriendsButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (id)provideFindFriendsNavigationBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
- (id)provideFindFriendsVC;
- (void)unload;
- (void)load;
- (void)configureWithFeatures:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

