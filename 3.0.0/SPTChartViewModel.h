//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerObserver.h"

@class NSArray, NSAttributedString, NSIndexPath, NSString, NSURL, SPTChart, SPTPlayerContext;

@interface SPTChartViewModel : NSObject <SPTPlayerObserver>
{
    BOOL _currentChartBeingPlayed;
    BOOL _playlistHasLoaded;
    NSIndexPath *_indexPathForTrackCurrentlyPlaying;
    NSURL *_URIForTrackCurrentlyPlayed;
    id <SPTChartViewModelDelegate> _delegate;
    id <SPTChartViewModelPlayerDelegate> _playerDelegate;
    SPTChart *_chart;
    NSURL *_currentPlayerStateOriginURL;
    id <SPTPlayer> _player;
    SPTPlayerContext *_playerContext;
    NSArray *_playerTracks;
}

@property(nonatomic) BOOL playlistHasLoaded; // @synthesize playlistHasLoaded=_playlistHasLoaded;
@property(retain, nonatomic) NSArray *playerTracks; // @synthesize playerTracks=_playerTracks;
@property(retain, nonatomic) SPTPlayerContext *playerContext; // @synthesize playerContext=_playerContext;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSURL *currentPlayerStateOriginURL; // @synthesize currentPlayerStateOriginURL=_currentPlayerStateOriginURL;
@property(retain, nonatomic) SPTChart *chart; // @synthesize chart=_chart;
@property(nonatomic) __weak id <SPTChartViewModelPlayerDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property(nonatomic, getter=isCurrentChartBeingPlayed) BOOL currentChartBeingPlayed; // @synthesize currentChartBeingPlayed=_currentChartBeingPlayed;
@property(nonatomic) __weak id <SPTChartViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *URIForTrackCurrentlyPlayed; // @synthesize URIForTrackCurrentlyPlayed=_URIForTrackCurrentlyPlayed;
@property(retain, nonatomic) NSIndexPath *indexPathForTrackCurrentlyPlaying; // @synthesize indexPathForTrackCurrentlyPlaying=_indexPathForTrackCurrentlyPlaying;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)playlistDidLoad;
- (id)indexPathForTrackWithURL:(id)arg1;
- (id)chartEntryForIndexPath:(id)arg1;
- (id)rankTitleForIndexPath:(id)arg1;
- (id)trackContextMenuSubtitleForIndexPath:(id)arg1;
- (id)defaultPlaylistNameForEntryAtIndexPath:(id)arg1;
@property(readonly, nonatomic) unsigned int numberOfTracksInChart;
@property(readonly, nonatomic) NSURL *chartImageURL;
@property(readonly, nonatomic) NSString *chartDescription;
@property(readonly, nonatomic) NSString *chartDescriptionSubtitle;
@property(readonly, nonatomic) NSAttributedString *metadataAttributedText;
@property(readonly, nonatomic) NSString *metadataText;
@property(readonly, nonatomic) NSString *chartTitle;
- (unsigned int)chartEntryStatusForIndex:(unsigned int)arg1;
- (BOOL)isPlaybackAvailableForChartEntryAtIndexPath:(id)arg1;
- (unsigned int)chartEntryPositionForIndex:(unsigned int)arg1;
- (id)subtitleForTrackAtIndex:(int)arg1;
- (id)titleForTrackAtIndex:(int)arg1;
- (id)audioTouchURIForIndexPath:(id)arg1;
- (void)playTrackAtIndexPath:(id)arg1;
- (void)playContextShuffled;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

