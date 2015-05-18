//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MixpanelDelegate.h"
#import "SPTFeature.h"
#import "SPTMixpanelFeature.h"

@class Mixpanel, NSString, SPTAllocationContext, SPTMixpanelEngagementController, SPTMixpanelPeopleController;

@interface SPTMixpanelFeatureImplementation : NSObject <MixpanelDelegate, SPTMixpanelFeature, SPTFeature>
{
    id <SPTAbbaFeature> _abbaFeature;
    id <BaseFeature> _baseFeature;
    id <SPTFeatureEnabledStateReducer> _featureEnabledState;
    Mixpanel *_mixpanel;
    SPTMixpanelEngagementController *_mixpanelController;
    SPTMixpanelPeopleController *_mixpanelPeopleController;
    id _trialActivationNotificationIdentifier;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) id trialActivationNotificationIdentifier; // @synthesize trialActivationNotificationIdentifier=_trialActivationNotificationIdentifier;
@property(retain, nonatomic) SPTMixpanelPeopleController *mixpanelPeopleController; // @synthesize mixpanelPeopleController=_mixpanelPeopleController;
@property(retain, nonatomic) SPTMixpanelEngagementController *mixpanelController; // @synthesize mixpanelController=_mixpanelController;
@property(retain, nonatomic) Mixpanel *mixpanel; // @synthesize mixpanel=_mixpanel;
@property(retain, nonatomic) id <SPTFeatureEnabledStateReducer> featureEnabledState; // @synthesize featureEnabledState=_featureEnabledState;
@property(nonatomic) __weak id <BaseFeature> baseFeature; // @synthesize baseFeature=_baseFeature;
@property(nonatomic) __weak id <SPTAbbaFeature> abbaFeature; // @synthesize abbaFeature=_abbaFeature;
- (void).cxx_destruct;
- (id)provideMixpanelPeopleController;
- (id)provideMixpanelEngagementController;
- (id)provideMixpanel;
- (void)stopObservingTrialActivationChanges;
- (void)startObservingTrialActivationChanges;
- (void)logSpecialABGroup;
- (void)logDidActivateTrial;
- (void)logFirstLogin;
- (void)logUserLanguage;
- (void)logUserProduct;
- (void)configureMixpanel:(id)arg1;
- (void)handleFeatureEnabledStateChange;
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

