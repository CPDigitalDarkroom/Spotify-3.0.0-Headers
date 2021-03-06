//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGaiaDeviceStateManagerObserver.h"
#import "SPTNowPlayingEntityDecorationControllerObserver.h"
#import "SPTNowPlayingTrackMetadataQueueObserver.h"
#import "SPTRadioObserver.h"

@class NSHashTable, NSString, SPTNowPlayingEntityDecorationController, SPTNowPlayingTrackMetadataQueue;

@interface SPTNowPlayingRadioThumbsStateManager : NSObject <SPTGaiaDeviceStateManagerObserver, SPTNowPlayingEntityDecorationControllerObserver, SPTNowPlayingTrackMetadataQueueObserver, SPTRadioObserver>
{
    BOOL _thumbsFeedbackInProgress;
    NSHashTable *_observers;
    id <SPTGaiaDeviceStateManager> _gaiaDeviceStateManager;
    id <SPRadioManager> _radioManager;
    SPTNowPlayingTrackMetadataQueue *_trackMetadataQueue;
    SPTNowPlayingEntityDecorationController *_entityDecorationController;
}

@property(retain, nonatomic) SPTNowPlayingEntityDecorationController *entityDecorationController; // @synthesize entityDecorationController=_entityDecorationController;
@property(retain, nonatomic) SPTNowPlayingTrackMetadataQueue *trackMetadataQueue; // @synthesize trackMetadataQueue=_trackMetadataQueue;
@property(nonatomic) __weak id <SPRadioManager> radioManager; // @synthesize radioManager=_radioManager;
@property(retain, nonatomic) id <SPTGaiaDeviceStateManager> gaiaDeviceStateManager; // @synthesize gaiaDeviceStateManager=_gaiaDeviceStateManager;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic, getter=isThumbsFeedbackInProgress) BOOL thumbsFeedbackInProgress; // @synthesize thumbsFeedbackInProgress=_thumbsFeedbackInProgress;
- (void).cxx_destruct;
- (void)entityDecorationControllerDidUpdate:(id)arg1;
- (void)trackMetadataQueue:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)deviceStateManager:(id)arg1 playingRemotelyDidChange:(BOOL)arg2;
- (void)radioManager:(id)arg1 thumbsFeedbackChangedForTrackURL:(id)arg2 trackFeedback:(int)arg3;
- (BOOL)thumbTrackUp:(BOOL)arg1 error:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)thumbDownTrack:(id *)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)thumbUpTrack:(id *)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=doThumbsHaveToBeDisabled) BOOL thumbsMustBeDisabled;
@property(readonly, nonatomic, getter=isThumbDownSelected) BOOL thumbDownSelected;
@property(readonly, nonatomic, getter=isThumbUpSelected) BOOL thumbUpSelected;
@property(readonly, nonatomic, getter=areThumbsEnabled) BOOL thumbsEnabled;
@property(readonly, nonatomic, getter=isPlayingFromRadio) BOOL playingFromRadio;
@property(readonly, nonatomic, getter=isDisplayingQueuedTrack) BOOL displayingQueuedTrack;
- (void)emitStateChange;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithGaiaDeviceStateManager:(id)arg1 radioManager:(id)arg2 trackMetadataQueue:(id)arg3 entityDecorationController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

