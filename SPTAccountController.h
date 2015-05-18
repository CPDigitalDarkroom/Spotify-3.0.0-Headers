//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAccountControllerProductActivationDelegate.h"
#import "SPTAccountProductActivationController.h"
#import "SPTAccountProductInformationController.h"
#import "SPTProductStateObserver.h"

@class DeferredTrialController, NSHashTable, NSMutableArray, NSString, SPTAccountFeatureLogging;

@interface SPTAccountController : NSObject <SPTProductStateObserver, SPTAccountControllerProductActivationDelegate, SPTAccountProductInformationController, SPTAccountProductActivationController>
{
    BOOL _canActivatePremiumTrial;
    BOOL _cachedPremiumProductAvailabilityValue;
    id <SPTProductState> _productState;
    id <InAppPurchaseController> _inAppPurchaseController;
    DeferredTrialController *_deferredTrialController;
    int _currentProduct;
    SPTAccountFeatureLogging *_accountLogging;
    NSMutableArray *_productActivationOrders;
    NSHashTable *_activationObservers;
    NSHashTable *_informationObservers;
    double _premiumProductAvailabilityCacheTime;
}

+ (id)keyPathsForValuesAffectingAvailableProduct;
@property(retain, nonatomic) NSHashTable *informationObservers; // @synthesize informationObservers=_informationObservers;
@property(retain, nonatomic) NSHashTable *activationObservers; // @synthesize activationObservers=_activationObservers;
@property(retain, nonatomic) NSMutableArray *productActivationOrders; // @synthesize productActivationOrders=_productActivationOrders;
@property(retain, nonatomic) SPTAccountFeatureLogging *accountLogging; // @synthesize accountLogging=_accountLogging;
@property(nonatomic) double premiumProductAvailabilityCacheTime; // @synthesize premiumProductAvailabilityCacheTime=_premiumProductAvailabilityCacheTime;
@property(nonatomic) BOOL cachedPremiumProductAvailabilityValue; // @synthesize cachedPremiumProductAvailabilityValue=_cachedPremiumProductAvailabilityValue;
@property(nonatomic) BOOL canActivatePremiumTrial; // @synthesize canActivatePremiumTrial=_canActivatePremiumTrial;
@property(nonatomic) int currentProduct; // @synthesize currentProduct=_currentProduct;
@property(retain, nonatomic) DeferredTrialController *deferredTrialController; // @synthesize deferredTrialController=_deferredTrialController;
@property(retain, nonatomic) id <InAppPurchaseController> inAppPurchaseController; // @synthesize inAppPurchaseController=_inAppPurchaseController;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)productActivation:(id)arg1 didFailWithError:(id)arg2;
- (void)productActivationDidFinish:(id)arg1;
- (void)productActivationDidStart:(id)arg1;
- (void)notifyProductInformationObserversAboutAvailableProductChange;
- (void)notifyProductInformationObserversAboutCurrentProductChange;
- (void)removeProductInformationObserver:(id)arg1;
- (void)addProductInformationObserver:(id)arg1;
- (void)removeProductActivationObserver:(id)arg1;
- (void)addProductActivationObserver:(id)arg1;
- (void)startActivationOrder:(id)arg1;
- (void)startActivatingAvailableProduct:(int)arg1;
- (id)activationOrderForProduct:(int)arg1;
- (int)accountTypeForProductState:(id)arg1;
- (void)checkPremiumPurchaseAvailability:(CDUnknownBlockType)arg1;
- (void)checkPremiumPurchaseAvailability:(CDUnknownBlockType)arg1 forceUpdate:(BOOL)arg2;
- (void)trialEligibilityStateDidChange;
- (BOOL)fetchPremiumPurchaseAvailabilityIgnoreCache:(BOOL)arg1;
@property(readonly, nonatomic) int availableProduct;
- (void)dealloc;
- (id)initWithProductState:(id)arg1 inAppPurchaseController:(id)arg2 deferredTrialController:(id)arg3;
- (void)updatePremiumProductAvailability;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

