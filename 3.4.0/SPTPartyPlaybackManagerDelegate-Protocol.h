//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTPartyPlaybackManager, SPTPlayerState;

@protocol SPTPartyPlaybackManagerDelegate <NSObject>
- (void)playbackManager:(SPTPartyPlaybackManager *)arg1 playerStateDidChange:(SPTPlayerState *)arg2 fromState:(SPTPlayerState *)arg3;
- (_Bool)playbackManagerAllowsOnDemandPlayback:(SPTPartyPlaybackManager *)arg1;
@end

