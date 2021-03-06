//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTVideoPlayerMessage.h"

@class NSString;

@interface SPTVideoPlaybackState : SPTVideoPlayerMessage
{
    BOOL _paused;
    BOOL _buffering;
    NSString *_ID;
    double _timestamp;
    double _position;
    double _duration;
    double _playbackSpeed;
}

@property(readonly, nonatomic, getter=isBuffering) BOOL buffering; // @synthesize buffering=_buffering;
@property(readonly, nonatomic) double playbackSpeed; // @synthesize playbackSpeed=_playbackSpeed;
@property(readonly, nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double position; // @synthesize position=_position;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)serializedDictionary;
- (id)initWithID:(id)arg1 timestamp:(double)arg2 position:(double)arg3 duration:(double)arg4 paused:(BOOL)arg5 playbackSpeed:(double)arg6 buffering:(BOOL)arg7;

@end

