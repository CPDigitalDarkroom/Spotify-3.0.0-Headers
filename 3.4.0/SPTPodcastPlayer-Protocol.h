//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSURL;

@protocol SPTPodcastPlayer
@property(readonly, nonatomic) NSURL *currentlyPlayingTrack;
@property(nonatomic) __weak id <SPTPodcastPlayerDelegate> delegate;
- (_Bool)isActiveEntityURL:(NSURL *)arg1;
- (_Bool)isActiveEpisodeURL:(NSURL *)arg1 inEntityURL:(NSURL *)arg2;
- (void)playPodcast:(NSURL *)arg1 withEpisodes:(NSArray *)arg2 startEpisodeUrl:(NSURL *)arg3;
@end
