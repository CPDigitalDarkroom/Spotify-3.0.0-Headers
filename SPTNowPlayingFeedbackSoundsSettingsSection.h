//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsSection.h"

@class SettingsSwitchTableViewCell;

@interface SPTNowPlayingFeedbackSoundsSettingsSection : SettingsSection
{
    SettingsSwitchTableViewCell *_feedbackSoundCell;
}

@property(retain, nonatomic) SettingsSwitchTableViewCell *feedbackSoundCell; // @synthesize feedbackSoundCell=_feedbackSoundCell;
- (void).cxx_destruct;
- (void)feedbackSwitchChanged:(id)arg1;
- (id)cellForRow:(int)arg1;
- (int)numberOfRows;
- (id)initWithSettingsViewController:(id)arg1;

@end

