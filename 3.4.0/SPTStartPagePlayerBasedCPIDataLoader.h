//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerObserver.h"

@class NSDate, NSString, NSTimer, SPTPlayerState, SPTStartPageCurrentlyPlayingMomentContext;

@interface SPTStartPagePlayerBasedCPIDataLoader : NSObject <SPTPlayerObserver>
{
    double _cpiValidityPeriod;
    id <SPTPlayer> _player;
    id <SPTLocalSettings> _localSettings;
    SPTStartPageCurrentlyPlayingMomentContext *_currentlyPlayingItem;
    NSDate *_lastPlayingDate;
    SPTPlayerState *_lastPlayerState;
    NSTimer *_datePersistenceTimer;
}

@property(retain, nonatomic) NSTimer *datePersistenceTimer; // @synthesize datePersistenceTimer=_datePersistenceTimer;
@property(retain, nonatomic) SPTPlayerState *lastPlayerState; // @synthesize lastPlayerState=_lastPlayerState;
@property(retain, nonatomic) NSDate *lastPlayingDate; // @synthesize lastPlayingDate=_lastPlayingDate;
@property(retain, nonatomic) SPTStartPageCurrentlyPlayingMomentContext *currentlyPlayingItem; // @synthesize currentlyPlayingItem=_currentlyPlayingItem;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) double cpiValidityPeriod; // @synthesize cpiValidityPeriod=_cpiValidityPeriod;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (id)provideCurrentDate;
- (void)stopPersistenceTimer;
- (void)clearCurrentlyPlayingItem;
- (_Bool)isContextCurrentlyPlaying:(id)arg1;
- (_Bool)isValidContext:(id)arg1 forDate:(id)arg2 withValidity:(double)arg3;
- (id)fetchCurrentlyPlayingItem;
- (double)determineCpiValidityPeriod;
- (id)retrieveLastPlayingDate;
- (id)retrieveCurrentlyPlayingItem;
- (void)periodicallyPersistDate:(id)arg1;
- (void)persistLastPlayingDate:(id)arg1;
- (void)persistCurrentlyPlayingItem:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 localSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

