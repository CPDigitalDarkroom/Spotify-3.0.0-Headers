//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADBannerAdViewDelegate.h"

#import "GADAdViewRenderedCheckerDelegate.h"

@class GADAdViewRenderedChecker, NSString, NSTimer, NSURL;

@interface GADAdNetworkJavaScriptAdViewDelegate : GADBannerAdViewDelegate <GADAdViewRenderedCheckerDelegate>
{
    unsigned int _checkRenderingCount;
    NSTimer *_checkRenderingTimer;
    GADAdViewRenderedChecker *_adViewRenderedChecker;
    BOOL _renderingCheckHasStarted;
    BOOL _wasPassbackReceived;
    NSURL *_passbackURL;
}

@property(nonatomic) BOOL wasPassbackReceived; // @synthesize wasPassbackReceived=_wasPassbackReceived;
@property(copy, nonatomic) NSURL *passbackURL; // @synthesize passbackURL=_passbackURL;
- (void).cxx_destruct;
- (void)adViewDidFailToRenderContent:(id)arg1;
- (void)adViewDidRenderContent:(id)arg1;
- (void)adViewDidFinishLoad:(id)arg1;
- (BOOL)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)stopRenderingTimer;
- (void)startRenderingTimerForAdView:(id)arg1;
- (BOOL)isPassbackRequest:(id)arg1;
- (id)initWithSlot:(id)arg1;
- (id)initWithSlot:(id)arg1 passbackURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

