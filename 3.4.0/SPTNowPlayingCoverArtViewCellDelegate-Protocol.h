//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTNowPlayingCoverArtViewCell;

@protocol SPTNowPlayingCoverArtViewCellDelegate <NSObject>
- (void)nowPlayingCoverArtViewCellDidDetachVideoSurface:(SPTNowPlayingCoverArtViewCell *)arg1;
- (void)nowPlayingCoverArtViewCellDidAttachVideoSurface:(SPTNowPlayingCoverArtViewCell *)arg1;
- (void)nowPlayingCoverArtViewCellDidChangeImage:(SPTNowPlayingCoverArtViewCell *)arg1;

@optional
- (void)nowPlayingCoverArtViewCellAccessoryViewTouchedUp:(SPTNowPlayingCoverArtViewCell *)arg1;
@end
