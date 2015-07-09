//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTPlayerTrack, SPTVideoDisplayView, UIView<SPTVideoSurface>;

@protocol SPTVideoSurfaceContextDelegate <NSObject>
- (void)relinquishDisplayView:(SPTVideoDisplayView *)arg1;
- (SPTVideoDisplayView *)obtainDisplayView;
- (void)videoSurfaceAttachedStateDidChange:(UIView<SPTVideoSurface> *)arg1;
- (void)videoSurfaceAttachedStateWillChange:(UIView<SPTVideoSurface> *)arg1;
- (void)videoSurfaceSizeDidChangeWhileAttached:(UIView<SPTVideoSurface> *)arg1;
- (SPTPlayerTrack *)playerTrackForVideoSurface:(UIView<SPTVideoSurface> *)arg1;
@end

