//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAudioDriverControllerObserver.h"
#import "SPTAudioDriverObserver.h"
#import "SPTAudioSessionController.h"
#import "SPTPlayerObserver.h"

@class AVAudioSession, NSString, SPTPlayerState;

@interface SPTAudioSessionController : NSObject <SPTPlayerObserver, SPTAudioDriverControllerObserver, SPTAudioDriverObserver, SPTAudioSessionController>
{
    _Bool _active;
    _Bool _interrupted;
    _Bool _playingToBuiltInSpeakers;
    id <SPTAudioSessionControllerDelegate> _delegate;
    id <SPTPlayer> _player;
    id <SPTAudioDriverController> _audioDriverController;
    CDUnknownBlockType _isLocalPlaybackEnabled;
    AVAudioSession *_audioSession;
    long long _lockActiveCount;
    SPTPlayerState *_lastPlayerState;
    unsigned long long _backgroundTaskIdentifier;
}

@property(nonatomic) _Bool playingToBuiltInSpeakers; // @synthesize playingToBuiltInSpeakers=_playingToBuiltInSpeakers;
@property(nonatomic) _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) SPTPlayerState *lastPlayerState; // @synthesize lastPlayerState=_lastPlayerState;
@property(nonatomic) long long lockActiveCount; // @synthesize lockActiveCount=_lockActiveCount;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(copy) CDUnknownBlockType isLocalPlaybackEnabled; // @synthesize isLocalPlaybackEnabled=_isLocalPlaybackEnabled;
@property(retain, nonatomic) id <SPTAudioDriverController> audioDriverController; // @synthesize audioDriverController=_audioDriverController;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTAudioSessionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audioSessionInterruptionNotification:(id)arg1;
- (void)audioSessionRouteChangeNotification:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)audioDriverDidStopRunning:(id)arg1;
- (void)audioDriverDidStartRunning:(id)arg1;
- (void)audioDriverController:(id)arg1 didRemoveAudioDriver:(id)arg2;
- (void)audioDriverController:(id)arg1 didAddAudioDriver:(id)arg2;
- (void)deactivate;
- (_Bool)internalActivateAudioSession;
- (void)activate;
- (void)updateState;
- (_Bool)audioSessionDelegateAllowsModifyingAudioSession;
- (_Bool)isCurrentOutputBuiltInSpeakers;
- (_Bool)routeDescription:(id)arg1 matchesPortType:(id)arg2;
- (_Bool)hasActiveAudioDriver;
- (void)setAudioDriversSuspended:(_Bool)arg1;
- (void)unlockActiveAudioSession;
- (void)lockActiveAudioSession;
- (id)activateAudioSession;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 audioDriverController:(id)arg2 isLocalPlaybackEnabled:(CDUnknownBlockType)arg3 audioSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

