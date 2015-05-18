//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGaiaDeviceStateManagerObserver.h"
#import "SPTGaiaIconButtonDelegate.h"

@class GaiaSettings, NSDictionary, NSString, SPTGaiaDeviceManager, SPTGaiaIconView, UIButton;

@interface GaiaPlayerControl : NSObject <SPTGaiaDeviceStateManagerObserver, SPTGaiaIconButtonDelegate>
{
    UIButton *_controlView;
    SPTGaiaDeviceManager *_deviceManager;
    SPTGaiaIconView *_iconView;
    NSDictionary *_iconLastUpdateInfo;
    unsigned int _state;
    NSString *_stateString;
    GaiaSettings *_gaiaSettings;
}

@property(retain, nonatomic) GaiaSettings *gaiaSettings; // @synthesize gaiaSettings=_gaiaSettings;
@property(retain, nonatomic) NSString *stateString; // @synthesize stateString=_stateString;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(retain, nonatomic) NSDictionary *iconLastUpdateInfo; // @synthesize iconLastUpdateInfo=_iconLastUpdateInfo;
@property(retain, nonatomic) SPTGaiaIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) SPTGaiaDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain, nonatomic) UIButton *controlView; // @synthesize controlView=_controlView;
- (void).cxx_destruct;
- (void)logTouchUpEvent;
- (void)iconButtonDidMoveToWindow:(id)arg1;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)deviceStateManager:(id)arg1 deviceBeingActivatedDidChange:(id)arg2;
- (void)deviceStateManager:(id)arg1 availableDevicesDidChange:(id)arg2;
- (void)deviceStateManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)updateDeviceIcon;
- (void)dealloc;
- (id)initWithDeviceManager:(id)arg1 gaiaSettings:(id)arg2 type:(int)arg3 target:(id)arg4 action:(SEL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
