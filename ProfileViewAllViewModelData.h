//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SPTPlayerState;

@interface ProfileViewAllViewModelData : NSObject
{
    NSArray *_entities;
    SPTPlayerState *_playerState;
}

@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) NSArray *entities; // @synthesize entities=_entities;
- (void).cxx_destruct;
- (id)initWithEntities:(id)arg1;

@end

