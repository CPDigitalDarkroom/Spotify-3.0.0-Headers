//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTOfflineModeStateObserver.h"
#import "SPTPlayerObserver.h"
#import "SPTRadioPlaybackObserver.h"

@class NSArray, NSDate, NSError, NSString, SPTDiskUtil, SPTRadioPlaybackService, SPTRadioStationsService;

@interface SPTRadioViewModel : NSObject <SPTOfflineModeStateObserver, SPTRadioPlaybackObserver, SPTPlayerObserver>
{
    BOOL _isLoading;
    BOOL _hasSuccessfullyLoadedData;
    BOOL _playerIsPaused;
    NSArray *_recentStations;
    NSArray *_recommendedStations;
    NSArray *_genres;
    id <SPTRadioViewModelDelegate> _delegate;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTPlayer> _player;
    SPTDiskUtil *_diskCache;
    int _pendingRequests;
    NSError *_lastError;
    SPTRadioStationsService *_stationsService;
    SPTRadioPlaybackService *_playbackService;
    NSDate *_stationChangeTime;
    NSArray *_genreStations;
}

@property(retain, nonatomic) NSArray *genreStations; // @synthesize genreStations=_genreStations;
@property(retain, nonatomic) NSDate *stationChangeTime; // @synthesize stationChangeTime=_stationChangeTime;
@property(nonatomic) BOOL playerIsPaused; // @synthesize playerIsPaused=_playerIsPaused;
@property(nonatomic) __weak SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(nonatomic) __weak SPTRadioStationsService *stationsService; // @synthesize stationsService=_stationsService;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(nonatomic) int pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) SPTDiskUtil *diskCache; // @synthesize diskCache=_diskCache;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(nonatomic) __weak id <SPTRadioViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL hasSuccessfullyLoadedData; // @synthesize hasSuccessfullyLoadedData=_hasSuccessfullyLoadedData;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property(retain, nonatomic) NSArray *recommendedStations; // @synthesize recommendedStations=_recommendedStations;
@property(retain, nonatomic) NSArray *recentStations; // @synthesize recentStations=_recentStations;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)offlineModeState:(id)arg1 updated:(BOOL)arg2;
- (void)radioPlaybackService:(id)arg1 error:(id)arg2;
- (void)radioPlaybackService:(id)arg1 playbackStateChanged:(unsigned int)arg2;
- (void)cacheObjectList:(id)arg1 listName:(id)arg2;
- (void)sendFailedToLoadWithError:(id)arg1;
- (void)sendInitialError:(id)arg1;
- (void)sendInitialUpdate;
- (void)updatePlayingStation;
- (void)deleteStationWithSeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playSeed:(id)arg1 startedFromElement:(id)arg2;
@property(readonly, nonatomic) unsigned int playbackState;
@property(readonly, nonatomic) BOOL isOffline;
- (void)loadModel;
- (id)initWithPlaybackServices:(id)arg1 stationsService:(id)arg2 offlineModeState:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

