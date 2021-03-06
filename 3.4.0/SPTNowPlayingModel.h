//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNowPlayingTrackMetadataQueueObserver.h"
#import "SPTPlayerObserver.h"

@class NSHashTable, NSString, SPTNowPlayingAuxiliaryActionsModel, SPTNowPlayingEntityDecorationController, SPTNowPlayingPlaybackController, SPTNowPlayingQueueMetadataModel, SPTNowPlayingRadioThumbsStateManager, SPTNowPlayingTrackMetadataQueue, SPTNowPlayingTrackPosition, SPTPlayerTrack, SPTStatefulPlayer;

@interface SPTNowPlayingModel : NSObject <SPTNowPlayingTrackMetadataQueueObserver, SPTPlayerObserver>
{
    SPTNowPlayingTrackMetadataQueue *_trackMetadataQueue;
    SPTNowPlayingRadioThumbsStateManager *_radioThumbsStateManager;
    SPTNowPlayingTrackPosition *_trackPosition;
    SPTNowPlayingPlaybackController *_playbackController;
    SPTNowPlayingAuxiliaryActionsModel *_auxiliaryActionsModel;
    SPTNowPlayingEntityDecorationController *_entityDecorationController;
    SPTNowPlayingQueueMetadataModel *_queueMetadataModel;
    id <SPTNowPlayingModelDelegate> _delegate;
    NSHashTable *_observers;
    id <SPTPlayer> _player;
    SPTStatefulPlayer *_statefulPlayer;
}

@property(retain, nonatomic) SPTStatefulPlayer *statefulPlayer; // @synthesize statefulPlayer=_statefulPlayer;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <SPTNowPlayingModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPTNowPlayingQueueMetadataModel *queueMetadataModel; // @synthesize queueMetadataModel=_queueMetadataModel;
@property(retain, nonatomic) SPTNowPlayingEntityDecorationController *entityDecorationController; // @synthesize entityDecorationController=_entityDecorationController;
@property(retain, nonatomic) SPTNowPlayingAuxiliaryActionsModel *auxiliaryActionsModel; // @synthesize auxiliaryActionsModel=_auxiliaryActionsModel;
@property(retain, nonatomic) SPTNowPlayingPlaybackController *playbackController; // @synthesize playbackController=_playbackController;
@property(retain, nonatomic) SPTNowPlayingTrackPosition *trackPosition; // @synthesize trackPosition=_trackPosition;
@property(retain, nonatomic) SPTNowPlayingRadioThumbsStateManager *radioThumbsStateManager; // @synthesize radioThumbsStateManager=_radioThumbsStateManager;
@property(retain, nonatomic) SPTNowPlayingTrackMetadataQueue *trackMetadataQueue; // @synthesize trackMetadataQueue=_trackMetadataQueue;
- (void).cxx_destruct;
- (id)init;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)trackMetadataQueue:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)notifyObserversUsingSelector:(SEL)arg1 object:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) SPTPlayerTrack *displayedMetadata;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 playerQueue:(id)arg2 gaiaDeviceStateManager:(id)arg3 collection:(id)arg4 radioManager:(id)arg5 adsManager:(id)arg6 session:(id)arg7 runningLocalisationManager:(id)arg8 runningTestManager:(id)arg9 podcastFollowService:(id)arg10 nowPlayingFeature:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

