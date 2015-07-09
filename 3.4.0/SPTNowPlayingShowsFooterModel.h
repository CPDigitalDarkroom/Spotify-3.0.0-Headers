//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerObserver.h"

@class NSString, NSURL;

@interface SPTNowPlayingShowsFooterModel : NSObject <SPTPlayerObserver>
{
    id <SPTNowPlayingShowsFooterModelDelegate> _delegate;
    id <SPTPlayer> _player;
    NSURL *_entityURI;
    NSURL *_trackURI;
    id <SPTPodcastFeature> _podcastFeature;
}

@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(copy, nonatomic) NSURL *trackURI; // @synthesize trackURI=_trackURI;
@property(copy, nonatomic) NSURL *entityURI; // @synthesize entityURI=_entityURI;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTNowPlayingShowsFooterModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)requestCurrentDescription;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 entityURI:(id)arg2 trackURI:(id)arg3 podcastFeature:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

