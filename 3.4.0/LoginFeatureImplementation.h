//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LoginFeature.h"
#import "SPTFeature.h"
#import "SPTLoginSignupMarketingOptInFlashControllerDelegate.h"

@class NSString, SPTAllocationContext, SPTFacebookPostOpenGraphManager, SPTLoginDeferredTermsController, SPTLoginSignupMarketingOptInFlashController, SPTTermsAndConditionsManager;

@interface LoginFeatureImplementation : NSObject <SPTLoginSignupMarketingOptInFlashControllerDelegate, SPTFeature, LoginFeature>
{
    id <BaseFeature> _baseUI;
    id <SPTCommunicationsFeature> _communicationsFeature;
    id <SettingsFeature> _settings;
    id <SPTKeystoreFeature> _keystoreFeature;
    SPTFacebookPostOpenGraphManager *_facebookPostOpenGraphManager;
    SPTTermsAndConditionsManager *_termsAndConditionsManager;
    SPTLoginDeferredTermsController *_deferredTermsController;
    SPTLoginSignupMarketingOptInFlashController *_signupMarketingOptInFlashController;
}

+ (id)loginAccountsManager;
+ (void)applicationDidFinishLaunchingNotification:(id)arg1;
+ (void)load;
+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) SPTLoginSignupMarketingOptInFlashController *signupMarketingOptInFlashController; // @synthesize signupMarketingOptInFlashController=_signupMarketingOptInFlashController;
@property(retain, nonatomic) SPTLoginDeferredTermsController *deferredTermsController; // @synthesize deferredTermsController=_deferredTermsController;
@property(retain, nonatomic) SPTTermsAndConditionsManager *termsAndConditionsManager; // @synthesize termsAndConditionsManager=_termsAndConditionsManager;
@property(retain, nonatomic) SPTFacebookPostOpenGraphManager *facebookPostOpenGraphManager; // @synthesize facebookPostOpenGraphManager=_facebookPostOpenGraphManager;
@property(nonatomic) __weak id <SPTKeystoreFeature> keystoreFeature; // @synthesize keystoreFeature=_keystoreFeature;
@property(nonatomic) __weak id <SettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <SPTCommunicationsFeature> communicationsFeature; // @synthesize communicationsFeature=_communicationsFeature;
@property(nonatomic) __weak id <BaseFeature> baseUI; // @synthesize baseUI=_baseUI;
- (void).cxx_destruct;
- (void)loginSignupMarketingOptInFlashControllerDidHandleFlash:(id)arg1;
- (id)provideLoginStateController;
- (void)disposeSignupMarketingOptInFlashController;
- (void)unload;
- (void)storePreferredLocale;
- (void)registerFeatureSettingsPage;
- (void)load;
- (void)configureWithFeatures:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

