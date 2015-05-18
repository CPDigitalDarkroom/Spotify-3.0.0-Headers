//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SPTNowPlayingCoverArtView;

@protocol SPTNowPlayingCoverArtViewDataSource <NSObject>
- (BOOL)nowPlayingCoverArtViewIsLoading:(SPTNowPlayingCoverArtView *)arg1;
- (BOOL)nowPlayingCoverArtViewIsInSyncWithPlayer:(SPTNowPlayingCoverArtView *)arg1;
- (BOOL)nowPlayingCoverArtView:(SPTNowPlayingCoverArtView *)arg1 hasVideoAtRelativePage:(int)arg2;
- (NSURL *)nowPlayingCoverArtView:(SPTNowPlayingCoverArtView *)arg1 URLForImageAtRelativePage:(int)arg2;
- (BOOL)nowPlayingCoverArtView:(SPTNowPlayingCoverArtView *)arg1 canShowRelativePage:(int)arg2;
- (BOOL)nowPlayingCoverArtView:(SPTNowPlayingCoverArtView *)arg1 canScrollToRelativePage:(int)arg2;
@end
