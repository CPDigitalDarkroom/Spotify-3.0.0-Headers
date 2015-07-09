//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol SPTIAPControllerObserver <NSObject>

@optional
- (void)controller:(id <SPTIAPController>)arg1 didFailPurchaseWithError:(NSError *)arg2;
- (void)controllerDidFinishPurchase:(id <SPTIAPController>)arg1;
- (void)controllerDidStartActivation:(id <SPTIAPController>)arg1;
- (void)controllerDidResumePurchase:(id <SPTIAPController>)arg1;
- (void)controllerDidStartPurchase:(id <SPTIAPController>)arg1;
- (void)controller:(id <SPTIAPController>)arg1 didFailUpdatingProductsWithError:(NSError *)arg2;
- (void)controllerDidFinishUpdatingProducts:(id <SPTIAPController>)arg1;
- (void)controllerDidStartUpdatingProducts:(id <SPTIAPController>)arg1;
@end
