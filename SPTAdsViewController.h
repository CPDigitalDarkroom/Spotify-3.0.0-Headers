//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTAdsBaseViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTAdEntityViewModelDelegate.h"
#import "SPViewController.h"
#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSString, SPTAdEntityView, SPTAdsVideoViewController, SPTProgressView, UINavigationBar, UIScrollView, UIViewController;

@interface SPTAdsViewController : SPTAdsBaseViewController <SPContentInsetViewController, SPViewController, UIGestureRecognizerDelegate, SPTAdEntityViewModelDelegate>
{
    id <SPTAdsViewControllerDelegate> _controlDelegate;
    SPTAdEntityView *_adView;
    UIViewController *_dismissedViewController;
    UINavigationBar *_navigationBar;
    id _playbackObserver;
    NSMutableArray *_adViewList;
    SPTAdsVideoViewController *_videoVC;
    SPTAdEntityView *_videoView;
    int _currentViewIndex;
    UIScrollView *_scrollView;
    SPTProgressView *_progressView;
}

@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) int currentViewIndex; // @synthesize currentViewIndex=_currentViewIndex;
@property(retain, nonatomic) SPTAdEntityView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) SPTAdsVideoViewController *videoVC; // @synthesize videoVC=_videoVC;
@property(retain, nonatomic) NSMutableArray *adViewList; // @synthesize adViewList=_adViewList;
@property(retain, nonatomic) id playbackObserver; // @synthesize playbackObserver=_playbackObserver;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIViewController *dismissedViewController; // @synthesize dismissedViewController=_dismissedViewController;
@property(retain, nonatomic) SPTAdEntityView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) id <SPTAdsViewControllerDelegate> controlDelegate; // @synthesize controlDelegate=_controlDelegate;
- (void).cxx_destruct;
- (void)sp_updateContentInsets;
- (void)updatePlayButtonState;
- (void)skipAd;
- (void)adEntityViewModel:(id)arg1 videoIsAvailable:(BOOL)arg2;
- (void)adEntityViewModel:(id)arg1 didSwitch:(BOOL)arg2;
- (void)adEntityViewModel:(id)arg1 didStartPlaying:(BOOL)arg2;
- (void)adEntityViewModel:(id)arg1 setLoading:(BOOL)arg2;
- (void)handleClickEventForAdEntity:(id)arg1;
- (void)handleTap;
- (void)watchNowButtonClicked:(id)arg1;
- (void)maximize;
- (void)minimizeAndNavigateTo:(id)arg1;
@property(readonly, nonatomic) BOOL canAdViewRotate;
- (void)hideAdView;
- (void)updateAdView;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setupAdView;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)handleRotation:(int)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)URI;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

