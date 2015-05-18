//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPKVObservation, SPPlaylist, SPSession;

@interface SPTStartPageContextResolverKVOWrapper : NSObject
{
    SPSession *_session;
    CDUnknownBlockType _completion;
    SPPlaylist *_playlist;
    SPKVObservation *_contextIsLoadedObservation;
    SPKVObservation *_contextNameObservation;
}

@property(retain, nonatomic) SPKVObservation *contextNameObservation; // @synthesize contextNameObservation=_contextNameObservation;
@property(retain, nonatomic) SPKVObservation *contextIsLoadedObservation; // @synthesize contextIsLoadedObservation=_contextIsLoadedObservation;
@property(retain, nonatomic) SPPlaylist *playlist; // @synthesize playlist=_playlist;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)playlistLoaded;
- (void)resolveEntityUri:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end

