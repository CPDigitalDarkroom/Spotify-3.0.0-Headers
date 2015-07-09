//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XappAdsDelegate.h"

@class NSNumber, NSString, XAAdView;

@interface XADFPAdapter : NSObject <XappAdsDelegate>
{
    NSNumber *_networkIdentifier;
    XAAdView *_adView;
    CDUnknownBlockType _sessionStartedCallback;
    CDUnknownBlockType _sessionTermiantedCallback;
    CDUnknownBlockType _adRequestCallback;
    CDUnknownBlockType _adFinishedCallback;
    CDUnknownBlockType _adWillPresentCallback;
    CDUnknownBlockType _adWillLeaveAppWithURLCallback;
}

@property(copy) CDUnknownBlockType adWillLeaveAppWithURLCallback; // @synthesize adWillLeaveAppWithURLCallback=_adWillLeaveAppWithURLCallback;
@property(copy) CDUnknownBlockType adWillPresentCallback; // @synthesize adWillPresentCallback=_adWillPresentCallback;
@property(copy) CDUnknownBlockType adFinishedCallback; // @synthesize adFinishedCallback=_adFinishedCallback;
@property(copy) CDUnknownBlockType adRequestCallback; // @synthesize adRequestCallback=_adRequestCallback;
@property(copy) CDUnknownBlockType sessionTermiantedCallback; // @synthesize sessionTermiantedCallback=_sessionTermiantedCallback;
@property(copy) CDUnknownBlockType sessionStartedCallback; // @synthesize sessionStartedCallback=_sessionStartedCallback;
@property(retain) XAAdView *adView; // @synthesize adView=_adView;
@property(retain) NSNumber *networkIdentifier; // @synthesize networkIdentifier=_networkIdentifier;
- (void).cxx_destruct;
- (void)reset;
- (void)adRequest:(id)arg1 withNetworkId:(id)arg2 withParameters:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (_Bool)adWillLeaveApplicationWithURL:(id)arg1;
- (void)interstitialAd:(id)arg1 willPresentinViewController:(id)arg2;
- (void)onAdResult:(id)arg1;
- (void)adFinishedPlayback:(id)arg1;
- (void)adStartedPlayback:(id)arg1;
- (void)adRequest:(id)arg1 didFinishLoadWithView:(id)arg2;
- (void)adRequest:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)onXappAdsTerminated;
- (void)onFailedXappAdsStart:(id)arg1;
- (void)onXappAdsStarted;
- (void)playAdAsInTunerTile:(id)arg1 withContainingView:(id)arg2 adWillPresent:(CDUnknownBlockType)arg3 adWillLeaveAppWithUrl:(CDUnknownBlockType)arg4 adFinished:(CDUnknownBlockType)arg5;
- (void)playAdAsInterstitial:(id)arg1 withRootViewController:(id)arg2 adWillPresent:(CDUnknownBlockType)arg3 adWillLeaveAppWithUrl:(CDUnknownBlockType)arg4 adFinished:(CDUnknownBlockType)arg5;
- (void)adRequest:(id)arg1 networkId:(id)arg2 withParameters:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)adRequest:(id)arg1 withParameters:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)adRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)runInHeadlessMode;
- (void)adViewTouched:(_Bool)arg1;
- (void)adViewTouched;
- (void)terminateSessionWithCallback:(CDUnknownBlockType)arg1;
- (void)startSessionWithApiKey:(id)arg1 appKey:(id)arg2 userData:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)initWithDFPNetworkId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
