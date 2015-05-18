//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsSection.h"

#import "UIAlertViewDelegate.h"

@class NSArray, NSString;

@interface SPTAudioTouchSettingsSection : SettingsSection <UIAlertViewDelegate>
{
    NSArray *_cells;
    id <SPTLocalSettings> _localSettings;
    id <SPTLocalSettings> _tutorialSettings;
}

@property(retain, nonatomic) id <SPTLocalSettings> tutorialSettings; // @synthesize tutorialSettings=_tutorialSettings;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) NSArray *cells; // @synthesize cells=_cells;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)onboardingDisabledSwitchChanged:(id)arg1;
- (void)enabledSwitchChanged:(id)arg1;
- (void)didSelectRow:(int)arg1;
- (id)footerText;
- (id)cellForRow:(int)arg1;
- (int)numberOfRows;
- (id)title;
- (id)initWithSettingsViewController:(id)arg1 localSettings:(id)arg2 tutorialSettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
