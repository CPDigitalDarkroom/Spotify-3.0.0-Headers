//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTImageLoaderDelegate.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTRunningMVPRunSetupModelDelegate.h"
#import "SPTRunningTempoStepperDelegate.h"

@class NSString, NSURL, SPTInfoView, SPTLogCenter, SPTProgressView, SPTRunningImageCache, SPTRunningMVPRunSetupModel, SPTRunningSetupView, SPTTheme;

@interface SPTRunningMVPRunSetupViewController : UIViewController <SPTRunningMVPRunSetupModelDelegate, SPTNavigationControllerNavigationBarState, SPTImageLoaderDelegate, SPTRunningTempoStepperDelegate>
{
    SPTRunningMVPRunSetupModel *_model;
    id <SPTRunningUserInterfaceFactory> _userInterfaceFactory;
    id <SPTImageLoader> _imageLoader;
    SPTLogCenter *_logCenter;
    id <SPTRunningTestManager> _testManager;
    SPTRunningImageCache *_imageCache;
    SPTTheme *_runningTheme;
    SPTInfoView *_offlineView;
    SPTInfoView *_errorView;
    SPTProgressView *_progressView;
    SPTRunningSetupView *_mainView;
    double _lastNPBHeight;
}

@property(nonatomic) double lastNPBHeight; // @synthesize lastNPBHeight=_lastNPBHeight;
@property(retain, nonatomic) SPTRunningSetupView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTInfoView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) SPTInfoView *offlineView; // @synthesize offlineView=_offlineView;
@property(retain, nonatomic) SPTTheme *runningTheme; // @synthesize runningTheme=_runningTheme;
@property(retain, nonatomic) SPTRunningImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) id <SPTRunningTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTRunningUserInterfaceFactory> userInterfaceFactory; // @synthesize userInterfaceFactory=_userInterfaceFactory;
@property(retain, nonatomic) SPTRunningMVPRunSetupModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *cacheKey;
- (void)tempoStemper:(id)arg1 didUpdateValue:(unsigned long long)arg2 fromValue:(unsigned long long)arg3;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)dealloc;
- (void)startButtonDidTouchUpInside:(id)arg1;
- (void)manualButtonDidTouchUpInside:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (id)objectRepresentation;
- (_Bool)restoreWithObjectRepresentation:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)syncOfflineModeStateWithOfflineView;
- (void)runningMVPRunSetupModelWillStartPlaying:(id)arg1;
- (void)runningMVPRunSetupModelDidFinishPlayingPrerollAd:(id)arg1;
- (void)runningMVPRunSetupModelDidChangeDetectionProgress:(id)arg1;
- (void)runningMVPRunSetupModelDidChangeTempo:(id)arg1;
- (void)runningMVPRunSetupModelDidChangeStep:(id)arg1;
- (void)runningMVPRunSetupModelDidStartPlaying:(id)arg1;
- (void)runningMVPRunSetupModelDidFinishLoading:(id)arg1 withError:(id)arg2;
- (void)runningMVPRunSetupModelDidChangeOfflineState:(id)arg1;
- (void)restoreNPB;
- (void)hideNPB;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithModel:(id)arg1 userInterfaceFactory:(id)arg2 imageLoader:(id)arg3 logCenter:(id)arg4 testManager:(id)arg5 imageCache:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

