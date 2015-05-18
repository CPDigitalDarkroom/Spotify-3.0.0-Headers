//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PlaylistViewModel;

@protocol PlaylistViewModelDelegate <NSObject>
- (void)playlistViewModelMetadataDidChange:(PlaylistViewModel *)arg1;
- (void)playlistViewModel:(PlaylistViewModel *)arg1 availableOfflineChanged:(BOOL)arg2;
- (void)playlistViewModelNowPlayingTrackDidChange:(PlaylistViewModel *)arg1;
- (void)playlistViewModelTracksDidChange:(PlaylistViewModel *)arg1;
- (void)playlistViewModelContextDidLoad:(PlaylistViewModel *)arg1;
@end
