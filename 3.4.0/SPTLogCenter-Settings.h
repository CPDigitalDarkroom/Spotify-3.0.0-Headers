//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogCenter.h"

@interface SPTLogCenter (Settings)
- (void)logOptInSuccessWithRequestString:(id)arg1;
- (void)logOptInBackendError:(long long)arg1 requestString:(id)arg2;
- (void)logOptInErrorAlertButtonPressed:(long long)arg1;
- (void)logOptInConfirmAlertButtonPressed:(long long)arg1;
- (void)logOptInBannerActionButtonHit;
- (void)logOptInBannerDismissed;
- (void)logOptInBannerPresented;
- (void)sendEvent:(id)arg1;
@end

