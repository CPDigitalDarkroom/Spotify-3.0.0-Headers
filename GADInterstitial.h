//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADSlotAdEventDelegate.h"
#import "GADSlotDelegate.h"

@class GADInterstitialViewController, GADRequestError, GADSlot, NSString;

@interface GADInterstitial : NSObject <GADSlotAdEventDelegate, GADSlotDelegate>
{
    GADRequestError *_alreadyUsedError;
    BOOL _hasBeenUsed;
    id <GADInterstitialDelegate> _delegate;
    id <GADInAppPurchaseDelegate> _inAppPurchaseDelegate;
    GADInterstitialViewController *_viewController;
    GADSlot *_slot;
}

@property(retain, nonatomic) GADSlot *slot; // @synthesize slot=_slot;
@property(retain, nonatomic) GADInterstitialViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) BOOL hasBeenUsed; // @synthesize hasBeenUsed=_hasBeenUsed;
@property(nonatomic) __weak id <GADInAppPurchaseDelegate> inAppPurchaseDelegate; // @synthesize inAppPurchaseDelegate=_inAppPurchaseDelegate;
@property(nonatomic) __weak id <GADInterstitialDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)canPresentFullScreen;
- (void)presentFromRootViewController:(id)arg1;
@property(readonly, nonatomic) BOOL isReady;
@property(readonly, copy, nonatomic) NSString *adNetworkClassName;
- (void)loadRequest:(id)arg1;
- (void)slotWillLeaveApplication:(id)arg1;
- (void)slotDidDismissScreen:(id)arg1;
- (void)slotWillDismissScreen:(id)arg1;
- (void)slotWillPresentScreen:(id)arg1;
- (void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;
- (void)slotFinishedLoadingAdContent:(id)arg1;
- (BOOL)slot:(id)arg1 shouldLoadRequest:(id)arg2;
- (id)coordinatesOfContentInScreen:(id)arg1;
- (BOOL)slotShouldReloadCurrentRequest:(id)arg1;
@property(copy, nonatomic) NSString *adUnitID;
- (void)webAction:(id)arg1;
- (void)sendInterstitialError:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
