//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class Bouncer_SocialReaction, NSString;

@interface Bouncer_Metadata : PBGeneratedMessage
{
    unsigned int hasSummary_:1;
    unsigned int hasReshareId_:1;
    unsigned int hasReactions_:1;
    NSString *summary;
    NSString *reshareId;
    Bouncer_SocialReaction *reactions;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property(retain) Bouncer_SocialReaction *reactions; // @synthesize reactions;
@property(retain) NSString *reshareId; // @synthesize reshareId;
@property(retain) NSString *summary; // @synthesize summary;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)defaultInstance;
- (id)init;
- (void)dealloc;
- (void)setHasReactions:(BOOL)arg1;
- (BOOL)hasReactions;
- (void)setHasReshareId:(BOOL)arg1;
- (BOOL)hasReshareId;
- (void)setHasSummary:(BOOL)arg1;
- (BOOL)hasSummary;

@end
