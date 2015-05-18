//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerObserver.h"

@class NSString, SPTPlayerState;

@interface SPTApplicationStatePlaybackLogger : NSObject <SPTPlayerObserver>
{
    id <SPTPlayer> _player;
    SPTPlayerState *_playerState;
    id <SPTLogCenterProtocol> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)applicationStateChanged:(BOOL)arg1;
- (void)observeApplicationState;
- (id)initWithPlayer:(id)arg1 logCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
