//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPContextMenuActionsFactory.h"

@class NSString, SPSession;

@interface SPContextMenuActionsFactoryImplementation : NSObject <SPContextMenuActionsFactory>
{
    SPSession *_session;
    id <CollectionFeature> _collectionFeature;
    id <SPRadioManager> _radioManager;
    id <SPTUpsellPopupManager> _upsellPopupManager;
    id <PlaylistFeature> _playlistFeature;
    id <SPTShareFeature> _shareFeature;
    id <SPTSocialChartFeature> _socialChartFeature;
    id <SPTPlayer> _player;
    id <SPTPlayerQueue> _playerQueue;
    id <SPTRunningPlaybackManager> _runningPlaybackManager;
    id <SPTRunningLocalisationManager> _runningLocalisationManager;
}

@property(nonatomic) __weak id <SPTRunningLocalisationManager> runningLocalisationManager; // @synthesize runningLocalisationManager=_runningLocalisationManager;
@property(nonatomic) __weak id <SPTRunningPlaybackManager> runningPlaybackManager; // @synthesize runningPlaybackManager=_runningPlaybackManager;
@property(retain, nonatomic) id <SPTPlayerQueue> playerQueue; // @synthesize playerQueue=_playerQueue;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTSocialChartFeature> socialChartFeature; // @synthesize socialChartFeature=_socialChartFeature;
@property(retain, nonatomic) id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <PlaylistFeature> playlistFeature; // @synthesize playlistFeature=_playlistFeature;
@property(retain, nonatomic) id <SPTUpsellPopupManager> upsellPopupManager; // @synthesize upsellPopupManager=_upsellPopupManager;
@property(retain, nonatomic) id <SPRadioManager> radioManager; // @synthesize radioManager=_radioManager;
@property(retain, nonatomic) id <CollectionFeature> collectionFeature; // @synthesize collectionFeature=_collectionFeature;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)sleepTimerTaskWithTitle:(id)arg1 logContext:(id)arg2 action:(CDUnknownBlockType)arg3;
- (id)completeAlbumCollectionActionForURL:(id)arg1 logContext:(id)arg2;
- (id)collectionActionForURL:(id)arg1 logContext:(id)arg2;
- (id)immediateTask:(id)arg1;
- (id)seeListenersForTrack:(id)arg1 logContext:(id)arg2;
- (id)queueTrack:(id)arg1 trackImageURL:(id)arg2 logContext:(id)arg3;
- (id)addTrackToPlaylist:(id)arg1 withDefaultPlaylistName:(id)arg2 logContext:(id)arg3;
- (id)addTrackToPlaylist:(id)arg1 logContext:(id)arg2;
- (id)addTracksToPlaylist:(id)arg1 logContext:(id)arg2;
- (id)addTracksToPlaylist:(id)arg1 withDefaultPlaylistName:(id)arg2 logContext:(id)arg3;
- (id)startRadioWithSeedURL:(id)arg1 logContext:(id)arg2;
- (id)goToAlbumWithAlbumURL:(id)arg1 logContext:(id)arg2;
- (id)goToArtistWithURL:(id)arg1 logContext:(id)arg2;
- (id)shareWithArtistURL:(id)arg1 artistName:(id)arg2 imageURL:(id)arg3 logContext:(id)arg4;
- (id)shareWithPlaylistURL:(id)arg1 playlistName:(id)arg2 ownerName:(id)arg3 imageURL:(id)arg4 logContext:(id)arg5;
- (id)shareWithAlbumURL:(id)arg1 albumName:(id)arg2 artistName:(id)arg3 imageURL:(id)arg4 logContext:(id)arg5;
- (id)shareWithTrackURL:(id)arg1 trackName:(id)arg2 artistName:(id)arg3 albumName:(id)arg4 imageURL:(id)arg5 logContext:(id)arg6;
- (id)initWithSession:(id)arg1 collection:(id)arg2 radioManager:(id)arg3 upsellPopupManager:(id)arg4 playlist:(id)arg5 share:(id)arg6 socialChart:(id)arg7 player:(id)arg8 runningPlaybackManager:(id)arg9 runningLocalisationManager:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

