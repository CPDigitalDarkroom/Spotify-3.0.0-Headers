//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsSection.h"

#import "SPSessionObserver.h"

@class NSString, SettingsSwitchTableViewCell, SpotifyPreferences;

@interface PublishActivitySettingsSection : SettingsSection <SPSessionObserver>
{
    SettingsSwitchTableViewCell *_cell;
    SpotifyPreferences *_preferences;
}

@property(nonatomic) __weak SpotifyPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) SettingsSwitchTableViewCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (void)session:(id)arg1 incognitoModeChangedByTimeout:(BOOL)arg2;
- (void)sessionProductStatedUpdated:(id)arg1;
- (void)syncSwitchControl;
- (void)enablePublishActivityChanged:(id)arg1;
- (void)dealloc;
- (id)footerText;
- (id)cellForRow:(int)arg1;
- (int)numberOfRows;
- (id)initWithSettingsViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

