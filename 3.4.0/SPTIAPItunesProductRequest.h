//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKProductsRequestDelegate.h"

@class NSSet, NSString, SKProductsRequest;

@interface SPTIAPItunesProductRequest : NSObject <SKProductsRequestDelegate>
{
    id <SPTIAPItunesProductRequestDelegate> _delegate;
    NSSet *_productIdentifiers;
    SKProductsRequest *_productRequest;
}

@property(retain, nonatomic) SKProductsRequest *productRequest; // @synthesize productRequest=_productRequest;
@property(readonly, nonatomic) NSSet *productIdentifiers; // @synthesize productIdentifiers=_productIdentifiers;
@property(nonatomic) __weak id <SPTIAPItunesProductRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)start;
- (id)initWithProductIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

