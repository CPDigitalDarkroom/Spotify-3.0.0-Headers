//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTTelcoActivationOrderTokenRequestDelegate.h"
#import "SPTTelcoActivationProductActivationRequestDelegate.h"

@class CTTelephonyNetworkInfo, NSArray, NSMapTable, NSMutableArray, NSString, SPTTelcoActivationDelayManager, SPTTelcoActivationLogger, SPTTelcoActivationPrerequisites;

@interface SPTTelcoActivationController : NSObject <SPTTelcoActivationOrderTokenRequestDelegate, SPTTelcoActivationProductActivationRequestDelegate>
{
    id <SPTTelcoActivationControllerDelegate> _delegate;
    NSArray *_operators;
    SPTTelcoActivationPrerequisites *_prerequisites;
    CTTelephonyNetworkInfo *_telephonyNetworkInfo;
    id <SPTTelcoActivationOrderTokenRequestFactory> _orderTokenRequestFactory;
    id <SPTTelcoActivationProductActivationRequestFactory> _productActivationRequestFactory;
    SPTTelcoActivationLogger *_logger;
    SPTTelcoActivationDelayManager *_delayManager;
    NSMapTable *_tokenRequests;
    NSMutableArray *_productActivationRequests;
}

@property(retain, nonatomic) NSMutableArray *productActivationRequests; // @synthesize productActivationRequests=_productActivationRequests;
@property(retain, nonatomic) NSMapTable *tokenRequests; // @synthesize tokenRequests=_tokenRequests;
@property(retain, nonatomic) SPTTelcoActivationDelayManager *delayManager; // @synthesize delayManager=_delayManager;
@property(retain, nonatomic) SPTTelcoActivationLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTTelcoActivationProductActivationRequestFactory> productActivationRequestFactory; // @synthesize productActivationRequestFactory=_productActivationRequestFactory;
@property(retain, nonatomic) id <SPTTelcoActivationOrderTokenRequestFactory> orderTokenRequestFactory; // @synthesize orderTokenRequestFactory=_orderTokenRequestFactory;
@property(retain, nonatomic) CTTelephonyNetworkInfo *telephonyNetworkInfo; // @synthesize telephonyNetworkInfo=_telephonyNetworkInfo;
@property(readonly, nonatomic) SPTTelcoActivationPrerequisites *prerequisites; // @synthesize prerequisites=_prerequisites;
@property(readonly, copy, nonatomic) NSArray *operators; // @synthesize operators=_operators;
@property(nonatomic) __weak id <SPTTelcoActivationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)orderTokenRequest:(id)arg1 didFinishWithOrderToken:(id)arg2 responseData:(id)arg3;
- (void)orderTokenRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)orderTokenRequestDidStart:(id)arg1;
- (void)activationRequestDidFinish:(id)arg1;
- (void)activationRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)activationRequestDidStart:(id)arg1;
- (id)identifierForCarrier:(id)arg1;
- (id)currentNetworkOperatorIdentifier;
- (id)currentOperator;
- (void)startActivatingProductForOperator:(id)arg1 tokenResponse:(id)arg2;
- (void)startRequestingOrderTokenForOperator:(id)arg1;
- (void)prerequisiteSatisfactionDidUpdate;
- (_Bool)isBusyProcessingRequests;
- (void)cancelAllRequests;
- (void)invalidate;
- (void)dealloc;
- (id)initWithOperators:(id)arg1 prerequisites:(id)arg2 telephonyNetworkInfo:(id)arg3 orderTokenRequestFactory:(id)arg4 productActivationRequestFactory:(id)arg5 logger:(id)arg6 delayManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
