//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTStatefulPlayerQueueObserver.h"

@class NSHashTable, NSString, SPTPlayerState, SPTStatefulPlayerQueue;

@interface SPTStatefulPlayerTrackPosition : NSObject <SPTStatefulPlayerQueueObserver>
{
    BOOL _disallowSeeking;
    BOOL _disallowSeekingAlways;
    SPTPlayerState *_playerState;
    float _playbackSpeed;
    NSHashTable *_observers;
    id <SPTPlayer> _player;
    SPTStatefulPlayerQueue *_queue;
    double _duration;
    double _seekedPosition;
    double _seekedAtTimestamp;
    double _positionTimestamp;
    double _positionBase;
}

@property(nonatomic) double positionBase; // @synthesize positionBase=_positionBase;
@property(nonatomic) double positionTimestamp; // @synthesize positionTimestamp=_positionTimestamp;
@property(nonatomic) double seekedAtTimestamp; // @synthesize seekedAtTimestamp=_seekedAtTimestamp;
@property(nonatomic) double seekedPosition; // @synthesize seekedPosition=_seekedPosition;
@property(nonatomic) __weak SPTStatefulPlayerQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) BOOL disallowSeekingAlways; // @synthesize disallowSeekingAlways=_disallowSeekingAlways;
@property(nonatomic) BOOL disallowSeeking; // @synthesize disallowSeeking=_disallowSeeking;
@property(nonatomic) float playbackSpeed; // @synthesize playbackSpeed=_playbackSpeed;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
- (void).cxx_destruct;
- (void)playerQueue:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)maybeNotifyTrackPositionChange;
- (BOOL)isNoticeablePositionChange:(double)arg1 from:(double)arg2;
- (BOOL)deriveDisallowSeeking;
- (BOOL)deriveDisallowSeekingAlways;
- (float)derivePlaybackSpeed;
- (double)deriveDuration;
@property(readonly, nonatomic) BOOL displayAsEmpty;
- (void)seekTo:(double)arg1;
@property(readonly, nonatomic) double position;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

