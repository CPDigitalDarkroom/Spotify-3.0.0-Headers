//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeature.h"

@class NSString, SPTAbbaFeatureFlags, SPTAllocationContext;

@interface SPTAbbaFeatureImplementation : NSObject <SPTAbbaFeature>
{
    id <BaseFeature> _baseUI;
    id <CosmosFeature> _cosmos;
    SPTAbbaFeatureFlags *_featureFlags;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) SPTAbbaFeatureFlags *featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic) __weak id <CosmosFeature> cosmos; // @synthesize cosmos=_cosmos;
@property(nonatomic) __weak id <BaseFeature> baseUI; // @synthesize baseUI=_baseUI;
- (void).cxx_destruct;
- (id)provideFeatureEnabledStateReducerForFeatureFlags:(id)arg1 featureFlag:(id)arg2 reductionBlock:(CDUnknownBlockType)arg3;
- (id)provideFeatureFlags;
- (id)abbaCosmosResolverWithPageIdentifier:(id)arg1;
- (id)provideAbbaViewController;
- (BOOL)isAbbaEnabled;
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

