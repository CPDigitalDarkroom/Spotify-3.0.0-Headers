//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, SPTrackContext;

@protocol SPTCollection <NSObject>
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) id <SPTCollectionOfflining> offlineController;
- (_Bool)isAlbumComplete:(NSURL *)arg1;
- (_Bool)isFollowedArtist:(NSURL *)arg1;
- (_Bool)isEmpty;
- (long long)countOfTracksInCollectionForAlbumLink:(NSURL *)arg1;
- (long long)countOfAlbumsInCollectionForArtistLink:(NSURL *)arg1;
- (long long)countOfTracksInCollectionForArtistLink:(NSURL *)arg1;
- (SPTrackContext *)contextForAllTracksInCollection;
- (SPTrackContext *)contextForAlbumURL:(NSURL *)arg1;
- (SPTrackContext *)contextForArtistURL:(NSURL *)arg1;
- (void)removeObserver:(id <SPTCollectionObserver>)arg1;
- (void)addObserver:(id <SPTCollectionObserver>)arg1;
- (void)saveState;
- (_Bool)canAddTrackWithURL:(NSURL *)arg1;
- (_Bool)containsURL:(NSURL *)arg1;
- (void)removeURL:(NSURL *)arg1 bySource:(NSString *)arg2;
- (void)addURL:(NSURL *)arg1 bySource:(NSString *)arg2;
@end

