//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (Podcast)
@property(readonly, nonatomic) BOOL spt_isVideoShowsHubViewURI;
@property(readonly, nonatomic) BOOL spt_isAudioShowsHubViewURI;
@property(readonly, nonatomic) BOOL spt_isShowsHubRootViewURI;
@property(readonly, nonatomic, getter=spt_isEpisodesCollectionURL) BOOL spt_episodesCollectionURL;
- (BOOL)isPodcastUnplayedEpisodesCollectionURL;
- (BOOL)isPodcastOfflineEpisodesCollectionURL;
- (BOOL)isPodcastCollectionURL;
- (BOOL)isPodcastURLComponents;
- (BOOL)isLegacyPodcastURLComponents;
- (BOOL)isPodcastEpisodeURLComponents;
- (BOOL)isLegacyPodcastEpisodeURLComponents;
- (id)podcastEpisodeID;
- (id)podcastID;
- (BOOL)isPodcastEpisodeURL;
- (BOOL)isPodcastURL;
@end

