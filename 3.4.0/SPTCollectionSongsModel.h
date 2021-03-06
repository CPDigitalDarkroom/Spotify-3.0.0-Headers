//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionFiltering.h"
#import "SPTCollectionSorting.h"
#import "SPTOfflineModeStateObserver.h"
#import "SPTPlayerObserver.h"

@class NSArray, NSObject<SPTCollectionInternal>, NSString, SPTCollectionContextMenuComponentFactory, SPTCollectionCurrentlyPlayingIndex, SPTrackContext;

@interface SPTCollectionSongsModel : NSObject <SPTPlayerObserver, SPTOfflineModeStateObserver, SPTCollectionSorting, SPTCollectionFiltering>
{
    NSObject<SPTCollectionInternal> *_collection;
    SPTCollectionContextMenuComponentFactory *_contextMenuComponentFactory;
    SPTCollectionCurrentlyPlayingIndex *_currentlyPlayingIndex;
    NSString *_textFilter;
    _Bool _showsOnlyOfflinedContent;
    _Bool _sessionOffline;
    _Bool _currentlyPlaying;
    _Bool _ascendingSortOrder;
    _Bool _updatePending;
    _Bool _contentFiltered;
    _Bool _loaded;
    id <SPTCollectionSongsModelDelegate> _delegate;
    NSArray *_tracks;
    id <SPTPlayer> _player;
    SPTrackContext *_collectionSongsContext;
    unsigned long long _sortColumn;
    double _lastRefresh;
    id <SPTOfflineModeState> _offlineNotifier;
}

@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(nonatomic, getter=isContentFiltered) _Bool contentFiltered; // @synthesize contentFiltered=_contentFiltered;
@property(nonatomic) _Bool updatePending; // @synthesize updatePending=_updatePending;
@property(nonatomic) double lastRefresh; // @synthesize lastRefresh=_lastRefresh;
@property(nonatomic) _Bool ascendingSortOrder; // @synthesize ascendingSortOrder=_ascendingSortOrder;
@property(nonatomic) unsigned long long sortColumn; // @synthesize sortColumn=_sortColumn;
@property(retain, nonatomic) SPTrackContext *collectionSongsContext; // @synthesize collectionSongsContext=_collectionSongsContext;
@property(nonatomic, getter=isCurrentlyPlaying) _Bool currentlyPlaying; // @synthesize currentlyPlaying=_currentlyPlaying;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic, getter=isSessionOffline) _Bool sessionOffline; // @synthesize sessionOffline=_sessionOffline;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(nonatomic) __weak id <SPTCollectionSongsModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)resetFilters;
@property(copy, nonatomic) NSString *textFilter;
@property(nonatomic) _Bool showsOnlyOfflinedContent;
@property(readonly, nonatomic) NSArray *supportedSortColumns;
- (void)setSortOrderWithColumn:(unsigned long long)arg1 ascending:(_Bool)arg2;
- (void)updateTracks;
- (_Bool)trackIsOffline:(id)arg1;
- (unsigned long long)offlineSyncStateForTrackAtIndex:(unsigned long long)arg1;
@property(nonatomic, getter=isOffline) _Bool offline;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)contextMenuComponentForTrackAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) SPTrackContext *context;
@property(readonly, nonatomic) NSString *username;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateTracksWithThrottle:(double)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
@property(readonly, nonatomic) long long currentlyPlayingIndex;
- (void)updateCurrentlyPlayingTrack:(id)arg1;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 player:(id)arg2 contextMenuComponentFactory:(id)arg3 offlineNotifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

