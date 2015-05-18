//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingDurationViewController.h"

@interface SPTNowPlayingRunningDurationViewController : SPTNowPlayingDurationViewController
{
    id <SPTRunningPlaybackManager> _playbackManager;
}

@property(retain, nonatomic) id <SPTRunningPlaybackManager> playbackManager; // @synthesize playbackManager=_playbackManager;
- (void).cxx_destruct;
- (void)durationView:(id)arg1 trackProgressChanged:(float)arg2;
- (double)durationViewCurrentDuration:(id)arg1;
- (double)durationViewCurrentPosition:(id)arg1;
- (id)initWithTheme:(id)arg1 trackPositionModel:(id)arg2 trackMetadataQueue:(id)arg3 logCenter:(id)arg4 localSettings:(id)arg5 playbackManager:(id)arg6;

@end
