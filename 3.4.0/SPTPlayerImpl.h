//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayer.h"
#import "SPTPlayerSubscriptionObserver.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSString, NSURL, SPTPlayerState, SPTPlayerSubscription;

@interface SPTPlayerImpl : NSObject <SPTPlayerSubscriptionObserver, SPTPlayer>
{
    id <SPTResolver> _resolver;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_featureIdentifier;
    NSString *_featureVersion;
    NSHashTable *_observers;
    SPTPlayerState *_lastState;
    CDUnknownBlockType _timeGetter;
    SPTPlayerSubscription *_subscription;
    CDUnknownBlockType _endpointSuffixGetter;
    NSURL *_viewURI;
    NSString *_referrerIdentifier;
}

+ (id)errorRequestWithEndpointSuffix:(id)arg1;
+ (id)makeRequestWithAction:(id)arg1 endpointSuffix:(id)arg2 suffix:(id)arg3 body:(id)arg4;
+ (id)failedTaskWithLocalizedErrorString:(id)arg1;
+ (id)makeErrorWithLocalizedString:(id)arg1;
+ (id)requestHeaders;
@property(readonly, copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
- (void).cxx_destruct;
- (id)globalPlayerSubscription:(id)arg1 parseStateUpdate:(id)arg2;
- (void)globalPlayerSubscription:(id)arg1 gotStateUpdate:(id)arg2;
- (void)fetchState:(CDUnknownBlockType)arg1 on:(id)arg2;
- (void)removePlayerObserver:(id)arg1;
- (void)addPlayerObserver:(id)arg1;
- (void)emitStateUpdate:(id)arg1 oldState:(id)arg2 observer:(id)arg3;
- (_Bool)hasObserver:(id)arg1;
- (id)loggingParams;
- (id)restore:(id)arg1;
- (id)save;
- (id)updateWithContext:(id)arg1;
- (id)seekTo:(double)arg1;
- (id)setRepeatingTrack:(_Bool)arg1;
- (id)setRepeatingContext:(_Bool)arg1;
- (id)setShufflingContext:(_Bool)arg1;
- (id)skipToNextTrackWithOptions:(id)arg1 track:(id)arg2;
- (id)skipToPreviousTrackWithOptions:(id)arg1 track:(id)arg2;
- (id)skipToNextTrackWithOptions:(id)arg1;
- (id)skipToPreviousTrackWithOptions:(id)arg1;
- (id)pause:(id)arg1;
- (id)resume;
- (id)stop;
- (id)preparePlaybackOfContext:(id)arg1 options:(id)arg2 viewURI:(id)arg3;
- (id)playContext:(id)arg1 options:(id)arg2 externalReferrer:(id)arg3;
- (id)playContext:(id)arg1 options:(id)arg2;
- (id)playContext:(id)arg1 options:(id)arg2 viewURI:(id)arg3;
- (id)playOrPrepareContext:(id)arg1 options:(id)arg2 viewURI:(id)arg3 externalReferrer:(id)arg4 prepare:(_Bool)arg5;
- (id)playOriginWithViewURIOverride:(id)arg1 externalReferrer:(id)arg2;
- (id)sendRequestWithAction:(id)arg1;
- (id)sendRequestWithAction:(id)arg1 parameters:(id)arg2;
- (id)initWithResolver:(id)arg1 queue:(id)arg2 timeGetter:(CDUnknownBlockType)arg3 playerSubscription:(id)arg4 endpointSuffixGetter:(CDUnknownBlockType)arg5 viewURI:(id)arg6 referrerIdentifier:(id)arg7 featureIdentifier:(id)arg8 featureVersion:(id)arg9;
- (id)initWithResolver:(id)arg1 queue:(id)arg2 playerSubscription:(id)arg3 endpointSuffixGetter:(CDUnknownBlockType)arg4 viewURI:(id)arg5 referrerIdentifier:(id)arg6 featureIdentifier:(id)arg7 featureVersion:(id)arg8;
- (id)initWithResolver:(id)arg1 queue:(id)arg2 timeGetter:(CDUnknownBlockType)arg3 endpointSuffixGetter:(CDUnknownBlockType)arg4 viewURI:(id)arg5 referrerIdentifier:(id)arg6 featureIdentifier:(id)arg7 featureVersion:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
