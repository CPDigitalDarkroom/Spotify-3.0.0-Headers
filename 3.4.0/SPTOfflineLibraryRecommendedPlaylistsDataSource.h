//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTOfflineLibraryBlock.h"

#import "SPTCollectionEntityListObserver.h"

@class NSString;

@interface SPTOfflineLibraryRecommendedPlaylistsDataSource : SPTOfflineLibraryBlock <SPTCollectionEntityListObserver>
{
    NSString *_title;
    id <SPTCollectionEntityList> _entityList;
}

@property(retain, nonatomic) id <SPTCollectionEntityList> entityList; // @synthesize entityList=_entityList;
- (id)title;
- (void).cxx_destruct;
- (void)entityListDidReload:(id)arg1;
- (void)entityList:(id)arg1 metadataDidLoadAtIndexPath:(id)arg2;
- (_Bool)shouldDisplayBlockWhenEmpty;
- (id)placeholder;
- (id)generateItems;
- (_Bool)shouldShowPlaylist:(id)arg1;
- (id)prepareAllPlaylists;
- (void)dealloc;
- (void)updateAllPlaylists;
- (id)initWithSession:(id)arg1 recentlyPlayedEntityList:(id)arg2 offlineManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

