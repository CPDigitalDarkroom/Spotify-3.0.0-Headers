//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCancellationTokenDelegate.h"

@class AVQueuePlayer, FBKVOController, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, SPSession, SPTAudioSessionActivator, SPTRunningAudioUXCache;

@interface SPTRunningAudioUXManager : NSObject <SPTCancellationTokenDelegate>
{
    NSDictionary *_audioMomentList;
    NSDictionary *_tempoList;
    NSDictionary *_tempoAudioMomentOverrideList;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTAudioSessionController> _audioSessionController;
    SPSession *_session;
    SPTRunningAudioUXCache *_audioUXCache;
    NSDictionary *_defaultAudioMomentList;
    NSDictionary *_defaultTempoList;
    NSDictionary *_defaultTempoAudioMomentOverrideList;
    AVQueuePlayer *_player;
    FBKVOController *_kvoController;
    SPTAudioSessionActivator *_audioSessionActivator;
    NSTimer *_timeoutTimer;
    CDUnknownBlockType _playbackCompletionBlock;
    unsigned long long _itemsQueued;
    NSObject<OS_dispatch_queue> *_volumeOperationsQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeOperationsQueue; // @synthesize volumeOperationsQueue=_volumeOperationsQueue;
@property(nonatomic) unsigned long long itemsQueued; // @synthesize itemsQueued=_itemsQueued;
@property(copy, nonatomic) CDUnknownBlockType playbackCompletionBlock; // @synthesize playbackCompletionBlock=_playbackCompletionBlock;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) SPTAudioSessionActivator *audioSessionActivator; // @synthesize audioSessionActivator=_audioSessionActivator;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(retain, nonatomic) AVQueuePlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSDictionary *defaultTempoAudioMomentOverrideList; // @synthesize defaultTempoAudioMomentOverrideList=_defaultTempoAudioMomentOverrideList;
@property(retain, nonatomic) NSDictionary *defaultTempoList; // @synthesize defaultTempoList=_defaultTempoList;
@property(retain, nonatomic) NSDictionary *defaultAudioMomentList; // @synthesize defaultAudioMomentList=_defaultAudioMomentList;
@property(retain, nonatomic) SPTRunningAudioUXCache *audioUXCache; // @synthesize audioUXCache=_audioUXCache;
@property(retain, nonatomic) SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <SPTAudioSessionController> audioSessionController; // @synthesize audioSessionController=_audioSessionController;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) NSDictionary *tempoAudioMomentOverrideList; // @synthesize tempoAudioMomentOverrideList=_tempoAudioMomentOverrideList;
@property(retain, nonatomic) NSDictionary *tempoList; // @synthesize tempoList=_tempoList;
@property(retain, nonatomic) NSDictionary *audioMomentList; // @synthesize audioMomentList=_audioMomentList;
- (void).cxx_destruct;
- (void)cancellationTokenDidCancel:(id)arg1;
- (void)timeoutTimerFired:(id)arg1;
- (void)playerItemDidFail:(id)arg1;
- (void)playerItemDidEnd:(id)arg1;
- (void)playerDidChangeStatus;
- (void)dealloc;
- (id)init;
- (void)dispatchBlock:(CDUnknownBlockType)arg1 on:(id)arg2;
- (void)cleanupOnError:(id)arg1;
- (void)changeVolumeOnAudioDrivers:(float)arg1;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)invalidate;
- (void)syncCache;
- (id)playMoment:(long long)arg1 withTempo:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)playMoment:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithOfflineModeState:(id)arg1 audioSessionController:(id)arg2 session:(id)arg3 audioUXCache:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

