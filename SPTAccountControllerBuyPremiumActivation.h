//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTAccountControllerProductActivation.h"

@interface SPTAccountControllerBuyPremiumActivation : SPTAccountControllerProductActivation
{
    id <InAppPurchaseController> _inAppPurchaseController;
}

@property(retain, nonatomic) id <InAppPurchaseController> inAppPurchaseController; // @synthesize inAppPurchaseController=_inAppPurchaseController;
- (void).cxx_destruct;
- (void)start;
- (id)initWithInAppPurchaseController:(id)arg1 delegate:(id)arg2;

@end

