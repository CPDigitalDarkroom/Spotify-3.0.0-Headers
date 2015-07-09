//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeatureFlagsObserver.h"
#import "SPTProductStateObserver.h"

@class NSString, SPTImageLoaderService, SPTOfflineManager, SPTStorageSystem;

@interface SPTSettingsStorageTestManager : NSObject <SPTProductStateObserver, SPTAbbaFeatureFlagsObserver>
{
    _Bool _enabled;
    id <SPTProductState> _productState;
    id <SPTAbbaFeatureFlags> _featureFlags;
    id <SettingsRegistry> _registry;
    SPTStorageSystem *_storageSystem;
    SPTOfflineManager *_offlineManager;
    SPTImageLoaderService *_imageLoaderService;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) SPTImageLoaderService *imageLoaderService; // @synthesize imageLoaderService=_imageLoaderService;
@property(retain, nonatomic) SPTOfflineManager *offlineManager; // @synthesize offlineManager=_offlineManager;
@property(retain, nonatomic) SPTStorageSystem *storageSystem; // @synthesize storageSystem=_storageSystem;
@property(retain, nonatomic) id <SettingsRegistry> registry; // @synthesize registry=_registry;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (id)provideOfflineContentSettingsWithSettingsViewController:(id)arg1;
- (void)featureFlagsDidChange:(id)arg1;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)checkIfEnabled;
- (id)initWithProductState:(id)arg1 featureFlags:(id)arg2 registry:(id)arg3 storageSystem:(id)arg4 offlineManager:(id)arg5 imageLoaderSerivce:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

