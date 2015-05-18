//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SPTArtist;

@interface SPTDecoratedArtist : NSObject
{
    SPTArtist *_artist;
    NSArray *_albums;
    NSArray *_pictures;
    NSArray *_topTrackURLs;
}

+ (id)topTracksForArtistMetadata:(const struct ArtistMetadata *)arg1;
+ (id)picturesForArtistMetadata:(const struct ArtistMetadata *)arg1;
+ (id)albumsFromGroups:(const Array_3df85c80 *)arg1;
+ (id)decoratedArtistWithArtist:(id)arg1;
+ (id)decoratedArtistWithMetadata:(const struct ArtistMetadata *)arg1;
@property(readonly, nonatomic) NSArray *topTrackURLs; // @synthesize topTrackURLs=_topTrackURLs;
@property(retain, nonatomic) NSArray *pictures; // @synthesize pictures=_pictures;
@property(retain, nonatomic) NSArray *albums; // @synthesize albums=_albums;
@property(retain, nonatomic) SPTArtist *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;
- (id)initWithArtist:(id)arg1 albums:(id)arg2 pictures:(id)arg3 topTrackURLs:(id)arg4;

@end

