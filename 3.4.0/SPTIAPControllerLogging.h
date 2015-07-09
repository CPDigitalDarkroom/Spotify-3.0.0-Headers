//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTLogCenter;

@interface SPTIAPControllerLogging : NSObject
{
    SPTLogCenter *_logCenter;
}

@property(readonly, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)transactionRemoved;
- (void)clientHasLegacyControllerReceiptStored;
- (void)ignoreFailedTransactionWithError:(id)arg1;
- (void)resumedInterruptedTransaction:(id)arg1;
- (void)errorPurchasingProduct:(id)arg1;
- (void)cancelPurchasingProduct;
- (void)donePurchasingProduct;
- (void)startActivatingProduct;
- (void)startPurchasingProduct;
- (void)errorLoadingProducts:(id)arg1;
- (void)doneLoadingProducts;
- (void)startLoadingProducts;
- (id)jsonFromError:(id)arg1;
- (void)logEvent:(id)arg1 domain:(id)arg2 json:(id)arg3;
- (void)console:(SEL)arg1 obj:(id)arg2;
- (void)console:(SEL)arg1;

@end
