//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTOfflinePlaylistBlock.h"

@class NSArray, NSString;

@interface SPTOfflinePlaylistRecommendedPlaylistsDataSource : SPTOfflinePlaylistBlock
{
    NSString *_title;
    NSArray *_allPlaylists;
}

- (id)allPlaylists;
- (id)title;
- (void).cxx_destruct;
- (BOOL)shouldShowPlaylist:(id)arg1;
- (id)placeholder;
- (id)prepareAllPlaylistsFromEntityList:(id)arg1;
- (id)initWithSession:(id)arg1 recentlyPlayedEntityList:(id)arg2 offlineManager:(id)arg3;

@end

