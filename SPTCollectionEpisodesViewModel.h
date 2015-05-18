//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTEpisodeContextMenuControllerDelegate.h"
#import "SPTPodcastPlayerDelegate.h"

@class NSMutableArray, NSString, NSURL, SPTOfflineManager;

@interface SPTCollectionEpisodesViewModel : NSObject <SPTPodcastPlayerDelegate, SPTEpisodeContextMenuControllerDelegate>
{
    BOOL _isLoading;
    BOOL _isLoaded;
    BOOL _grouped;
    BOOL _mediaTypesEnabled;
    id <SPTCollectionEpisodesViewModelDelegate> _delegate;
    NSURL *_URL;
    int _mediaType;
    id <SPTPodcastDataLoader> _dataLoader;
    id <SPTPodcastPlayer> _player;
    id <SPTCollection> _collection;
    id <SPTPodcastCollectionModel> _podcastCollection;
    SPTOfflineManager *_offlineManager;
    id <SPTLocalSettings> _localSettings;
    NSMutableArray *_entries;
    NSMutableArray *_episodes;
}

@property(nonatomic) BOOL mediaTypesEnabled; // @synthesize mediaTypesEnabled=_mediaTypesEnabled;
@property(retain, nonatomic) NSMutableArray *episodes; // @synthesize episodes=_episodes;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak SPTOfflineManager *offlineManager; // @synthesize offlineManager=_offlineManager;
@property(retain, nonatomic) id <SPTPodcastCollectionModel> podcastCollection; // @synthesize podcastCollection=_podcastCollection;
@property(nonatomic) __weak id <SPTCollection> collection; // @synthesize collection=_collection;
@property(retain, nonatomic) id <SPTPodcastPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic, getter=isGrouped) BOOL grouped; // @synthesize grouped=_grouped;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTCollectionEpisodesViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadLocalSettings;
- (id)localSettingsStringWithKey:(id)arg1;
- (void)podcastPlayer:(id)arg1 didChangePlayingTrackURL:(id)arg2;
- (void)markAsPlayedEpisode:(id)arg1 markAsPlayed:(BOOL)arg2;
- (void)offlineEpisode:(id)arg1 offline:(BOOL)arg2;
- (id)markAsPlayedAndRemoveEpisodeAtIndexPath:(id)arg1;
- (BOOL)isPlayingEpisodeAtIndexPath:(id)arg1;
- (void)playEpisodeAtIndexPath:(id)arg1;
- (id)entryAtIndexPath:(id)arg1;
- (id)titleForSection:(unsigned int)arg1;
- (unsigned int)numberOfEntriesInSection:(unsigned int)arg1;
- (id)headerForSection:(unsigned int)arg1;
- (unsigned int)numberOfEntrySections;
- (id)parseJSONData:(id)arg1;
- (void)unsubscribe;
- (void)loadAndSubscribe;
@property(readonly, nonatomic, getter=isMixedMediaTypes) BOOL mixedMediaTypes;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
- (id)initWithURL:(id)arg1 collection:(id)arg2 dataLoader:(id)arg3 player:(id)arg4 podcastCollection:(id)arg5 offlineManager:(id)arg6 localSettings:(id)arg7 shouldJamBeEnabled:(BOOL)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
