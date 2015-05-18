//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVideoPlaybackSessionDelegate.h"

@class FBKVOController, NSMutableDictionary, NSString, SPTDriverDistraction, SPTVideoManifestService, SPTVideoPlaybackSession, SPTVideoPlaybackSessionFactory, SPTVideoStartCommand, SPTVideoSurfaceManagerImpl;

@interface SPTVideoPlaybackCoordinator : NSObject <SPTVideoPlaybackSessionDelegate>
{
    BOOL _subscribed;
    BOOL _shouldUnsubscribe;
    id <SPTResolver> _resolver;
    SPTVideoStartCommand *_lastStart;
    NSMutableDictionary *_handlers;
    SPTVideoPlaybackSessionFactory *_sessionFactory;
    SPTVideoSurfaceManagerImpl *_surfaceManager;
    SPTVideoManifestService *_manifestService;
    SPTVideoPlaybackSession *_currentSession;
    NSMutableDictionary *_pendingPrefetches;
    SPTDriverDistraction *_driverDistraction;
    FBKVOController *_kvoController;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTBannerPresentationManagerTicket> _bannerTicket;
}

@property(retain, nonatomic) id <SPTBannerPresentationManagerTicket> bannerTicket; // @synthesize bannerTicket=_bannerTicket;
@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(retain, nonatomic) SPTDriverDistraction *driverDistraction; // @synthesize driverDistraction=_driverDistraction;
@property(retain, nonatomic) NSMutableDictionary *pendingPrefetches; // @synthesize pendingPrefetches=_pendingPrefetches;
@property(retain, nonatomic) SPTVideoPlaybackSession *currentSession; // @synthesize currentSession=_currentSession;
@property(retain, nonatomic) SPTVideoManifestService *manifestService; // @synthesize manifestService=_manifestService;
@property(retain, nonatomic) SPTVideoSurfaceManagerImpl *surfaceManager; // @synthesize surfaceManager=_surfaceManager;
@property(retain, nonatomic) SPTVideoPlaybackSessionFactory *sessionFactory; // @synthesize sessionFactory=_sessionFactory;
@property(nonatomic) BOOL shouldUnsubscribe; // @synthesize shouldUnsubscribe=_shouldUnsubscribe;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) SPTVideoStartCommand *lastStart; // @synthesize lastStart=_lastStart;
@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic, getter=isSubscribed) BOOL subscribed; // @synthesize subscribed=_subscribed;
- (void).cxx_destruct;
- (void)driverDistractionDidChange;
- (void)didEnterBackground;
- (void)postTrackUnplayable:(id)arg1;
- (void)postMessage:(id)arg1 toCPEndpoint:(id)arg2;
- (void)handleCommandWithPayload:(id)arg1;
- (void)addHandlerForCommand:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)handleSubscription;
- (void)unsubscribe;
- (void)subscribe;
- (void)videoPlaybackSession:(id)arg1 didFailToPlayWithReason:(id)arg2;
- (void)videoPlaybackSessionDidFinish:(id)arg1;
- (void)videoPlaybackSession:(id)arg1 didReceiveEvent:(id)arg2;
- (void)videoPlaybackSession:(id)arg1 didEncounterError:(id)arg2;
- (void)videoPlaybackSession:(id)arg1 stateDidChange:(id)arg2;
- (void)showErrorForVideoError:(id)arg1;
- (void)showErrorModalForVideoError:(id)arg1;
- (void)dismissBanner;
- (void)showErrorBannerForVideoError:(id)arg1;
- (void)prefetchTracks:(id)arg1;
- (void)endSession;
- (void)restartSession;
- (void)beginSession:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithResolver:(id)arg1 playbackSessionFactory:(id)arg2 surfaceManager:(id)arg3 manifestService:(id)arg4 driverDistraction:(id)arg5 bannerPresentationManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

