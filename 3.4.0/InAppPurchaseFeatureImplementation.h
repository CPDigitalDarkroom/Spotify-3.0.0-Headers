//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "InAppPurchaseFeature.h"
#import "SPTFeature.h"

@class NSString, SPTAllocationContext;

@interface InAppPurchaseFeatureImplementation : NSObject <SPTFeature, InAppPurchaseFeature>
{
    id <BaseFeature> _baseFeature;
    id <SettingsFeature> _settingsFeature;
    id <SPTHTTPTestFeature> _httpTestFeature;
    id <SPTAbbaFeature> _abbaFeature;
    id <InAppPurchaseController> _inAppPurchaseController;
    id <SPTIAPController> _iapController;
    id <SPTLocalSettings> _localSettings;
    id <SPTIAPFeatureFlags> _featureFlags;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) id <SPTIAPFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTIAPController> iapController; // @synthesize iapController=_iapController;
@property(retain, nonatomic) id <InAppPurchaseController> inAppPurchaseController; // @synthesize inAppPurchaseController=_inAppPurchaseController;
@property(nonatomic) __weak id <SPTAbbaFeature> abbaFeature; // @synthesize abbaFeature=_abbaFeature;
@property(nonatomic) __weak id <SPTHTTPTestFeature> httpTestFeature; // @synthesize httpTestFeature=_httpTestFeature;
@property(nonatomic) __weak id <SettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <BaseFeature> baseFeature; // @synthesize baseFeature=_baseFeature;
- (void).cxx_destruct;
- (void)tearDownInAppPurchaseFunctionality;
- (void)setupInAppPurchaseController;
- (id)provideInAppPurchaseController;
- (id)controllerLogger;
- (_Bool)shouldUseNewTransactionStack;
- (_Bool)shouldEnableInAppPurchaseFeature;
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
