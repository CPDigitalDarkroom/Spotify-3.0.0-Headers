//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTArtistViewModelData.h"

@class NSArray, NSString, SPTPlayerContext;

@interface SPTArtistOverviewModel : NSObject <SPTArtistViewModelData>
{
    BOOL _spotlightArtist;
    BOOL _verifiedArtist;
    unsigned int _playableTracksCount;
    id <SPTArtist> _artist;
    id <SPTArtistAlbum> _latestRelease;
    NSArray *_relatedArtists;
    NSArray *_topTracks;
    NSArray *_albums;
    NSArray *_singles;
    NSArray *_appearsOn;
    NSArray *_compilations;
    NSArray *_upcomingConcerts;
    NSArray *_merchandise;
    NSArray *_images;
    unsigned int _albumsCount;
    unsigned int _singlesCount;
    unsigned int _appearsOnCount;
    unsigned int _compilationsCount;
    NSString *_biography;
    NSArray *_playlists;
    SPTPlayerContext *_playContext;
    double _loadTime;
}

@property(nonatomic, getter=isVerifiedArtist) BOOL verifiedArtist; // @synthesize verifiedArtist=_verifiedArtist;
@property(nonatomic, getter=isSpotlightArtist) BOOL spotlightArtist; // @synthesize spotlightArtist=_spotlightArtist;
@property(retain, nonatomic) SPTPlayerContext *playContext; // @synthesize playContext=_playContext;
@property(retain, nonatomic) NSArray *playlists; // @synthesize playlists=_playlists;
@property(retain, nonatomic) NSString *biography; // @synthesize biography=_biography;
@property(nonatomic) unsigned int compilationsCount; // @synthesize compilationsCount=_compilationsCount;
@property(nonatomic) unsigned int appearsOnCount; // @synthesize appearsOnCount=_appearsOnCount;
@property(nonatomic) unsigned int singlesCount; // @synthesize singlesCount=_singlesCount;
@property(nonatomic) unsigned int albumsCount; // @synthesize albumsCount=_albumsCount;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSArray *merchandise; // @synthesize merchandise=_merchandise;
@property(retain, nonatomic) NSArray *upcomingConcerts; // @synthesize upcomingConcerts=_upcomingConcerts;
@property(retain, nonatomic) NSArray *compilations; // @synthesize compilations=_compilations;
@property(retain, nonatomic) NSArray *appearsOn; // @synthesize appearsOn=_appearsOn;
@property(retain, nonatomic) NSArray *singles; // @synthesize singles=_singles;
@property(retain, nonatomic) NSArray *albums; // @synthesize albums=_albums;
@property(retain, nonatomic) NSArray *topTracks; // @synthesize topTracks=_topTracks;
@property(retain, nonatomic) NSArray *relatedArtists; // @synthesize relatedArtists=_relatedArtists;
@property(retain, nonatomic) id <SPTArtistAlbum> latestRelease; // @synthesize latestRelease=_latestRelease;
@property(retain, nonatomic) id <SPTArtist> artist; // @synthesize artist=_artist;
@property(nonatomic) double loadTime; // @synthesize loadTime=_loadTime;
@property(readonly, nonatomic) unsigned int playableTracksCount; // @synthesize playableTracksCount=_playableTracksCount;
- (void).cxx_destruct;
- (id)playContextWithData:(id)arg1;
- (id)merchandiseWithArray:(id)arg1;
- (id)tracksWithArray:(id)arg1;
- (id)albumsWithArray:(id)arg1;
- (id)albumWithDictionary:(id)arg1;
- (id)artistsWithArray:(id)arg1;
- (id)playlistsWithArray:(id)arg1;
- (id)initWithDictionary:(id)arg1 artistURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

