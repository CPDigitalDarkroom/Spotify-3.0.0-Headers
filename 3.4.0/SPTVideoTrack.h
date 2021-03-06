//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTVideoPlayerMessage.h"

@class NSString, SPTPlayOrigin, SPTPlayerProvidedTrack;

@interface SPTVideoTrack : SPTVideoPlayerMessage
{
    SPTPlayerProvidedTrack *_track;
    SPTPlayOrigin *_origin;
    NSString *_playbackID;
    NSString *_entityURI;
}

@property(readonly, nonatomic) NSString *entityURI; // @synthesize entityURI=_entityURI;
@property(readonly, nonatomic) NSString *playbackID; // @synthesize playbackID=_playbackID;
@property(readonly, nonatomic) SPTPlayOrigin *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) SPTPlayerProvidedTrack *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serializedDictionary;
- (id)initWithTrack:(id)arg1 origin:(id)arg2 playbackID:(id)arg3 entityURI:(id)arg4;
- (id)initWithDictionary:(id)arg1;

@end

