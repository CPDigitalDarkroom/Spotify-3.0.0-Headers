//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTNowPlayingCoverArtView;

@protocol SPTNowPlayingCoverArtViewDelegate <NSObject>
- (void)nowPlayingCoverArtViewDidChangeCoverArtForAllPages:(SPTNowPlayingCoverArtView *)arg1;
- (void)nowPlayingCoverArtView:(SPTNowPlayingCoverArtView *)arg1 didScrollToRelativePage:(int)arg2 interactively:(BOOL)arg3 dragging:(BOOL)arg4;
- (void)nowPlayingCoverArtView:(SPTNowPlayingCoverArtView *)arg1 willScrollToRelativePage:(int)arg2 interactively:(BOOL)arg3 dragging:(BOOL)arg4;
- (void)nowPlayingCoverArtView:(SPTNowPlayingCoverArtView *)arg1 didAttemptScrollToRelativePage:(int)arg2;
- (void)nowPlayingCoverArtView:(SPTNowPlayingCoverArtView *)arg1 didScrollToRelativePagePosition:(float)arg2;
@end
