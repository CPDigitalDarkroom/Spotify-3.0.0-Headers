//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SPTNowPlayingInfoCenterManagerDelegate.h"

@class NSString, NSURL;

@protocol SPTAdsManager <NSObject, SPTNowPlayingInfoCenterManagerDelegate>
@property(readonly, nonatomic) BOOL presentAdUsingDissolveTransition;
@property(readonly, nonatomic) BOOL isVideoCompanionAd;
@property(readonly, nonatomic) BOOL isNowPlayingViewForcedOpen;
@property(readonly, copy, nonatomic) NSString *actionMessage;
@property(readonly, nonatomic) BOOL isEndOfWatchNow;
@property(readonly, nonatomic) BOOL isPrerollOffer;
@property(readonly, nonatomic) BOOL isMidrollOffer;
@property(readonly, nonatomic) BOOL adBreakInProgress;
- (void)setNowPlayingNavigationBarModel:(id <SPTNowPlayingNavigationBarProtocol>)arg1;
- (void)setNowPlayingManager:(id <SPTNowPlayingManager>)arg1;
- (void)playPrerollAdIfNeededWithCompletion:(void (^)(BOOL))arg1;
- (void)disablePrerollAdExperience:(BOOL)arg1 featureIdentifier:(NSString *)arg2;
- (BOOL)handleAdTap:(NSURL *)arg1;
@end

