//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XAAdDirectorStateDelegate.h"

@class CTCallCenter, NSMutableArray, NSString, NSURL, XAAdDirectorState, XAAdQueue;

@interface XAAdDirector : NSObject <XAAdDirectorStateDelegate>
{
    _Bool _receivedCallInteruption;
    CTCallCenter *callCenter;
    CDUnknownBlockType cancelationComplete;
    CDUnknownBlockType playbackStarted;
    XAAdDirectorState *state;
    CDUnknownBlockType tearDownComplete;
    XAAdQueue *_adQueue;
    NSMutableArray *_customActions;
    NSURL *_deferredActionURL;
    CDUnknownBlockType _playbackComplete;
    CDUnknownBlockType _microphoneLevels;
}

+ (void)updateSharedAdDirector:(id)arg1;
+ (id)sharedAdDirector;
@property(copy, nonatomic) CDUnknownBlockType microphoneLevels; // @synthesize microphoneLevels=_microphoneLevels;
@property(copy, nonatomic) CDUnknownBlockType playbackComplete; // @synthesize playbackComplete=_playbackComplete;
@property(retain, nonatomic) NSURL *deferredActionURL; // @synthesize deferredActionURL=_deferredActionURL;
@property(nonatomic) _Bool receivedCallInteruption; // @synthesize receivedCallInteruption=_receivedCallInteruption;
@property(retain, nonatomic) NSMutableArray *customActions; // @synthesize customActions=_customActions;
@property(retain, nonatomic) XAAdQueue *adQueue; // @synthesize adQueue=_adQueue;
@property(copy, nonatomic) CDUnknownBlockType tearDownComplete; // @synthesize tearDownComplete;
@property(retain, nonatomic) XAAdDirectorState *state; // @synthesize state;
@property(copy, nonatomic) CDUnknownBlockType playbackStarted; // @synthesize playbackStarted;
@property(copy, nonatomic) CDUnknownBlockType cancelationComplete; // @synthesize cancelationComplete;
@property(retain, nonatomic) CTCallCenter *callCenter; // @synthesize callCenter;
- (void).cxx_destruct;
- (void)headlessModeError:(id)arg1;
- (void)sendRemoteError:(id)arg1;
- (void)unregisterCallCenterEvent;
- (void)registerCallCenterEvent;
- (void)onCoreTelephonyEvent:(id)arg1;
- (_Bool)currentlyInCall;
- (void)handleDeferredAction;
- (void)onLocalNotificationReceived:(id)arg1;
- (void)onDidBecomeActive:(id)arg1;
- (void)onEnteredBackground:(id)arg1;
- (void)getBluetoothDeviceConfiguration;
- (void)onBluetoothConnection;
- (void)onAudioSessionEvent:(id)arg1;
- (void)onRemoteControlEvent:(id)arg1;
- (void)onAudioStarted:(id)arg1;
- (void)onEvent:(id)arg1;
- (void)unsubscribeEvents;
- (void)subscribeToEvents;
- (void)event:(id)arg1;
- (id)nextAd;
- (id)advertisementQueue;
- (id)requestKey;
- (id)currentAction;
- (id)currentAdvertisement;
- (_Bool)adAvailable;
- (_Bool)adPlaying;
- (_Bool)adPresented;
- (void)cancelAdvertisement:(id)arg1 dismissalBlock:(CDUnknownBlockType)arg2;
- (void)resumeAdvertisement;
- (void)pauseAdvertisement;
- (void)microphoneLevel:(CDUnknownBlockType)arg1;
- (void)setPlayCompleteBlock:(CDUnknownBlockType)arg1;
- (void)setPlayStartedBlock:(CDUnknownBlockType)arg1;
- (void)playAdvertisementAsInTileTuner:(id)arg1 withContainingView:(id)arg2;
- (void)playAdvertisementAsInterstitial:(id)arg1 withRootViewController:(id)arg2;
- (void)playAdvertisementAsAudioOnly:(id)arg1;
- (void)playAdvertisement:(id)arg1;
- (_Bool)validateCanPlayAdView:(id)arg1 withError:(id *)arg2;
- (void)queueAdvertisement:(id)arg1;
- (void)adViewTouched:(_Bool)arg1;
- (void)changeState:(long long)arg1 withContext:(id)arg2;
- (long long)currentStateType;
- (void)tearDown:(CDUnknownBlockType)arg1;
- (void)cleanUpProperties;
- (void)reset;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

