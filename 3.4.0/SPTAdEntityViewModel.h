//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNowPlayingDurationViewDataSource.h"

@class AVPlayer, AVPlayerLayer, NSMutableDictionary, NSNotificationCenter, NSTimer, SPTAdEntityData, SPTAdsActivityLogger;

@interface SPTAdEntityViewModel : NSObject <SPTNowPlayingDurationViewDataSource>
{
    _Bool _canSkip;
    _Bool _activePlayerRateContextObserver;
    _Bool _activePlayerStatusContextObserver;
    _Bool _activePlayerItemStatusContextObserver;
    _Bool _activePlaybackBufferContextObserver;
    _Bool _activePlayerDurationContextObserver;
    _Bool _playbackIsStalled;
    _Bool _playbackWasInitiated;
    _Bool _isAVReady;
    _Bool _didFireImpressionEvent;
    SPTAdEntityData *_data;
    id <SPTAdEntityViewModelDelegate> _viewDelegate;
    id <SPTAdEntityViewModelInternalDelegate> _internalDelegate;
    AVPlayerLayer *_mediaPlayerLayer;
    NSMutableDictionary *_currentMediaInfo;
    id _mediaPlayerObserver;
    id _skipObserver;
    NSTimer *_bufferingTimer;
    NSTimer *_unknownPlayerStatusTimer;
    AVPlayer *_mediaPlayer;
    SPTAdsActivityLogger *_adsActivityLogger;
    NSNotificationCenter *_notificationCenter;
    id <SPTHLSResourceLoaderFactory> _hlsResourceLoaderFactory;
    id <SPTHLSResourceLoader> _hlsResourceLoader;
}

+ (id)supportedMimeTypes;
@property(retain, nonatomic) id <SPTHLSResourceLoader> hlsResourceLoader; // @synthesize hlsResourceLoader=_hlsResourceLoader;
@property(retain, nonatomic) id <SPTHLSResourceLoaderFactory> hlsResourceLoaderFactory; // @synthesize hlsResourceLoaderFactory=_hlsResourceLoaderFactory;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(nonatomic) _Bool didFireImpressionEvent; // @synthesize didFireImpressionEvent=_didFireImpressionEvent;
@property(nonatomic) __weak SPTAdsActivityLogger *adsActivityLogger; // @synthesize adsActivityLogger=_adsActivityLogger;
@property(nonatomic) _Bool isAVReady; // @synthesize isAVReady=_isAVReady;
@property(retain, nonatomic) AVPlayer *mediaPlayer; // @synthesize mediaPlayer=_mediaPlayer;
@property(nonatomic) _Bool playbackWasInitiated; // @synthesize playbackWasInitiated=_playbackWasInitiated;
@property(nonatomic) _Bool playbackIsStalled; // @synthesize playbackIsStalled=_playbackIsStalled;
@property(retain, nonatomic) NSTimer *unknownPlayerStatusTimer; // @synthesize unknownPlayerStatusTimer=_unknownPlayerStatusTimer;
@property(retain, nonatomic) NSTimer *bufferingTimer; // @synthesize bufferingTimer=_bufferingTimer;
@property(nonatomic) _Bool activePlayerDurationContextObserver; // @synthesize activePlayerDurationContextObserver=_activePlayerDurationContextObserver;
@property(nonatomic) _Bool activePlaybackBufferContextObserver; // @synthesize activePlaybackBufferContextObserver=_activePlaybackBufferContextObserver;
@property(nonatomic) _Bool activePlayerItemStatusContextObserver; // @synthesize activePlayerItemStatusContextObserver=_activePlayerItemStatusContextObserver;
@property(nonatomic) _Bool activePlayerStatusContextObserver; // @synthesize activePlayerStatusContextObserver=_activePlayerStatusContextObserver;
@property(nonatomic) _Bool activePlayerRateContextObserver; // @synthesize activePlayerRateContextObserver=_activePlayerRateContextObserver;
@property(nonatomic) id skipObserver; // @synthesize skipObserver=_skipObserver;
@property(nonatomic) id mediaPlayerObserver; // @synthesize mediaPlayerObserver=_mediaPlayerObserver;
@property(retain, nonatomic) NSMutableDictionary *currentMediaInfo; // @synthesize currentMediaInfo=_currentMediaInfo;
@property(retain, nonatomic) AVPlayerLayer *mediaPlayerLayer; // @synthesize mediaPlayerLayer=_mediaPlayerLayer;
@property(nonatomic) _Bool canSkip; // @synthesize canSkip=_canSkip;
@property(nonatomic) __weak id <SPTAdEntityViewModelInternalDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) __weak id <SPTAdEntityViewModelDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(retain, nonatomic) SPTAdEntityData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)debugDescriptionMediaPlayerItem:(id)arg1;
- (id)avPlayerDebugDescription;
- (id)description;
- (void)logState;
- (void)dealloc;
- (void)teardown;
- (_Bool)durationViewDisallowSeeking:(id)arg1;
- (double)durationViewAnimationSpeed:(id)arg1;
- (double)durationViewCurrentDuration:(id)arg1;
- (double)durationViewCurrentPosition:(id)arg1;
- (void)fireImpressionEvent;
- (void)fireEvent:(id)arg1;
- (void)tearDownVideoLayer;
- (void)enableVideo:(_Bool)arg1;
- (void)setupVideoLayer;
- (void)teardownOnSwitchAd;
- (void)updateMediaItemInfo;
- (double)getPlaybackDuration;
- (void)removePlaybackTimeObserver:(id)arg1;
- (id)addPlaybackTimeObserver:(CDUnknownBlockType)arg1;
- (void)skip;
- (_Bool)isPlaying;
- (void)pause;
- (void)playMediaPlayer;
- (void)playBackgrounded:(_Bool)arg1;
- (void)play;
- (void)playbackFinished:(id)arg1;
- (void)unknownPlayerStatusTimedOut;
- (void)bufferingTimedOut;
- (void)playerItemFailed:(id)arg1;
- (void)playbackResumed;
- (void)playbackStalled;
- (void)switchAd;
- (void)startAd;
- (_Bool)hasCompletedPlayback;
@property(readonly, nonatomic) _Bool isReadyToPlay;
- (void)prepareMedia;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addPlaybackChangeObservers:(id)arg1;
- (void)preload;
- (id)createMediaPlayer;
- (id)initWithAdDictionary:(id)arg1 hlsVideoDisabled:(_Bool)arg2 hlsResourceLoaderFactory:(id)arg3 adsActivityLogger:(id)arg4 notificationCenter:(id)arg5;

@end

