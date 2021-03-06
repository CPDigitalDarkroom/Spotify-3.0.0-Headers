//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTIAPRequestFactory.h"

@class SPApHermesController;

@interface SPTIAPHermesRequestFactory : SPTIAPRequestFactory
{
    SPApHermesController *_hermesController;
}

@property(retain, nonatomic) SPApHermesController *hermesController; // @synthesize hermesController=_hermesController;
- (void).cxx_destruct;
- (id)createProductActivationRequestWithReceiptData:(id)arg1;
- (id)createTransactionRequestForPayment:(id)arg1;
- (id)createItunesProductRequestForProductIdentifiers:(id)arg1;
- (id)createSpotifyProductRequest;
- (id)initWithHermesController:(id)arg1 paymentQueue:(id)arg2 applicationVersionString:(id)arg3;

@end

