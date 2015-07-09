//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BITHockeyBaseManager.h"

#import "UIAlertViewDelegate.h"

@class NSBundle, NSDate, NSLocale, NSString, NSUserDefaults;

@interface BITStoreUpdateManager : BITHockeyBaseManager <UIAlertViewDelegate>
{
    NSString *_newStoreVersion;
    NSString *_appStoreURLString;
    NSString *_currentUUID;
    _Bool _updateAlertShowing;
    _Bool _lastCheckFailed;
    id _appDidBecomeActiveObserver;
    id _networkDidBecomeReachableObserver;
    _Bool _checkForUpdateOnLaunch;
    _Bool _updateUIEnabled;
    _Bool _updateAvailable;
    _Bool _checkInProgress;
    _Bool _enableStoreUpdateManager;
    long long _updateSetting;
    NSString *_countryCode;
    id _delegate;
    NSDate *_lastCheck;
    NSBundle *_mainBundle;
    NSLocale *_currentLocale;
    NSUserDefaults *_userDefaults;
}

@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSLocale *currentLocale; // @synthesize currentLocale=_currentLocale;
@property(retain, nonatomic) NSBundle *mainBundle; // @synthesize mainBundle=_mainBundle;
@property(nonatomic, getter=isStoreUpdateManagerEnabled) _Bool enableStoreUpdateManager; // @synthesize enableStoreUpdateManager=_enableStoreUpdateManager;
@property(retain, nonatomic) NSDate *lastCheck; // @synthesize lastCheck=_lastCheck;
@property(nonatomic, getter=isCheckInProgress) _Bool checkInProgress; // @synthesize checkInProgress=_checkInProgress;
@property(nonatomic, getter=isUpdateAvailable) _Bool updateAvailable; // @synthesize updateAvailable=_updateAvailable;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isUpdateUIEnabled) _Bool updateUIEnabled; // @synthesize updateUIEnabled=_updateUIEnabled;
@property(nonatomic, getter=isCheckingForUpdateOnLaunch) _Bool checkForUpdateOnLaunch; // @synthesize checkForUpdateOnLaunch=_checkForUpdateOnLaunch;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) long long updateSetting; // @synthesize updateSetting=_updateSetting;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showUpdateAlert;
- (void)startManager;
- (void)checkForUpdate;
- (void)checkForUpdateDelayed;
- (void)checkForUpdateManual:(_Bool)arg1;
- (_Bool)processStoreResponseWithString:(id)arg1;
- (_Bool)shouldCancelProcessing;
- (_Bool)shouldAutoCheckForUpdates;
- (_Bool)hasNewVersion:(id)arg1;
- (id)lastStoreVersion;
- (void)dealloc;
- (id)init;
- (void)unregisterObservers;
- (void)registerObservers;
- (void)didBecomeActiveActions;
- (void)reportError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

