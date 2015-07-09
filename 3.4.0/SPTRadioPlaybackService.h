//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerObserver.h"
#import "SPTRadioStationsObserver.h"

@class NSMutableArray, NSString, NSURL, SPTClientEventLogger, SPTDiskUtil, SPTRadioStation, SPTRadioStationsService;

@interface SPTRadioPlaybackService : NSObject <SPTPlayerObserver, SPTRadioStationsObserver>
{
    SPTRadioStation *_currentStation;
    NSURL *_currentContextURI;
    unsigned long long _playbackState;
    long long _currentTrackIndex;
    id <SPTPlayer> _player;
    SPTRadioStationsService *_stationService;
    SPTClientEventLogger *_clientEventLogger;
    CDUnknownBlockType _completion;
    NSMutableArray *_delegates;
    NSString *_currentTrackFeedback;
    SPTDiskUtil *_diskCache;
    SPTRadioStation *_previousStation;
    NSURL *_previousContextURI;
    unsigned long long _realTrackIndexOveride;
}

@property(nonatomic) unsigned long long realTrackIndexOveride; // @synthesize realTrackIndexOveride=_realTrackIndexOveride;
@property(retain, nonatomic) NSURL *previousContextURI; // @synthesize previousContextURI=_previousContextURI;
@property(retain, nonatomic) SPTRadioStation *previousStation; // @synthesize previousStation=_previousStation;
@property(retain, nonatomic) SPTDiskUtil *diskCache; // @synthesize diskCache=_diskCache;
@property(retain, nonatomic) NSString *currentTrackFeedback; // @synthesize currentTrackFeedback=_currentTrackFeedback;
@property(retain, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) SPTClientEventLogger *clientEventLogger; // @synthesize clientEventLogger=_clientEventLogger;
@property(nonatomic) __weak SPTRadioStationsService *stationService; // @synthesize stationService=_stationService;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) long long currentTrackIndex; // @synthesize currentTrackIndex=_currentTrackIndex;
@property(nonatomic) unsigned long long playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) NSURL *currentContextURI; // @synthesize currentContextURI=_currentContextURI;
@property(retain, nonatomic) SPTRadioStation *currentStation; // @synthesize currentStation=_currentStation;
- (void).cxx_destruct;
- (void)removeRadioPlaybackDelegate:(id)arg1;
- (void)addRadioPlaybackDelegate:(id)arg1;
@property(readonly, nonatomic) NSString *playbackDescription;
- (void)setFeedbackForTrackURL:(id)arg1 thumbs:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)feedbackForTrackURL:(id)arg1;
- (void)radioStationService:(id)arg1 loadedTracksForStation:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)restoreStationFromState:(id)arg1;
- (void)broadcastCurrentTrackChanged;
- (void)broadcastPlaybackError:(id)arg1;
- (void)broadcastPlaybackStateChanged:(unsigned long long)arg1;
- (void)forceRebroadcastCurrentPlaybackState;
- (id)contextForStation:(id)arg1 withFirstTrackIndex:(int)arg2;
- (void)startRadioStationWithSeedURL:(id)arg1 startedFromElement:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startRadioStation:(id)arg1 startedFromElement:(id)arg2 atIndex:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startRadioStation:(id)arg1 startedFromElement:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startDecoratedRadioStation:(id)arg1 startedFromElement:(id)arg2 atIndex:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)restrictionsForRadioPlayer;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 stationsService:(id)arg2 clientEventLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

