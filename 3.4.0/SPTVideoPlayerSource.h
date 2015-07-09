//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, FBKVOController;

@interface SPTVideoPlayerSource : NSObject
{
    AVPlayer *_player;
    FBKVOController *_kvoController;
}

@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
- (void).cxx_destruct;
- (void)playerStatusChanged;
- (void)recreatePlayer;
@property(readonly, nonatomic) AVPlayer *player;
- (id)init;

@end

