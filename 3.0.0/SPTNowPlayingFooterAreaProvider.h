//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingBaseUnitProvider.h"

@class SPTTheme;

@interface SPTNowPlayingFooterAreaProvider : SPTNowPlayingBaseUnitProvider
{
    SPTTheme *_theme;
    id <SPTPlayer> _player;
    id <SPTPodcastFeature> _podcastFeature;
}

@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)createShowsFooterUnit:(id)arg1 trackURI:(id)arg2;
- (void)createMusicFooterUnit;
- (void)processPlayerStateChange:(id)arg1;
- (id)initWithPlayer:(id)arg1 theme:(id)arg2 podcastFeature:(id)arg3;

@end

