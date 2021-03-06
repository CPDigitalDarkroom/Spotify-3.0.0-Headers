//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GaiaFeature.h"
#import "SPTFeature.h"
#import "UIAlertViewDelegate.h"

@class GaiaLocalAudioSessionController, GaiaMessageBarController, GaiaPlayerControl, NSString, SPNavigationController, SPTAllocationContext, SPTGaiaBackgroundController, SPTGaiaDevicePickerViewController, SPTGaiaPlayTokenLostManager, SPTGaiaPlaybackGrabberController, SPTGaiaPopupController, SPTGaiaVolumeController, SPTPopoverController;

@interface GaiaFeatureImplementation : NSObject <UIAlertViewDelegate, SPTFeature, GaiaFeature>
{
    _Bool _airplayHidden;
    id <SPTAccountFeature> _accountFeature;
    id <BaseFeature> _base;
    id <SettingsFeature> _settings;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTMomentsFeature> _momentsFeature;
    id <SPTTinkerbellFeature> _tinkerbellFeature;
    GaiaLocalAudioSessionController *_localAudioSessionController;
    SPTGaiaVolumeController *_volumeController;
    GaiaMessageBarController *_messageBarController;
    SPTGaiaPlaybackGrabberController *_playbackGrabberController;
    SPTGaiaBackgroundController *_backgroundController;
    SPTGaiaDevicePickerViewController *_devicePickerViewController;
    SPNavigationController *_devicePickerNavigationController;
    SPTGaiaPopupController *_popupController;
    SPNavigationController *_destinationPickerNavigationController;
    SPTPopoverController *_destinationPickerPopoverController;
    GaiaPlayerControl *_gaiaPlayerControl;
    GaiaPlayerControl *_gaiaBarControl;
    id <SPTPlayer> _player;
    SPTGaiaPlayTokenLostManager *_playTokenLostManager;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) SPTGaiaPlayTokenLostManager *playTokenLostManager; // @synthesize playTokenLostManager=_playTokenLostManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) GaiaPlayerControl *gaiaBarControl; // @synthesize gaiaBarControl=_gaiaBarControl;
@property(retain, nonatomic) GaiaPlayerControl *gaiaPlayerControl; // @synthesize gaiaPlayerControl=_gaiaPlayerControl;
@property(retain, nonatomic) SPTPopoverController *destinationPickerPopoverController; // @synthesize destinationPickerPopoverController=_destinationPickerPopoverController;
@property(retain, nonatomic) SPNavigationController *destinationPickerNavigationController; // @synthesize destinationPickerNavigationController=_destinationPickerNavigationController;
@property(retain, nonatomic) SPTGaiaPopupController *popupController; // @synthesize popupController=_popupController;
@property(retain, nonatomic) SPNavigationController *devicePickerNavigationController; // @synthesize devicePickerNavigationController=_devicePickerNavigationController;
@property(retain, nonatomic) SPTGaiaDevicePickerViewController *devicePickerViewController; // @synthesize devicePickerViewController=_devicePickerViewController;
@property(retain, nonatomic) SPTGaiaBackgroundController *backgroundController; // @synthesize backgroundController=_backgroundController;
@property(retain, nonatomic) SPTGaiaPlaybackGrabberController *playbackGrabberController; // @synthesize playbackGrabberController=_playbackGrabberController;
@property(retain, nonatomic) GaiaMessageBarController *messageBarController; // @synthesize messageBarController=_messageBarController;
@property(retain, nonatomic) SPTGaiaVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) GaiaLocalAudioSessionController *localAudioSessionController; // @synthesize localAudioSessionController=_localAudioSessionController;
@property(nonatomic) __weak id <SPTTinkerbellFeature> tinkerbellFeature; // @synthesize tinkerbellFeature=_tinkerbellFeature;
@property(nonatomic) __weak id <SPTMomentsFeature> momentsFeature; // @synthesize momentsFeature=_momentsFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <BaseFeature> base; // @synthesize base=_base;
@property(nonatomic) __weak id <SPTAccountFeature> accountFeature; // @synthesize accountFeature=_accountFeature;
@property(nonatomic) _Bool airplayHidden; // @synthesize airplayHidden=_airplayHidden;
- (void).cxx_destruct;
- (void)registerFeatureSettingsPage;
- (id)provideGaiaVolumeController;
- (id)provideGaiaSettings;
- (id)provideGaiaDeviceStateManager;
- (id)provideGaiaBarButton;
- (id)provideGaiaButton;
- (_Bool)calculateAirplayHiddenState;
- (void)applicationWillChangeStatusBarOrientationNotification:(id)arg1;
- (void)presentDestinationPicker:(id)arg1 view:(id)arg2;
- (_Bool)shouldShowGaiaPicker;
- (void)presentDevicePicker;
- (void)gaiaBarControlAction;
- (void)gaiaPlayerControlAction;
- (void)setupGaiaUI;
- (void)setupGaiaTheme;
- (id)deviceManager;
- (void)unload;
- (void)load;
- (void)configureWithFeatures:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

