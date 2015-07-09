//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAudioDriverControllerObserver.h"
#import "SPTAudioDriverObserver.h"
#import "SPTGaiaDeviceStateManagerObserver.h"

@class NSArray, NSString, SPTLogCenter;

@interface SPTEqualizerModel : NSObject <SPTAudioDriverControllerObserver, SPTAudioDriverObserver, SPTGaiaDeviceStateManagerObserver>
{
    _Bool _on;
    _Bool _connectActive;
    id <SPTEqualizerModelDelegate> _delegate;
    NSArray *_values;
    NSArray *_presets;
    NSString *_preset;
    id <SPTLocalSettings> _localSettings;
    id <SPTAudioDriverController> _audioDriverController;
    id <SPTGaiaDeviceStateManager> _gaiaDeviceStateManager;
    SPTLogCenter *_logCenter;
    NSArray *_presetCurves;
    NSArray *_bands;
}

+ (id)defaultValues;
+ (id)equalizerModelWithLocalSettings:(id)arg1 audioDriverController:(id)arg2 gaiaDeviceStateManager:(id)arg3 logCenter:(id)arg4;
@property(retain, nonatomic) NSArray *bands; // @synthesize bands=_bands;
@property(retain, nonatomic) NSArray *presetCurves; // @synthesize presetCurves=_presetCurves;
@property(retain, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) id <SPTGaiaDeviceStateManager> gaiaDeviceStateManager; // @synthesize gaiaDeviceStateManager=_gaiaDeviceStateManager;
@property(nonatomic) __weak id <SPTAudioDriverController> audioDriverController; // @synthesize audioDriverController=_audioDriverController;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) _Bool connectActive; // @synthesize connectActive=_connectActive;
@property(retain, nonatomic) NSString *preset; // @synthesize preset=_preset;
@property(retain, nonatomic) NSArray *presets; // @synthesize presets=_presets;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(nonatomic) _Bool on; // @synthesize on=_on;
@property(nonatomic) __weak id <SPTEqualizerModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deviceStateManager:(id)arg1 playingRemotelyDidChange:(_Bool)arg2;
- (void)dealloc;
- (void)audioDriverDidBegin:(id)arg1;
- (void)audioDriverController:(id)arg1 didAddAudioDriver:(id)arg2;
- (void)applyEqualizerToAudioUnit:(struct OpaqueAudioComponentInstance *)arg1;
- (void)applyEqualizer;
- (id)columnNameAtIndex:(long long)arg1;
- (void)setConnectActive:(_Bool)arg1;
- (id)initWithLocalSettings:(id)arg1 audioDriverController:(id)arg2 gaiaDeviceStateManager:(id)arg3 logCenter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

