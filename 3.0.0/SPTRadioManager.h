//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPRadioManager.h"
#import "SPTRadioPlaybackObserver.h"

@class NSMutableArray, NSString, NSURL, SPTRadioPlaybackService, SPTRadioStationsService;

@interface SPTRadioManager : NSObject <SPTRadioPlaybackObserver, SPRadioManager>
{
    id <SPTLocalSettings> _localSettings;
    id <SPTAbbaFeatureFlags> _featureFlags;
    NSURL *_radioAppURL;
    SPTRadioPlaybackService *_playbackService;
    SPTRadioStationsService *_stationsService;
    NSMutableArray *_observers;
}

@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak SPTRadioStationsService *stationsService; // @synthesize stationsService=_stationsService;
@property(nonatomic) __weak SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) NSURL *radioAppURL; // @synthesize radioAppURL=_radioAppURL;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (void)radioPlaybackService:(id)arg1 error:(id)arg2;
- (void)radioPlaybackService:(id)arg1 playbackStateChanged:(unsigned int)arg2;
- (void)removeRadioObserver:(id)arg1;
@property(readonly, nonatomic, getter=isRadioEntityPageEnabled) BOOL radioEntityPageEnabled;
@property(readonly, nonatomic) BOOL cannotThumbTrack;
- (void)addRadioObserver:(id)arg1;
- (void)deleteStation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadNextPageOfTracksForRadioStation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadTracksForRadioStation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createStation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)createStationWithSeedURI:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchAllStationsWithCompletion:(CDUnknownBlockType)arg1;
- (int)feedbackForTrackURL:(id)arg1;
- (void)radioThumbTrackURL:(id)arg1 isUp:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startRadioStation:(id)arg1 startedFromElement:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)startRadioStationWithSeedURL:(id)arg1 startedFromElement:(id)arg2;
@property(readonly, nonatomic) NSString *playbackDescription;
- (void)configureWithPlaybackService:(id)arg1 stationsService:(id)arg2;
- (id)initWithRadioAppURL:(id)arg1 localSettings:(id)arg2 abba:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

