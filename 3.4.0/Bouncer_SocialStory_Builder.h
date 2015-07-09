//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage_Builder.h"

@class Bouncer_SocialStory;

@interface Bouncer_SocialStory_Builder : PBGeneratedMessage_Builder
{
    Bouncer_SocialStory *result;
}

@property(retain) Bouncer_SocialStory *result; // @synthesize result;
- (id)clearWeight;
- (id)setWeight:(int)arg1;
- (int)weight;
- (_Bool)hasWeight;
- (id)addRelated:(id)arg1;
- (id)clearRelatedList;
- (id)addAllRelated:(id)arg1;
- (id)replaceRelatedAtIndex:(int)arg1 with:(id)arg2;
- (id)relatedAtIndex:(int)arg1;
- (id)relatedList;
- (id)clearMetadata;
- (id)mergeMetadata:(id)arg1;
- (id)setMetadataBuilder:(id)arg1;
- (id)setMetadata:(id)arg1;
- (id)metadata;
- (_Bool)hasMetadata;
- (id)clearUri;
- (id)setUri:(id)arg1;
- (id)uri;
- (_Bool)hasUri;
- (id)clearUsername;
- (id)setUsername:(id)arg1;
- (id)username;
- (_Bool)hasUsername;
- (id)clearTimestamp;
- (id)setTimestamp:(long long)arg1;
- (long long)timestamp;
- (_Bool)hasTimestamp;
- (id)clearType;
- (id)setType:(int)arg1;
- (int)type;
- (_Bool)hasType;
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

