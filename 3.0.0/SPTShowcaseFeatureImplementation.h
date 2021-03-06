//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeatureFlagsObserver.h"
#import "SPTFeature.h"
#import "SPTShowcaseFeature.h"

@class NSString, SPTAllocationContext;

@interface SPTShowcaseFeatureImplementation : NSObject <SPTAbbaFeatureFlagsObserver, SPTFeature, SPTShowcaseFeature>
{
    BOOL _hasShowcaseBeenShown;
    id <SPTAbbaFeature> _ABBAFeature;
    id <BaseFeature> _baseFeature;
    id <SettingsFeature> _settingsFeature;
    id <SPTAbbaFeatureFlags> _ABBAFeatureFlags;
    id <SPTShowcaseDynamicRegistry> _showcaseRegistry;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) id <SPTShowcaseDynamicRegistry> showcaseRegistry; // @synthesize showcaseRegistry=_showcaseRegistry;
@property(nonatomic) BOOL hasShowcaseBeenShown; // @synthesize hasShowcaseBeenShown=_hasShowcaseBeenShown;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> ABBAFeatureFlags; // @synthesize ABBAFeatureFlags=_ABBAFeatureFlags;
@property(nonatomic) __weak id <SettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <BaseFeature> baseFeature; // @synthesize baseFeature=_baseFeature;
@property(nonatomic) __weak id <SPTAbbaFeature> ABBAFeature; // @synthesize ABBAFeature=_ABBAFeature;
- (void).cxx_destruct;
- (void)registerShowcaseSettingsPage;
- (void)featureFlagsDidChange:(id)arg1;
- (void)featureFlagsDidFinishLoadingAll:(id)arg1;
- (void)displayShowcase:(id)arg1;
- (void)loadAndPresentShowcases;
- (id)provideDynamicShowcaseRegistry;
- (BOOL)isShowcaseEnabled;
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

