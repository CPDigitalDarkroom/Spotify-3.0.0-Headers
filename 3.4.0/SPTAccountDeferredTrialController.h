//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAccountTrialEligibilityRequestDelegate.h"
#import "SPTAccountTrialRequestDelegate.h"

@class NSString, SPApHermesController, SPKVObservation, SPSession, SPTAccountTrialEligibilityRequest, SPTAccountTrialRequest, SPTProductStateMonitorController;

@interface SPTAccountDeferredTrialController : NSObject <SPTAccountTrialRequestDelegate, SPTAccountTrialEligibilityRequestDelegate>
{
    _Bool _startTrialInProgress;
    unsigned long long _trialEligibilityState;
    SPTAccountTrialRequest *_trialRequest;
    SPTAccountTrialEligibilityRequest *_eligibilityRequest;
    SPKVObservation *_trialStateObservation;
    SPKVObservation *_trialEligibilityStateObservation;
    SPSession *_session;
    SPApHermesController *_hermes;
    SPTProductStateMonitorController *_productStateMonitorController;
}

@property(readonly, nonatomic) SPTProductStateMonitorController *productStateMonitorController; // @synthesize productStateMonitorController=_productStateMonitorController;
@property(retain, nonatomic) SPApHermesController *hermes; // @synthesize hermes=_hermes;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) SPKVObservation *trialEligibilityStateObservation; // @synthesize trialEligibilityStateObservation=_trialEligibilityStateObservation;
@property(retain, nonatomic) SPKVObservation *trialStateObservation; // @synthesize trialStateObservation=_trialStateObservation;
@property(retain, nonatomic) SPTAccountTrialEligibilityRequest *eligibilityRequest; // @synthesize eligibilityRequest=_eligibilityRequest;
@property(retain, nonatomic) SPTAccountTrialRequest *trialRequest; // @synthesize trialRequest=_trialRequest;
@property(nonatomic) _Bool startTrialInProgress; // @synthesize startTrialInProgress=_startTrialInProgress;
@property(nonatomic) unsigned long long trialEligibilityState; // @synthesize trialEligibilityState=_trialEligibilityState;
- (void).cxx_destruct;
- (id)genericKeychainDict;
- (id)deviceIdFromKeychain;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)settingForKey:(id)arg1;
- (unsigned long long)loadStoredTrialEligibilityState;
- (void)storeTrialEligibility;
- (void)trialStateChanged;
- (void)eligibleForTrialRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)eligibleForTrialRequestDelegateDidFinish:(id)arg1 withEligibilityState:(unsigned long long)arg2;
- (void)checkEligibleForTrial;
- (void)trialRequestDelegate:(id)arg1 didFailWithError:(id)arg2;
- (void)trialRequestDelegateDidStartTrial:(id)arg1;
- (void)startTrial;
- (id)initWithSession:(id)arg1 hermes:(id)arg2 productStateMonitorController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
