//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTPromotedEntityData.h"

@class SPTPlayerTrack;

@interface SPTPromotedTrackEntityData : SPTPromotedEntityData
{
    SPTPlayerTrack *_playerTrack;
}

@property(readonly, nonatomic) SPTPlayerTrack *playerTrack; // @synthesize playerTrack=_playerTrack;
- (void).cxx_destruct;
- (id)initWithTrack:(id)arg1 context:(id)arg2 lineItemId:(id)arg3 creativeId:(id)arg4;

@end

