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
- (BOOL)isAlbumComplete:(NSURL *)arg1;
- (BOOL)isFollowedArtist:(NSURL *)arg1;
- (BOOL)isEmpty;
- (int)countOfTracksInCollectionForAlbumLink:(NSURL *)arg1;
- (int)countOfAlbumsInCollectionForArtistLink:(NSURL *)arg1;
- (int)countOfTracksInCollectionForArtistLink:(NSURL *)arg1;
- (SPTrackContext *)contextForAllTracksInCollection;
- (SPTrackContext *)contextForAlbumURL:(NSURL *)arg1;
- (SPTrackContext *)contextForArtistURL:(NSURL *)arg1;
- (void)removeObserver:(id <SPTCollectionObserver>)arg1;
- (void)addObserver:(id <SPTCollectionObserver>)arg1;
- (void)saveState;
- (BOOL)canAddTrackWithURL:(NSURL *)arg1;
- (BOOL)containsURL:(NSURL *)arg1;
- (void)removeURL:(NSURL *)arg1 bySource:(NSString *)arg2;
- (void)addURL:(NSURL *)arg1 bySource:(NSString *)arg2;
@end

