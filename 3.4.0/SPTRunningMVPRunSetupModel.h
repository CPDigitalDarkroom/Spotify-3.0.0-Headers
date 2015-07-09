//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTOfflineModeStateObserver.h"
#import "SPTPlayerObserver.h"
#import "SPTRunningStepManagerObserver.h"
#import "UIAlertViewDelegate.h"

@class NSArray, NSDictionary, NSString, NSTimer, NSURL, SPTDataLoader, SPTPlayerState, SPTRunningAudioUXManager, SPTRunningPlaybackManagerListImplementation, SPTRunningState, SPTRunningStepManager, SPUser;

@interface SPTRunningMVPRunSetupModel : NSObject <SPTOfflineModeStateObserver, SPTDataLoaderDelegate, SPTPlayerObserver, SPTRunningStepManagerObserver, UIAlertViewDelegate>
{
    _Bool _loaded;
    _Bool _playing;
    _Bool _visible;
    _Bool _startingImminentPlayback;
    _Bool _playOnExit;
    _Bool _playingAd;
    _Bool _playedStartRunning;
    float _detectionProgress;
    id <SPTRunningMVPRunSetupModelDelegate> _delegate;
    unsigned long long _tempo;
    unsigned long long _minimumTempo;
    unsigned long long _maximumTempo;
    long long _step;
    unsigned long long _defaultTempo;
    NSURL *_backgroundImageURL;
    NSURL *_viewURI;
    id <SPTPlayer> _player;
    id <SPTOfflineModeState> _offlineModeState;
    SPTRunningState *_runningState;
    SPTDataLoader *_dataLoader;
    SPTRunningPlaybackManagerListImplementation *_playbackManager;
    SPTRunningStepManager *_stepManager;
    id <SPTLocalSettings> _localSettings;
    SPTRunningAudioUXManager *_audioUXManager;
    SPUser *_user;
    id <SPTRunningTestManager> _testManager;
    id <SPTAdsManager> _adsManager;
    id <SPTProductState> _productState;
    NSDictionary *_playbackItems;
    SPTPlayerState *_state;
    NSTimer *_stepTimeoutTimer;
    NSArray *_sortedTempoBuckets;
    NSTimer *_networkFailedTimer;
    id <SPTCancellationToken> _audioUXCancellationToken;
    NSArray *_suppressions;
}

@property(retain, nonatomic) NSArray *suppressions; // @synthesize suppressions=_suppressions;
@property(retain, nonatomic) id <SPTCancellationToken> audioUXCancellationToken; // @synthesize audioUXCancellationToken=_audioUXCancellationToken;
@property(retain, nonatomic) NSTimer *networkFailedTimer; // @synthesize networkFailedTimer=_networkFailedTimer;
@property(nonatomic) _Bool playedStartRunning; // @synthesize playedStartRunning=_playedStartRunning;
@property(nonatomic) _Bool playingAd; // @synthesize playingAd=_playingAd;
@property(retain, nonatomic) NSArray *sortedTempoBuckets; // @synthesize sortedTempoBuckets=_sortedTempoBuckets;
@property(nonatomic) _Bool playOnExit; // @synthesize playOnExit=_playOnExit;
@property(nonatomic) _Bool startingImminentPlayback; // @synthesize startingImminentPlayback=_startingImminentPlayback;
@property(retain, nonatomic) NSTimer *stepTimeoutTimer; // @synthesize stepTimeoutTimer=_stepTimeoutTimer;
@property(retain, nonatomic) SPTPlayerState *state; // @synthesize state=_state;
@property(retain, nonatomic) NSDictionary *playbackItems; // @synthesize playbackItems=_playbackItems;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(retain, nonatomic) id <SPTRunningTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPUser *user; // @synthesize user=_user;
@property(retain, nonatomic) SPTRunningAudioUXManager *audioUXManager; // @synthesize audioUXManager=_audioUXManager;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTRunningStepManager *stepManager; // @synthesize stepManager=_stepManager;
@property(retain, nonatomic) SPTRunningPlaybackManagerListImplementation *playbackManager; // @synthesize playbackManager=_playbackManager;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTRunningState *runningState; // @synthesize runningState=_runningState;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) NSURL *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
@property(nonatomic) unsigned long long defaultTempo; // @synthesize defaultTempo=_defaultTempo;
@property(nonatomic) float detectionProgress; // @synthesize detectionProgress=_detectionProgress;
@property(nonatomic) long long step; // @synthesize step=_step;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) unsigned long long maximumTempo; // @synthesize maximumTempo=_maximumTempo;
@property(nonatomic) unsigned long long minimumTempo; // @synthesize minimumTempo=_minimumTempo;
@property(nonatomic) unsigned long long tempo; // @synthesize tempo=_tempo;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) __weak id <SPTRunningMVPRunSetupModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)networkTimedout:(id)arg1;
- (void)stepTimedOut:(id)arg1;
- (void)runningStepManagerDidChangeStableTempo:(id)arg1 fromTempo:(double)arg2;
- (void)runningStepManagerDidChangeStabilityProgress:(id)arg1;
- (void)runningStepManagerDidChangeTempo:(id)arg1 fromTempo:(double)arg2;
- (void)runningStepManager:(id)arg1 didReceiveError:(id)arg2;
- (void)runningStepManagerDidChangeSteppingDetected:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (_Bool)shouldPlayPrerollAdForSuppressions:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)playStartRunningAudioUX;
- (void)playPrerollAd;
- (void)showAdInProgressAlertView;
- (void)addTimeoutForCurrentStep;
- (void)restartTimeouts;
- (void)invalidateTimeouts;
- (void)manualFlow;
- (void)processPlayerState:(id)arg1;
- (void)notifyDelegateOfModelLoadWithError:(id)arg1;
- (void)playCurrentTempoImmediately:(_Bool)arg1;
- (void)loadModel;
@property(readonly, nonatomic, getter=isOffline) _Bool offline;
- (id)initWithOfflineModeState:(id)arg1 dataLoader:(id)arg2 viewURI:(id)arg3 playbackManager:(id)arg4 player:(id)arg5 stepManager:(id)arg6 localSettings:(id)arg7 audioUXManager:(id)arg8 user:(id)arg9 testManager:(id)arg10 adsManager:(id)arg11 productState:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

