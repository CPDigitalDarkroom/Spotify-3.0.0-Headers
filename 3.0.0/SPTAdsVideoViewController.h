//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTAdsBaseViewController.h"

#import "SPTAdEntityViewModelDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SPTAdEntityView, SPTAdEntityViewModel, SPTProgressView;

@interface SPTAdsVideoViewController : SPTAdsBaseViewController <UIGestureRecognizerDelegate, SPTAdEntityViewModelDelegate>
{
    SPTAdEntityViewModel *_entityModel;
    SPTAdEntityView *_entityView;
    id _playbackObserver;
    SPTProgressView *_progressView;
}

@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) id playbackObserver; // @synthesize playbackObserver=_playbackObserver;
@property(retain, nonatomic) SPTAdEntityView *entityView; // @synthesize entityView=_entityView;
@property(retain, nonatomic) SPTAdEntityViewModel *entityModel; // @synthesize entityModel=_entityModel;
- (void).cxx_destruct;
- (void)adEntityViewModel:(id)arg1 videoIsAvailable:(BOOL)arg2;
- (void)adEntityViewModel:(id)arg1 didSwitch:(BOOL)arg2;
- (void)adEntityViewModel:(id)arg1 didStartPlaying:(BOOL)arg2;
- (void)adEntityViewModel:(id)arg1 setLoading:(BOOL)arg2;
- (void)updatePlayButtonState;
- (void)togglePlayPause;
- (void)skipAd;
- (void)hideAdView;
- (void)handleTap;
- (void)resignActive:(id)arg1;
- (void)becomeActive:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)showUI;
- (void)hideUI;
- (void)handleRotation:(int)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)initWithViewModel:(id)arg1 entityViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

