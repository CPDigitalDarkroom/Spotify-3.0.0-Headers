//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableSet, NSSet, SPTPlayerState, SPTStatefulPlayerValue;

@interface SPTStatefulPlayerPlaybackControls : NSObject
{
    SPTPlayerState *_playerState;
    NSSet *_disallowPausingReasons;
    NSSet *_disallowResumingReasons;
    NSHashTable *_observers;
    id <SPTPlayer> _player;
    SPTStatefulPlayerValue *_pauseValue;
    SPTStatefulPlayerValue *_shufflingContextValue;
    SPTStatefulPlayerValue *_repeatingContextValue;
    SPTStatefulPlayerValue *_repeatingTrackValue;
    NSMutableSet *_disallowPausingReasonsOutOfSync;
    NSMutableSet *_disallowResumingReasonsOutOfSync;
}

@property(retain, nonatomic) NSMutableSet *disallowResumingReasonsOutOfSync; // @synthesize disallowResumingReasonsOutOfSync=_disallowResumingReasonsOutOfSync;
@property(retain, nonatomic) NSMutableSet *disallowPausingReasonsOutOfSync; // @synthesize disallowPausingReasonsOutOfSync=_disallowPausingReasonsOutOfSync;
@property(retain, nonatomic) SPTStatefulPlayerValue *repeatingTrackValue; // @synthesize repeatingTrackValue=_repeatingTrackValue;
@property(retain, nonatomic) SPTStatefulPlayerValue *repeatingContextValue; // @synthesize repeatingContextValue=_repeatingContextValue;
@property(retain, nonatomic) SPTStatefulPlayerValue *shufflingContextValue; // @synthesize shufflingContextValue=_shufflingContextValue;
@property(retain, nonatomic) SPTStatefulPlayerValue *pauseValue; // @synthesize pauseValue=_pauseValue;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSSet *disallowResumingReasons; // @synthesize disallowResumingReasons=_disallowResumingReasons;
@property(retain, nonatomic) NSSet *disallowPausingReasons; // @synthesize disallowPausingReasons=_disallowPausingReasons;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
- (void).cxx_destruct;
- (void)updatePlaybackControlsForPlayerState:(id)arg1 givenOldPlayerState:(id)arg2;
- (void)setPauseResumeRestrictions;
- (void)notifyPlaybackControlsUpdate;
- (BOOL)updatePausedState:(BOOL)arg1 shufflingContextState:(BOOL)arg2 repeatingContextState:(BOOL)arg3 repeatingTrackState:(BOOL)arg4 withTimestamp:(double)arg5;
- (void)rendezVousOn:(id)arg1;
- (BOOL)changeValueLocally:(id)arg1 value:(BOOL)arg2;
@property(readonly, nonatomic) NSSet *disallowTogglingRepeatTrackReasons;
@property(nonatomic, getter=isRepeatingTrack) BOOL repeatingTrack;
@property(readonly, nonatomic) NSSet *disallowTogglingRepeatContextReasons;
@property(nonatomic, getter=isRepeatingContext) BOOL repeatingContext;
@property(readonly, nonatomic) NSSet *disallowTogglingShuffleReasons;
@property(nonatomic, getter=isShufflingContext) BOOL shufflingContext;
@property(nonatomic, getter=isPaused) BOOL paused;
- (void)stop;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithPlayer:(id)arg1;

@end
