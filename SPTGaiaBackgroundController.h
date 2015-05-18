//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerObserver.h"

@class NSString, SPTGaiaDeviceManager;

@interface SPTGaiaBackgroundController : NSObject <SPTPlayerObserver>
{
    _Bool _canPlay;
    _Bool _isBackgrounded;
    id <SPTPlayer> _player;
    SPTGaiaDeviceManager *_deviceManager;
    unsigned int _gaiaBackgroundTask;
}

@property(nonatomic) _Bool isBackgrounded; // @synthesize isBackgrounded=_isBackgrounded;
@property(nonatomic) _Bool canPlay; // @synthesize canPlay=_canPlay;
@property(nonatomic) unsigned int gaiaBackgroundTask; // @synthesize gaiaBackgroundTask=_gaiaBackgroundTask;
@property(nonatomic) __weak SPTGaiaDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(nonatomic) __weak id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)cancelBackgroundTask;
- (void)foregrounded;
- (void)backgrounded;
- (_Bool)updateCanPlayState;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 deviceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

