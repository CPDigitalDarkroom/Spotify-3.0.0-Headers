//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeatureFlagsObserver.h"
#import "SPTFeature.h"

@class NSString, SPTAllocationContext;

@interface SPTPencilFeatureImplementation : NSObject <SPTAbbaFeatureFlagsObserver, SPTFeature>
{
    id <BaseFeature> _base;
    id <SettingsFeature> _settings;
    id <SPTAbbaFeature> _abba;
    id <SPTAbbaFeatureFlags> _featureFlags;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic) __weak id <SPTAbbaFeature> abba; // @synthesize abba=_abba;
@property(nonatomic) __weak id <SettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <BaseFeature> base; // @synthesize base=_base;
- (void).cxx_destruct;
- (void)featureFlagsDidChange:(id)arg1;
- (void)processFeatureFlags;
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

