//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADAdAppViewController.h"

@class GADInterstitial;

@interface GADInterstitialViewController : GADAdAppViewController
{
    GADInterstitial *_interstitial;
}

- (void).cxx_destruct;
- (void)finishDismissal;
- (void)relinquishScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)finishAppearing;
- (_Bool)isLoaded;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAdView:(id)arg1;
- (id)initWithSlot:(id)arg1;

@end

