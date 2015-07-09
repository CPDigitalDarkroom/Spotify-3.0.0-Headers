//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGaiaDeviceDelegate.h"
#import "SPTGaiaDeviceStateManager.h"

@class NSArray, NSPointerArray, NSString, SPTGaiaBonjourManager, SPTGaiaDevice;

@interface SPTGaiaDeviceManager : NSObject <SPTGaiaDeviceDelegate, SPTGaiaDeviceStateManager>
{
    shared_ptr_e32bc916 _cpp;
    struct scoped_connection remote_transfer_connection;
    struct scoped_connection device_map_connection;
    _Bool _playingRemotely;
    _Bool _canPlay;
    NSArray *_devices;
    SPTGaiaDevice *_activeDevice;
    SPTGaiaDevice *_deviceBeingActivated;
    CDUnknownBlockType _activationCallback;
    SPTGaiaBonjourManager *_bonjourManager;
    NSPointerArray *_stateObservers;
}

@property(retain, nonatomic) NSPointerArray *stateObservers; // @synthesize stateObservers=_stateObservers;
@property(retain, nonatomic) SPTGaiaBonjourManager *bonjourManager; // @synthesize bonjourManager=_bonjourManager;
@property(copy, nonatomic) CDUnknownBlockType activationCallback; // @synthesize activationCallback=_activationCallback;
@property(nonatomic) _Bool canPlay; // @synthesize canPlay=_canPlay;
@property(retain, nonatomic) SPTGaiaDevice *deviceBeingActivated; // @synthesize deviceBeingActivated=_deviceBeingActivated;
@property(retain, nonatomic) SPTGaiaDevice *activeDevice; // @synthesize activeDevice=_activeDevice;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic, getter=isPlayingRemotely) _Bool playingRemotely; // @synthesize playingRemotely=_playingRemotely;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=setAttach:) NSString *attach;
- (void)notifyDevice:(id)arg1 volumeDidChange:(float)arg2;
- (void)notifyDeviceBeingActivatedDidChange:(id)arg1;
- (void)notifyActiveDeviceDidChange:(id)arg1;
- (void)notifyAvailableDevicesDidChange:(id)arg1;
- (void)notifyPlayingRemotelyDidChange:(_Bool)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeDeviceWithServiceInfo:(id)arg1;
- (void)addDeviceWithServiceInfo:(id)arg1;
- (void)acknowledgeNewlyDiscovered;
@property(readonly, nonatomic, getter=newlyDiscoveredDevices) NSArray *newlyDiscoveredDevices;
- (void)device:(id)arg1 volumeChanged:(float)arg2;
- (void)device:(id)arg1 reportedError:(id)arg2;
- (void)rebuildDeviceList;
- (_Bool)searchForDevices;
- (void)remoteTransfer:(const shared_ptr_7f295b16 *)arg1 success:(_Bool)arg2;
- (void)activateDevice:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (shared_ptr_6857e0ac)getActiveDeviceNonConst;
- (void)handleActiveDeviceChanged:(id)arg1 forceNotify:(_Bool)arg2;
- (id)getOrCreateGaiaDeviceFromCpp:(shared_ptr_6857e0ac)arg1;
- (void)defaultsChanged:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (shared_ptr_e32bc916)cpp;
- (void)dealloc;
- (void)deinitCpp;
- (id)initWithCpp:(const shared_ptr_e32bc916 *)arg1 offlineMode:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

