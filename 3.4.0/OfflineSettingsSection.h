//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsSection.h"

#import "SPSessionObserver.h"

@class NSString, SPSession, SPTOfflineManager, SPTSettingsTableViewCell, SettingsSwitchTableViewCell;

@interface OfflineSettingsSection : SettingsSection <SPSessionObserver>
{
    _Bool _showingGoOnlineWithinCell;
    SettingsSwitchTableViewCell *_offlineModeCell;
    SPTSettingsTableViewCell *_goOnlineWithinCell;
    SPTOfflineManager *_offlineManager;
    SPSession *_session;
    id <SPTProductState> _productState;
    id <SPTUpsellPopupManager> _upsellPopupManager;
}

@property(readonly, nonatomic) id <SPTUpsellPopupManager> upsellPopupManager; // @synthesize upsellPopupManager=_upsellPopupManager;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(nonatomic) __weak SPTOfflineManager *offlineManager; // @synthesize offlineManager=_offlineManager;
@property(nonatomic) _Bool showingGoOnlineWithinCell; // @synthesize showingGoOnlineWithinCell=_showingGoOnlineWithinCell;
@property(retain, nonatomic) SPTSettingsTableViewCell *goOnlineWithinCell; // @synthesize goOnlineWithinCell=_goOnlineWithinCell;
@property(retain, nonatomic) SettingsSwitchTableViewCell *offlineModeCell; // @synthesize offlineModeCell=_offlineModeCell;
- (void).cxx_destruct;
- (_Bool)showsAvailable;
- (id)footerText;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (void)updateGoOnlineWithinCell;
- (void)sessionLoginModeChanged:(id)arg1;
- (void)offlineSwitchChanged:(id)arg1;
- (void)dealloc;
- (id)initWithSettingsViewController:(id)arg1 productState:(id)arg2 upsellPopupManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

