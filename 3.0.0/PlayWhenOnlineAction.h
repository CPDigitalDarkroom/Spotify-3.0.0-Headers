//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTOfflineModeStateObserver.h"

@class NSString;

@interface PlayWhenOnlineAction : NSObject <SPTOfflineModeStateObserver>
{
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTTrackContextPlayer> _player;
    CDUnknownBlockType _playWhenOnlineBlock;
}

- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(BOOL)arg2;
- (void)invalidate;
- (void)playRowWhenOnline:(unsigned int)arg1 fromContext:(id)arg2;
- (id)initWithOfflineModeState:(id)arg1 player:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
