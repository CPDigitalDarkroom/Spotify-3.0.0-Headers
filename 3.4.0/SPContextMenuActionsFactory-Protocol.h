//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, SPTPlayerTrack, SPTSocialChartTrackData, SPTask;

@protocol SPContextMenuActionsFactory <NSObject>
- (SPTask *)sleepTimerTaskWithTitle:(NSString *)arg1 logContext:(NSString *)arg2 action:(void (^)(void))arg3;
- (SPTask *)seeListenersForTrack:(SPTSocialChartTrackData *)arg1 logContext:(NSString *)arg2;
- (SPTask *)queueTrack:(SPTPlayerTrack *)arg1 trackImageURL:(NSURL *)arg2 logContext:(NSString *)arg3;
- (SPTask *)completeAlbumCollectionActionForURL:(NSURL *)arg1 logContext:(NSString *)arg2;
- (SPTask *)collectionActionForURL:(NSURL *)arg1 logContext:(NSString *)arg2;
- (SPTask *)addTrackToPlaylist:(NSURL *)arg1 withDefaultPlaylistName:(NSString *)arg2 logContext:(NSString *)arg3;
- (SPTask *)addTrackToPlaylist:(NSURL *)arg1 logContext:(NSString *)arg2;
- (SPTask *)addTracksToPlaylist:(NSArray *)arg1 withDefaultPlaylistName:(NSString *)arg2 logContext:(NSString *)arg3;
- (SPTask *)addTracksToPlaylist:(NSArray *)arg1 logContext:(NSString *)arg2;
- (SPTask *)startRadioWithSeedURL:(NSURL *)arg1 logContext:(NSString *)arg2;
- (SPTask *)goToAlbumWithAlbumURL:(NSURL *)arg1 logContext:(NSString *)arg2;
- (SPTask *)goToArtistWithURL:(NSURL *)arg1 logContext:(NSString *)arg2;
- (SPTask *)shareWithArtistURL:(NSURL *)arg1 artistName:(NSString *)arg2 imageURL:(NSURL *)arg3 logContext:(NSString *)arg4;
- (SPTask *)shareWithPlaylistURL:(NSURL *)arg1 playlistName:(NSString *)arg2 ownerName:(NSString *)arg3 imageURL:(NSURL *)arg4 logContext:(NSString *)arg5;
- (SPTask *)shareWithAlbumURL:(NSURL *)arg1 albumName:(NSString *)arg2 artistName:(NSString *)arg3 imageURL:(NSURL *)arg4 logContext:(NSString *)arg5;
- (SPTask *)shareWithTrackURL:(NSURL *)arg1 trackName:(NSString *)arg2 artistName:(NSString *)arg3 albumName:(NSString *)arg4 imageURL:(NSURL *)arg5 logContext:(NSString *)arg6;
@end

