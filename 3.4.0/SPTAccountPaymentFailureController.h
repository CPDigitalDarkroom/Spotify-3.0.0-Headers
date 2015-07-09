//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPaymentStateControllerObserver.h"

@class NSString, SPTClientEventLogger;

@interface SPTAccountPaymentFailureController : NSObject <SPTPaymentStateControllerObserver>
{
    _Bool _active;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTBannerPresentationManagerTicket> _paymentFailureNotificationBannerTicket;
    id <SPTLocalSettings> _localSettings;
    id <SPTPaymentStateController> _paymentStateController;
    id <SPTAccountProductInformationController> _productInformationController;
    SPTClientEventLogger *_clientEventLogger;
}

@property(readonly, nonatomic) SPTClientEventLogger *clientEventLogger; // @synthesize clientEventLogger=_clientEventLogger;
@property(readonly, nonatomic) id <SPTAccountProductInformationController> productInformationController; // @synthesize productInformationController=_productInformationController;
@property(readonly, nonatomic) id <SPTPaymentStateController> paymentStateController; // @synthesize paymentStateController=_paymentStateController;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTBannerPresentationManagerTicket> paymentFailureNotificationBannerTicket; // @synthesize paymentFailureNotificationBannerTicket=_paymentFailureNotificationBannerTicket;
@property(readonly, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)paymentStateControllerDidUpdatePaymentState:(id)arg1;
- (void)stop;
- (void)start;
- (id)previousPaymentFailureAttemptDictionary;
- (void)resetPreviousPaymentFailureAttempt;
- (void)persistPaymentFailureAttempWithRetryAttempt:(long long)arg1 wasDismissed:(_Bool)arg2;
- (_Bool)shouldPresentPaymentFailureNotificationForPaymentState:(id)arg1;
- (void)handlePaymentNotificationTicket:(id)arg1 statusChangeFromOldStatus:(long long)arg2 retryAttempt:(long long)arg3;
- (void)presentPaymentFailureNotificationWithBannerItem:(id)arg1 retryAttempt:(long long)arg2;
- (void)presentPaymentFailureNotificationIfNeeded;
- (void)dealloc;
- (id)initWithPaymentStateController:(id)arg1 productInformationController:(id)arg2 bannerPresentationManager:(id)arg3 localSettings:(id)arg4 clientEventLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

