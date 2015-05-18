//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SPTPlayerContext;

@protocol SPTArtistViewModelData <NSObject>
@property(readonly, nonatomic, getter=isVerifiedArtist) BOOL verifiedArtist;
@property(readonly, nonatomic, getter=isSpotlightArtist) BOOL spotlightArtist;
@property(readonly, nonatomic) SPTPlayerContext *playContext;
@property(readonly, nonatomic) NSArray *playlists;
@property(readonly, nonatomic) NSString *biography;
@property(readonly, nonatomic) unsigned int playableTracksCount;
@property(readonly, nonatomic) unsigned int compilationsCount;
@property(readonly, nonatomic) unsigned int appearsOnCount;
@property(readonly, nonatomic) unsigned int singlesCount;
@property(readonly, nonatomic) unsigned int albumsCount;
@property(readonly, nonatomic) NSArray *images;
@property(readonly, nonatomic) NSArray *merchandise;
@property(readonly, nonatomic) NSArray *upcomingConcerts;
@property(readonly, nonatomic) NSArray *compilations;
@property(readonly, nonatomic) NSArray *appearsOn;
@property(readonly, nonatomic) NSArray *singles;
@property(readonly, nonatomic) NSArray *albums;
@property(readonly, nonatomic) NSArray *topTracks;
@property(readonly, nonatomic) NSArray *relatedArtists;
@property(readonly, nonatomic) id <SPTArtistAlbum> latestRelease;
@property(readonly, nonatomic) id <SPTArtist> artist;
@end
