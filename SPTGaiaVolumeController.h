//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGaiaDeviceStateManagerObserver.h"
#import "SPTGaiaVolumeButtonControllerDelegate.h"
#import "SPTGaiaVolumeViewDelegate.h"

@class GaiaRemoteDeviceVolumeOverlayViewController, NSString, SPTGaiaDeviceManager, SPTGaiaVolumeButtonController, SPTGaiaVolumeView;

@interface SPTGaiaVolumeController : NSObject <SPTGaiaDeviceStateManagerObserver, SPTGaiaVolumeViewDelegate, SPTGaiaVolumeButtonControllerDelegate>
{
    SPTGaiaVolumeView *_volumeView;
    SPTGaiaVolumeButtonController *_volumeButtonController;
    SPTGaiaDeviceManager *_deviceManager;
    GaiaRemoteDeviceVolumeOverlayViewController *_remoteVolumeOverlay;
    float _currentVolume;
}

@property(readonly, nonatomic) float currentVolume; // @synthesize currentVolume=_currentVolume;
@property(retain, nonatomic) GaiaRemoteDeviceVolumeOverlayViewController *remoteVolumeOverlay; // @synthesize remoteVolumeOverlay=_remoteVolumeOverlay;
@property(nonatomic) __weak SPTGaiaDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(readonly, nonatomic) SPTGaiaVolumeButtonController *volumeButtonController; // @synthesize volumeButtonController=_volumeButtonController;
@property(retain, nonatomic) SPTGaiaVolumeView *volumeView; // @synthesize volumeView=_volumeView;
- (void).cxx_destruct;
- (void)updateRemoteVolumeIndicators;
@property(nonatomic) BOOL airplayHidden;
- (void)requestVolumeChange:(float)arg1;
- (void)volumeButtonControllerDidStealVolumeDown:(id)arg1;
- (void)volumeButtonControllerDidStealVolumeUp:(id)arg1;
- (void)volumeView:(id)arg1 remoteVolumeChanged:(float)arg2;
- (void)updateRemoteVolumeAvailability;
- (void)applicationDidBecomeActiveNotification;
- (void)applicationWillResignActiveNotification;
- (void)deviceStateManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)deviceStateManager:(id)arg1 device:(id)arg2 volumeDidChange:(float)arg3;
- (void)dealloc;
- (id)initWithDeviceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

