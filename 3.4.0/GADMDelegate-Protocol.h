//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADLocation, GADRequestError, NSArray, NSDate, NSNumber, NSObject, NSString, UIView, UIViewController;

@protocol GADMDelegate <NSObject>
- (NSString *)adapterExitCodesParameter;
- (NSString *)adapterDurationsParameter;
- (void)endTimingAdapterWithExitCode:(long long)arg1;
- (void)resetTimingAdapters;
- (void)startTimingAdapter;
- (NSString *)requestAgent;
- (NSNumber *)childDirectedTreatment;
- (NSArray *)userKeywords;
- (GADLocation *)userLocation;
- (NSDate *)userBirthday;
- (long long)userGender;
- (id <GADAdNetworkExtras>)networkExtrasFor:(Class)arg1;
- (_Bool)gadmTestMode;
- (void)gadmWillLeaveApplication;
- (void)gadmDidDismissInterstitial;
- (void)gadmWillDismissInterstitial;
- (void)gadmWillPresentInterstitial;
- (void)gadmDidDismissFullScreenModal;
- (void)gadmWillDismissFullScreenModal;
- (void)gadmWillPresentFullScreenModal;
- (void)gadmBannerAdRefreshFailedWithError:(GADRequestError *)arg1;
- (void)gadmDidFailToReceiveAdWithError:(GADRequestError *)arg1;
- (void)gadmDidReceiveInterstitial:(NSObject *)arg1;
- (void)gadmDidReceiveAd:(UIView *)arg1;
- (UIViewController *)viewControllerForPresentingModalView;
@end

