//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeatureFlagsObserver.h"
#import "SPTCollectionObserver.h"
#import "SPTNowPlayingTrackMetadataQueueObserver.h"
#import "SPTPlayerObserver.h"

@class NSString, NSURL, SPTNowPlayingModel, SPTNowPlayingTrackMetadataQueue, SPTPlayerState, SPTPlayerTrack, SPTStatefulPlayer;

@interface SPTNowPlayingBarModel : NSObject <SPTPlayerObserver, SPTNowPlayingTrackMetadataQueueObserver, SPTAbbaFeatureFlagsObserver, SPTCollectionObserver>
{
    _Bool _skippingToPreviousTrackAllowed;
    _Bool _skippingToNextTrackAllowed;
    _Bool _playing;
    _Bool _collectionButtonEnabled;
    _Bool _currentTrackIsInCollection;
    id <SPTNowPlayingBarModelDelegate> _delegate;
    SPTNowPlayingTrackMetadataQueue *_trackMetadataQueue;
    SPTPlayerTrack *_displayedMetadata;
    SPTPlayerTrack *_playingMetadata;
    NSURL *_contextURL;
    id <SPTPlayer> _player;
    id <SPTAbbaFeatureFlags> _featureFlags;
    id <SPTLocalSettings> _localSettings;
    id <SPTProductState> _productState;
    id <SPTRunningTestManager> _runningTestManager;
    id <SPTCollection> _collection;
    SPTPlayerState *_lastState;
    SPTStatefulPlayer *_statefulPlayer;
    SPTNowPlayingModel *_nowPlayingModel;
    NSURL *_currentTrackURL;
}

@property(retain, nonatomic) NSURL *currentTrackURL; // @synthesize currentTrackURL=_currentTrackURL;
@property(retain, nonatomic) SPTNowPlayingModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(retain, nonatomic) SPTStatefulPlayer *statefulPlayer; // @synthesize statefulPlayer=_statefulPlayer;
@property(retain, nonatomic) SPTPlayerState *lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) id <SPTCollection> collection; // @synthesize collection=_collection;
@property(nonatomic) __weak id <SPTRunningTestManager> runningTestManager; // @synthesize runningTestManager=_runningTestManager;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) _Bool currentTrackIsInCollection; // @synthesize currentTrackIsInCollection=_currentTrackIsInCollection;
@property(nonatomic, getter=isCollectionButtonEnabled) _Bool collectionButtonEnabled; // @synthesize collectionButtonEnabled=_collectionButtonEnabled;
@property(copy, nonatomic) NSURL *contextURL; // @synthesize contextURL=_contextURL;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool skippingToNextTrackAllowed; // @synthesize skippingToNextTrackAllowed=_skippingToNextTrackAllowed;
@property(nonatomic) _Bool skippingToPreviousTrackAllowed; // @synthesize skippingToPreviousTrackAllowed=_skippingToPreviousTrackAllowed;
@property(retain, nonatomic) SPTPlayerTrack *playingMetadata; // @synthesize playingMetadata=_playingMetadata;
@property(retain, nonatomic) SPTPlayerTrack *displayedMetadata; // @synthesize displayedMetadata=_displayedMetadata;
@property(retain, nonatomic) SPTNowPlayingTrackMetadataQueue *trackMetadataQueue; // @synthesize trackMetadataQueue=_trackMetadataQueue;
@property(nonatomic) __weak id <SPTNowPlayingBarModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionDidChange:(id)arg1;
- (void)featureFlagsDidChange:(id)arg1;
- (void)featureFlagsDidFinishLoadingAll:(id)arg1;
- (void)updateFeatureFlags;
- (_Bool)isCurationToolsEnabled;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)trackMetadataQueue:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)metadataChanged;
- (id)subtitle;
@property(readonly, nonatomic) long long numberOfNextSkips;
@property(readonly, nonatomic) long long numberOfPreviousSkips;
- (id)trackAtRelativeIndex:(long long)arg1;
- (_Bool)removeFromCollection:(id *)arg1;
- (_Bool)addToCollection:(id *)arg1;
- (void)updateCurrentTrackIsInCollection;
@property(readonly, nonatomic) _Bool currentTrackCanBeAddedToCollection;
- (void)skipToPreviousTrack;
- (void)skipToNextTrack;
- (void)resume;
- (void)pause;
- (_Bool)shouldShowSkipNextUpsell;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 collection:(id)arg2 nowPlayingModel:(id)arg3 featureFlags:(id)arg4 localSettings:(id)arg5 productState:(id)arg6 runningTestManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

