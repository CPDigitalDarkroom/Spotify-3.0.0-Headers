//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADInAppPurchaseDelegate.h"
#import "SKPaymentTransactionObserver.h"

@class NSDictionary, NSMutableArray, NSMutableSet, NSString;

@interface GADPaymentTransactionObserver : NSObject <SKPaymentTransactionObserver, GADInAppPurchaseDelegate>
{
    BOOL _defaultPurchaseFlowEnabled;
    id <GADDefaultInAppPurchaseDelegate> _defaultInAppPurchaseDelegate;
    NSMutableSet *_activeProductsRequestDelegates;
    NSMutableArray *_activeInAppPurchases;
    NSMutableSet *_invalidProducts;
    NSDictionary *_validProductIDs;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *validProductIDs; // @synthesize validProductIDs=_validProductIDs;
@property(retain, nonatomic) NSMutableSet *invalidProducts; // @synthesize invalidProducts=_invalidProducts;
@property(retain, nonatomic) NSMutableArray *activeInAppPurchases; // @synthesize activeInAppPurchases=_activeInAppPurchases;
@property(retain, nonatomic) NSMutableSet *activeProductsRequestDelegates; // @synthesize activeProductsRequestDelegates=_activeProductsRequestDelegates;
@property(retain, nonatomic) id <GADDefaultInAppPurchaseDelegate> defaultInAppPurchaseDelegate; // @synthesize defaultInAppPurchaseDelegate=_defaultInAppPurchaseDelegate;
@property(nonatomic, getter=isDefaultPurchaseFlowEnabled) BOOL defaultPurchaseFlowEnabled; // @synthesize defaultPurchaseFlowEnabled=_defaultPurchaseFlowEnabled;
- (void).cxx_destruct;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)didReceiveInAppPurchase:(id)arg1;
- (void)notifyUserOfUnavailableProduct;
- (void)failedTransaction:(id)arg1;
- (void)completeTransaction:(id)arg1;
- (id)dequeueInAppPurchaseForTransaction:(id)arg1;
- (void)enqueueInAppPurchase:(id)arg1;
- (void)purchaseProduct:(id)arg1 inAppPurchase:(id)arg2;
- (void)updateValidProducts:(id)arg1 invalidProducts:(id)arg2;
- (void)validateProductIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)disableDefaultPurchaseFlow;
- (void)enableDefaultPurchaseFlowWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

