//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "InAppPurchaseController.h"
#import "SPTIAPControllerObserver.h"

@class NSMutableArray, NSString, SKProduct, SPTProductStateMonitorController;

@interface SPTIAPControllerLegacyAdapter : NSObject <SPTIAPControllerObserver, InAppPurchaseController>
{
    id <SPTIAPController> _controller;
    SKProduct *_premiumProduct;
    CDUnknownBlockType _premiumPurchaseCallback;
    NSMutableArray *_premiumAvailabilityCallbacks;
    SPTProductStateMonitorController *_productStateMonitor;
}

@property(retain, nonatomic) SPTProductStateMonitorController *productStateMonitor; // @synthesize productStateMonitor=_productStateMonitor;
@property(retain, nonatomic) NSMutableArray *premiumAvailabilityCallbacks; // @synthesize premiumAvailabilityCallbacks=_premiumAvailabilityCallbacks;
@property(copy, nonatomic) CDUnknownBlockType premiumPurchaseCallback; // @synthesize premiumPurchaseCallback=_premiumPurchaseCallback;
@property(retain, nonatomic) SKProduct *premiumProduct; // @synthesize premiumProduct=_premiumProduct;
@property(retain, nonatomic) id <SPTIAPController> controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)controller:(id)arg1 didFailPurchaseWithError:(id)arg2;
- (void)controllerDidFinishPurchase:(id)arg1;
- (void)controllerDidStartActivation:(id)arg1;
- (void)controllerDidStartPurchase:(id)arg1;
- (void)controller:(id)arg1 didFailUpdatingProductsWithError:(id)arg2;
- (void)controllerDidFinishUpdatingProducts:(id)arg1;
- (id)localizedPremiumProductPrice;
- (void)clearSettings;
- (void)checkPremiumProductAvailabilityWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)availablePremiumProductIncludes30DayTrial;
- (_Bool)isPremiumProductAvailable;
- (void)purchasePremiumProductWithCallback:(CDUnknownBlockType)arg1;
- (void)purchasePremiumProduct;
- (void)dealloc;
- (id)initWithController:(id)arg1 productStateMonitor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
