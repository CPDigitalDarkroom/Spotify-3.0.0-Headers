//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage_Builder.h"

@class Bouncer_SocialReaction;

@interface Bouncer_SocialReaction_Builder : PBGeneratedMessage_Builder
{
    Bouncer_SocialReaction *result;
}

@property(retain) Bouncer_SocialReaction *result; // @synthesize result;
- (id)clearReshares;
- (id)mergeReshares:(id)arg1;
- (id)setResharesBuilder:(id)arg1;
- (id)setReshares:(id)arg1;
- (id)reshares;
- (_Bool)hasReshares;
- (id)clearStreams;
- (id)mergeStreams:(id)arg1;
- (id)setStreamsBuilder:(id)arg1;
- (id)setStreams:(id)arg1;
- (id)streams;
- (_Bool)hasStreams;
- (id)clearLikes;
- (id)mergeLikes:(id)arg1;
- (id)setLikesBuilder:(id)arg1;
- (id)setLikes:(id)arg1;
- (id)likes;
- (_Bool)hasLikes;
- (id)clearId;
- (id)setId:(id)arg1;
- (id)id;
- (_Bool)hasId;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;
- (void)dealloc;

@end

